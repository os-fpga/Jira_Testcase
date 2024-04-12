import os
import sys
import argparse
import glob
import threading

MAX_THREADS = 32

class ProjectThread(threading.Thread):
  def __init__(self, tool, project):
    threading.Thread.__init__(self)
    self.tool = tool
    self.project = project
    self.status = None

  def run(self):
    self.execute()

  def execute(self):
    cmd = "cd auto_run_results/{proj:s} && {tool:s} --batch --script raptor.tcl > raptor.run.txt".format(
      proj=self.project, tool=self.tool
    )
    print("  Run command: {cmd:s}".format(cmd=cmd))
    self.status = os.system(cmd) == 0

def get_all_projects():
  projects = []
  all_files = glob.glob("*")
  for path in all_files:
    if os.path.isdir(path):
      if path not in ["golden", "auto_run_results"]:
        projects.append(path)
  return projects

def get_run_porjects(projects, exclude_projects):
  projs = get_all_projects()
  run_projects = []
  if isinstance(projects, str):
    temp = projects.split(",")
    for proj in temp:
      if proj in projs:
        run_projects.append(proj)
      else:
        print("Warning: Project {proj:s} is invalid".format(proj=proj))
    if len(run_projects) == 0:
      print("Warning: Does not detect any valid project input. Run all")
      run_projects = projs
  else:
    run_projects = projs
  if isinstance(exclude_projects, str):
    temp = exclude_projects.split(",")
    for proj in temp:
      if proj in run_projects:
        print("Info: Exclude project {proj:s}".format(proj=proj))
        run_projects.remove(proj)
    if len(run_projects) == 0:
      print("Warning: No project to be run")
  return run_projects

def get_thread_count(threads):
  if isinstance(threads, int):
    if threads <= 0:
      print("Warning: Set threads count to 1")
      threads_count = 1
    elif threads > MAX_THREADS:
      print("Warning: Reduce/set threads count to {max_thread:d}".format(max_thread=MAX_THREADS))
      threads_count = MAX_THREADS
    else:
      threads_count = threads
  else:
    print("Warning: Set threads count to 1")
    threads_count = 1
  return threads_count

def get_tcl_controls(keyword, control):
  controls = []
  if isinstance(control, str):
    temp = control.split(",")
    for t in temp:
      controls.append("##__{k:s}__{c:s}__##".format(k=keyword, c=t.upper()))
    print(controls[-1])
  return controls

def prepare_project(proj, device, add_controls, remove_controls):
  print("Prepare project {proj:s}".format(proj=proj))
  os.system("rm -rf auto_run_results/{proj:s}".format(proj=proj))
  os.system("cp -rf {proj:s} auto_run_results/{proj:s}".format(proj=proj))
  contraints_file = "constraints.sdc"
  device_contraints_file = "{dev:s}constraints.sdc".format(dev=device.lower())
  if os.path.exists(device_contraints_file) and not os.path.isdir(
    device_contraints_file
  ):
    print(
      "  Warning: Use device constraint file: {file:s}".format(
        file=device_contraints_file
      )
    )
    contraints_file = device_contraints_file
  copy_file(
    "raptor.tcl",
    "auto_run_results/{proj:s}/raptor.tcl".format(proj=proj),
    {"__DEVICE__": device, "__CONSTRAINTS_FILE__": contraints_file},
    add_controls,
    remove_controls,
  )

def format_file():
  projects = get_all_projects()
  for project in projects:
    for extension in ["*.v", "*.sv"]:
      all_files = glob.glob(
        "{proj:s}/{ext:s}".format(proj=project, ext=extension)
      )
      for file in all_files:
        lines = []
        ifile = open(file)
        change = False
        for line in ifile:
          lines.append(line.rstrip())
        ifile.close()
        ofile = open(file, "w")
        for line in lines:
          ofile.write(line)
          ofile.write("\n")
        ofile.close()

def copy_file(src, dest, mappings, add_controls, remove_controls):
  ifile = open(src)
  ofile = open(dest, "w")
  for line in ifile:
    line = line.rstrip()
    if line.find("##__ADD__") == 0 and line.find("__##") != -1:
      index = line.find("__##")
      control = line[: index + 4]
      line = line[index + 4 :]
      line = line.lstrip()
      # Only add this if it is defined in add_controls
      if control not in add_controls:
        continue
    elif line.find("##__REMOVE__") == 0 and line.find("__##") != -1:
      index = line.find("__##")
      control = line[: index + 4]
      line = line[index + 4 :]
      line = line.lstrip()
      # Only remove this if it is defined in remove_controls
      if control in remove_controls:
        continue
    for r in mappings:
      line = line.replace(r, mappings[r])
    ofile.write(line)
    ofile.write("\n")
  ifile.close()
  ofile.close()

