**Here is some details:**

This is created to share the design / testcase with R&D Team to reproduce the issue.

This testcase should be easy to run and can reproduce the reported issue. 

Please avoid copying zip file here

testcase should not have absolute path pointing to any files. Instead having relative paths.

testcase should be self-contain with all required script, Raptor project Tcl file, HDL file etc.

Jira case description should have steps to reproduce the issue.

**Here is example flow:**

User create Jira case against SW product area
Gets the JIRA ID ( for example : EDA-99)

User should create folder name EDA_99 under RS GITHUB Link.

Add user testcase to https://github.com/RapidSilicon/Jira_Testcase/EDA_99/testcase that reproduce the issue as mentioned in Jira case EDA-99

Update the JIRA Case with testcase path pointing to Jira/EDA_99/testcase.

if one JIRA case have multiple testcases that reproduce the issue then please add all the testcase under one Jira ID folder; and accordingly mention the details in JIRA case.

if user notices different independent issues with SW then file separate JIRA cases for these issues.
Add the results log files to testcase repo.
