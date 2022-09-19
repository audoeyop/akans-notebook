Python Keywords
===============

Just like natural languages, a computer programming language comprises of a set of predefined words which are called keywords. A prescribed rule of usage for each keyword is called a syntax.

Python 3.x has 33 keywords. Since they have a predefined meaning attached, they cannot be used for any other purpose. The list of Python keywords can be obtained using the following help command in Python shell.

    >>>help("keywords")


The following table list all the keywords in Python.

| | | | |
|---|---|---|---|
|False |def	|if	|raise
None	| del	|import	|return
True	|elif	|in	|try
and	|else	|is	|while
as	|except	|lambda	|with
assert	|finally	|nonlocal	|yield
break	|for	|not
class	|from	|or
continue	|global	|pass


Except for the first three (False, None and True), the other keywords are entirely in lowercase.

Use `help()` command to know more about each individual keyword. The following will display information on the`global` keyword.

    >>>help("global")

Reserved Identifiers
--------------------

Python built-in classes contains some identifiers that have special meanings. These special identifiers are recognized by the patterns of leading and trailing underscore characters:

|Pattern|Description|Examples
|---|---|---
\_\*|\_ stores the result of the last evaluation.|>>> 5 * 5<br/>25<br/>>>> _<br/>25
|\_\_\*\_\_|It represents system-defined identifiers that matches \_\_\*\_\_ pattern, also known as **dunder names**. These can be functions or properties such as `__new__()`, `__init__()`, `__name__`, `__main__`, etc.|>>> `__name__`<br/>`'__main__'`
|\_\_\*|It represents class's private name pattern. These names are to be used with private member names of the class to avoid name clashes between private attributes of base and derived classes.

# References
https://www.tutorialsteacher.com/python/python-keywords