def update_golden(project):
  files = glob.glob("auto_run_results/summary/{proj:s}/*".format(proj=project))
  for file in files:
    filename = os.path.basename(file)
    os.system("mkdir -p golden/{proj:s}".format(proj=project))
    print("    Update {file:s}".format(file=filename))
    os.system("cp -rf {file:s} golden/{proj:s}/.".format(file=file, proj=project))
    
def compare_golden(project):
  files = glob.glob("golden/{proj:s}/*".format(proj=project))
  for file in files:
    filename = os.path.basename(file)
    result_file = "auto_run_results/summary/{proj:s}/{file:s}".format(
      proj=project, file=filename
    )
    if os.path.exists(result_file):
      g = open(file)
      r = open(result_file)
      glist = [l for l in g]
      rlist = [l for l in r]
      if len(glist) == len(rlist):
        status = True
        for gl, rl in zip(glist, rlist):
          if gl != rl:
            status = False
            break
        if status:
          print("    Compare golden {file:s} pass".format(file=filename))
        else:
          print(
            "    Error: Compare golden {file:s} failed".format(
              file=filename
            )
          )
      else:
        print("    Error: Compare golden {file:s} failed".format(file=filename))
      g.close()
      r.close()
    else:
      print(
        "  Error: Result summary file {file:s} does not exist".format(
          file=result_file
        )
      )

def main():
  parser = argparse.ArgumentParser(
    prog="ICB Tester", description="Program that help to run ICB test"
  )
  subparsers = parser.add_subparsers(dest="subparser_name")
  format_parser = subparsers.add_parser("format")
  clean_parser = subparsers.add_parser("clean")
  parser.add_argument("-p", "--projects", default=None, help="A list of project(s) to run (seperated by ','). By default run all projects")
  parser.add_argument("-e", "--exclude_projects", default=None, help="A list of project(s) to exclude (seperated by ','). By default exclude none")
  parser.add_argument("-t", "--threads", type=int, default=1, help="Multi-threading count. By default is 1")
  parser.add_argument("-d", "--device", default="GEMINI_COMPACT_10x8", help="Targeted device. By default is GEMINI_COMPACT_10x8")
  parser.add_argument("-r", "--raptor_tool", default=None, help="Raptor tool path. Must be specified")
  parser.add_argument("-u", "--update", action="store_true", help="Update result instead of compare result")
  parser.add_argument("--add_tcl_control", default=None, help="Control feature(s) to add (seperated by ',') in Raptor TCL")
  parser.add_argument("--remove_tcl_control", default=None, help="Control feature(s) to remove (seperated by ',') in Raptor TCL")
  args = parser.parse_args()
  if args.subparser_name == "format":
    format_file()
  elif args.subparser_name == "clean":
    os.system("rm -rf auto_run_results")
  else:
    if isinstance(args.raptor_tool, str) and os.path.exists(args.raptor_tool):
      projects = get_run_porjects(args.projects, args.exclude_projects)
      if len(projects):
        print("*******************************")
        threads_count = get_thread_count(args.threads)
        if not os.path.isdir("auto_run_results"):
          os.mkdir("auto_run_results")
        threads = []
        add_control = get_tcl_controls("ADD", args.add_tcl_control)
        remove_control = get_tcl_controls("REMOVE", args.remove_tcl_control)
        results = []
        for proj in projects:
          prepare_project(proj, args.device, add_control, remove_control)
          thread = ProjectThread(args.raptor_tool, proj)
          thread.start()
          threads.append(thread)
          if len(threads) == threads_count:
            threads[0].join()
            results.append(threads[0])
            threads.pop(0)
        while len(threads):
          threads[0].join()
          results.append(threads[0])
          threads.pop(0)
        print("*******************************")
        sys.stdout.flush()
        os.system("rm -rf auto_run_results/summary")
        os.mkdir("auto_run_results/summary")
        summary_files = [
          "run_1/synth_1_1/synthesis/config.json",
          "run_1/synth_1_1/impl_1_1_1/bitstream/model_config.ppdb.json",
          "run_1/synth_1_1/impl_1_1_1/bitstream/io_bitstream.detail.txt",
        ]
        print("Result/Status:")
        for result in results:
          print(
            "  Project {proj:s} raptor status: {status:s}".format(
              proj=result.project,
              status="TRUE" if result.status else "FALSE",
            )
          )
          if result.status:
            os.mkdir(
              "auto_run_results/summary/{proj:s}".format(
                proj=result.project
              )
            )
            for file in summary_files:
              os.system(
                "cp auto_run_results/{proj:s}/top/{file:s} auto_run_results/summary/{proj:s}/.".format(
                  proj=result.project, file=file
                )
              )
            if args.update :
              update_golden(result.project)
            else :
              compare_golden(result.project)

    else:
      if isinstance(args.raptor_tool, str):
        print(
          "Error: Valid raptor tool path need to specified. {tool:s} is invalid".format(
            tool=args.raptor_tool
          )
        )
      else:
        print("Error: Raptor tool is not specified")

if __name__ == "__main__":
  main()
