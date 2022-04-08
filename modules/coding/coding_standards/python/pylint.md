# Pylint

It is a static code analysis tool to identify errors in Python code and helps programmers enforce good coding style. This tool enables them debugging complex code with less manual work.

It is one of the tools which gets used for test-driven development (TDD).

The coding style that Pylint applies to the code is known as PEP8.

## Using Pylint

The command to use pylint on a python file is:

```
pylint filename.py
```
It returns output consisting of semantic errors, syntax errors, errors in coding style, bugs in the code, excessive and redundant code, etc. It also assigns a score that indicates whether the python code is an ideal one to use and maintains a history of scores obtained while running over a python file as well as after each edit.

## Program Examples
Python program with style issues:

Here is a simple program (sample.py) having some styling issues.
```
a = 23
b = 45
c = a + b

print(c)
```

Then, run pylint...

Below is the output after you pass the above sample to Pylint. It lists down multiple styling issues in the program.

## Use Pylint to detect errors

A better version of the above sample:
After fixing the code, the modified version looks like this:
```
"""
Code to add two numbers
"""

a = 23
b = 45
c = a + b

print(c)
```

The output will come as:


## Pylint Configuration

Pylint is configured by the `.pylintrc` file.  Some configurations include, but are not limited to:

Pylint provides global options and switches.

### ignore
Files or directories to be skipped. They should be base names, not paths.

Default: CVS

### ignore-patterns
Files or directories matching the regex patterns are skipped. The regex matches against base names, not paths. The default value ignores emacs file locks

Default: ^\.#

### ignore-paths
Add files or directories matching the regex patterns to the ignore-list. The regex matches against paths and can be in Posix or Windows format.

### persistent
Pickle collected data for later comparisons.

Default: yes

### load-plugins
List of plugins (as comma separated values of python module names) to load, usually to register additional checkers.

### fail-under
Specify a score threshold to be exceeded before program exits with error.

Default: 10.0

### fail-on
Return non-zero exit code if any of these messages/categories are detected, even if score is above --fail-under value. Syntax same as enable. Messages specified are enabled, while categories only check already-enabled messages.

### jobs
Use multiple processes to speed up Pylint. Specifying 0 will auto-detect the number of processors available to use.

Default: 1

### unsafe-load-any-extension
Allow loading of arbitrary C extensions. Extensions are imported into the active Python interpreter and may run arbitrary code.

### limit-inference-results
Control the amount of potential inferred values when inferring a single object. This can help the performance when dealing with large functions or complex, nested conditions.

Default: 100

### extension-pkg-allow-list
A comma-separated list of package or module names from where C extensions may be loaded. Extensions are loading into the active Python interpreter and may run arbitrary code.

### extension-pkg-whitelist
A comma-separated list of package or module names from where C extensions may be loaded. Extensions are loading into the active Python interpreter and may run arbitrary code. (This is an alternative name to extension-pkg-allow-list for backward compatibility.)

### suggestion-mode
When enabled, pylint would attempt to guess common misconfiguration and emit user-friendly hints instead of false-positive error messages.

Default: yes

### exit-zero
Always return a 0 (non-error) status code, even if lint errors are found. This is primarily useful in continuous integration scripts.

### from-stdin
Interpret the stdin as a python script, whose filename needs to be passed as the module_or_package argument.

### recursive
Discover python modules and packages in the file system subtree.

### py-version
Minimum Python version to use for version dependent checks. Will default to the version used to run pylint.

### confidence
Only show warnings with the listed confidence levels. Leave empty to show all. Valid levels: HIGH, CONTROL_FLOW, INFERENCE, INFERENCE_FAILURE, UNDEFINED.

### enable
Enable the message, report, category or checker with the given id(s). You can either give multiple identifier separated by comma (,) or put this option multiple time (only on the command line, not in the configuration file where it should appear only once). See also the "--disable" option for examples.

### disable
Disable the message, report, category or checker with the given id(s). You can either give multiple identifiers separated by comma (,) or put this option multiple times (only on the command line, not in the configuration file where it should appear only once). You can also use "--disable=all" to disable everything first and then re-enable specific checks. For example, if you want to run only the similarities checker, you can use "--disable=all --enable=similarities". If you want to run only the classes checker, but have no Warning level messages displayed, use "--disable=all --enable=classes --disable=W".

# References
https://www.techbeamers.com/pylint-tool/
https://pylint.pycqa.org/en/latest/technical_reference/features.html
