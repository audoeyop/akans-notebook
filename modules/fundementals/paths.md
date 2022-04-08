# Absolute and Relative Pathnames

A path is a unique location to a file or a folder in a file system of an OS. A path consists of directories and filenames that point to the location of a directory or file.

## Absolute Paths

An absolute path is defined as the specifying the location of a file or directory from the root directory(/).
To write an absolute path-name:

Absolute paths must start at the root directory ( / ) and work down.

Write a slash ( / ) after every directory name (last one is optional)

For Example:
```
$cat abc.sql
```
will work only if the fie “abc.sql” exists in your current directory. However, if this file is not present in your working directory and is present somewhere else say in /home/kt , then this command will work only if you will use the absolute path like shown below:

```
cat /home/kt/abc.sql
```
In the above example, if the first character of a pathname is /, the file’s location must be determined with respect to root. When you have more than one / in a pathname, for each such /, you have to descend one level in the file system like in the above kt is one level below home, and thus two levels below root.

An absolute path is defined as specifying the location of a file or directory from the root directory(/). In other words,we can say that an absolute path is a complete path from start of actual file system from / directory.

## Relative path

A relative path is defined as the path related to the present working directly(pwd). It starts at your current directory and never starts with a / .

To be more specific let’s take a look on the below figure in which if we are looking for photos then absolute path for it will be provided as /home/jono/photos but assuming that we are already present in jono directory then the relative path for the same can be written as simple `photos`.

### Using . and .. in Relative Path-names

UNIX offers a shortcut in the relative pathname that uses either the current or parent directory as reference and specifies the path relative to it. A relative path-name can include the following symbols:

- .(a single dot) - this represents the current directory.
- ..(two dots) - this represents the parent directory.

This means that if we are currently in directory /home/kt/abc, we can use .. as an argument to `cd` to move to the parent directory /home/kt:
```
$pwd
/home/kt/abc
$cd ..               ***moves one level up***
$pwd
/home/kt
```
The example below moves up
```
$pwd
/home/kt/abc        
$cd ../..           ***moves two level up***
$pwd
/home
```

## Example of Absolute and Relative Path

Suppose you are currently located in home/kt and you want to change your directory to home/kt/abc. Let’s see both the absolute and relative path concepts to do this:

Changing directory with relative path concept :
$pwd
/home/kt
$cd abc                   
$pwd
/home/kt/abc         
Changing directory with absolute path concept:
$pwd
/home/kt
$cd /home/kt/abc
$pwd
/home/kt/abc

## Absolute vs relative paths.
Files and directores Let’s say you are here: /home/turnersd/scripts/. If you wanted to go to /home/turnersd/, you could type: cd /home/turnersd/. Or you could
use a relative path. cd .. (two periods) will take you one directory “up” to the parent directory of the current directory.
. (a single period) means the current directory
.. (two periods) means the parent directory
~ means your home directory

A few examples
mv myfile .. moves myfile to the parent directory
cp myfile ../newname copies myfile to the parent directory and names the copy newname
cp /home/turnersd/scripts/bstrap.pl . copies bstrap.pl to “.” i.e. to dot, or the current directory you’re in
cp myfile ~/subdir/newname copies myfile to subdir in your home, naming the copy newname
more ../../../myfile displays screen by screen the content of myfile, which exists 3 directories “up”
Wildcards (use carefully, especially with rm)
* matches any character. example: ls *.pl lists any file ending with “.pl” ; rm dataset* will remove all files beginning with “dataset”
[xyz] matches any character in the brackets (x, y, or z). example: cat do[or]m.txt will display the contents of either doom.txt or dorm.txt

PATH variable
Wildcards

Wildcards and Shortcuts
*	Match any string of characters, eg page* gets page1, page10, and page.txt.
?	Match any single character, eg page? gets page1 and page2, but not page10.
[...]	Match any characters in a range, eg page[1-3] gets page1, page2, and page3.
~	Short for your home directory, eg cd ~ will take you home, and rm -r ~ will destroy it.
.	The current directory.
..	One directory up the tree, eg ls ...

References
http://www.mathcs.emory.edu/~valerie/courses/fall10/155/resources/unix_cheatsheet.html
https://sites.tufts.edu/cbi/files/2013/01/linux_cheat_sheet.pdf
