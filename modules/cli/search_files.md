# Searching Files

## Grep

The `grep` utility searches any given input files, selecting lines that match one or more patterns. By default, a pattern matches an input line if the regular expression (RE) in the pattern matches the input line without its trailing new line. An empty expression matches every line. Each input line that matches at least one of the patterns are written to the standard output.

grep is used for simple patterns and basic regular expressions (BREs). Below are the frequent use cases which will be handy for developers in their day to day activity.

### Case insensitive Search
`grep -i`: Output of both commands below will be same as -i option does the case insensitive search.
```
grep -i hello file.txt
```
```
grep -i HELLO file.txt
```

### Invert Match
`grep -v `: Find all lines that don't match the given pattern.
```
grep -v hello file.txt
```

### Show Filenames
`grep -l`: Show only the filenames of the files that matched
```
grep -l hello *.txt
```
Above command lists all .txt files which has "hello" word in the current directory.

### Recursive Search
`grep -r`: Search all the files in a directory
```
grep -r hello */*.txt
```
Above command lists all .txt files inside nested directory which has "hello" word in it.

### Print Matching Part
```
grep -o hello file.txt
```
Above command prints only matching part of the line (not the complete line).

### Regular Expressions
`grep -E`: This option is used for matching Regular Expressions.
```
grep -E 'hel*' file.txt
```
Above command searches for all the lines which have words starting with 'hel'.
```
grep -E 'hel*|wo*' file.txt
```
Above command searches for all the lines which have words starting with 'hel' OR 'wo'

### Search Binaries
`grep -a`: Treat binary data like its text instead of ignoring it.

Treat all files as ASCII text. Normally grep will simply print "Binary file ... matches" if files contain binary characters. Use of this option forces grep to output lines matching the specified pattern.
```
grep -a <pattern> <binary file>
```

## Awk

The `awk` command searches for lines in files that match a pattern and performs specified actions on those lines. The action is executed on the text that matches the pattern. Patterns are enclosed in curly braces ({}). Together, a pattern and an action form a rule. The entire awk program is enclosed in single quotes (').

### Awk Commands
| Command | Description |
| ----- | -----|
| `awk '{print $1}' file` | Print first field for each record in file
| `awk '/regex/' file` | Print only lines that match regex in file
| `awk '!/regex/' file` | Print only lines that do not match regex in file
| `awk '$2 == "foo"' file` | Print any line where field 2 is equal to "foo" in file
| `awk '$2 != "foo"' file` | Print lines where field 2 is NOT equal to "foo" in file
| `awk '$1 ~ /regex/' file` | Print line if field 1 matches regex in file
| `awk '$1 !~ /regex/' file` | Print line if field 1 does NOT match regex in file
| `awk 'NR!=1{print $1}' file` | Print first field for each record in file excluding the first record
| `awk 'END{print NR}' file` | Count lines in file
| `awk '/foo/{n++}; END {print n+0}' file` | Print total number of lines that contain foo
| `awk '{total=total+NF};END{print total}' file` | Print total number of fields in all lines
| `awk '/regex/{getline;print}' file` | Print line immediately after regex, but not line containing regex in file
| `awk 'length > 32' file` | Print lines with more than 32 characters in file
| `awk 'NR==12' file` | Print line number 12 of file

### Awk Reference
| Item | Description |
| ----- | -----|
| $1| Reference first column
| awk '/pattern/ {action}' file | Execute action for matched pattern 'pattern' on file 'file'
|; | separate two actions|
| print| Print current record line
| $0 | Reference current record line
| $2 | Reference second column
| FS | Field separator of input file (default whitespace)
| NF | Number of fields in current record
| NR | Line number of the current record
| ^ | Match beginning of field
| ~ | Match opterator
| !~ | Do not match operator
| -F | Command line option to specify input field delimiter
| BEGIN | Denotes block executed once at start
| ENDD | enotes block executed once at end
| str1 str2 | Concat str1 and str2
| FILENAME | Reference current input file
| FNR | Reference number of the current record relative to current input file
| OFS | Field separator of the outputted data (default whitespace)
| ORS | Record separator of the outputted data (default newline)
| RS | Record separator of input file (default newline)
| CONVFMT | Conversion format used when converting numbers (default %.6g)
| SUBSEP | Separates multiple subscripts (default 034)
| OFMT | Output format for numbers (default %.6g)
| ARGC | Argument count, assignable
| ARGV | Argument array, assignable
| ENVIRON |Array of environment variables
| index(s,t)| Position in string s where string t occurs, 0 if not found
| length(s) | Length of string s (or $0 if no arg)
| randRandom | number between 0 and 1
| substr(s,index,len) | Return len-char substring of s that begins at index (counted from 1)
| srandSet | seed for rand and return previous seed
| int(x) | Truncate x to integer value
Functions II
| split(s,a,fs) | Split string s into array a split by fs, returning length of a
| match(s,r) | Position in string s where regex r occurs, or 0 if not found
| sub(r,t,s) | Substitute t for first occurrence of regex r in string s (or $0 if s not given)
| gsub(r,t,s) | Substitute t for all occurrences of regex r in string s
| system(cmd) | Execute cmd and return exit status
| tolower(s) | String s to lowercase
| toupper(s) | String s to uppercase
| getlineSet $0 to next input record from current input file.

## Sed

The `sed` command stands for stream editor and it can perform searching, find and replace, insertion or deletion on text and file contents.

### `sed` Examples:
Consider the below text file as an input.
```
$ cat > geekfile.txt
unix is great os. unix is opensource. unix is free os.
learn operating system.
unix linux which one you choose.
unix is easy to learn.unix is a multiuser os.Learn unix .unix is a powerful.
```

#### Replacing or substituting string

Sed command is mostly used to replace the text in a file. The below simple sed command replaces the word “unix” with “linux” in the file.
```
$ sed 's/unix/linux/' geekfile.txt
```
Here the `s` specifies the substitution operation. The `/` are delimiters. The `unix` is the search pattern and the `linux` is the replacement string.

The output for this command is below
```
linux is great os. unix is opensource. unix is free os.
learn operating system.
linux linux which one you choose.
linux is easy to learn.unix is a multiuser os.Learn unix .unix is a powerful.
```

#### Replacing the nth occurrence of a pattern in a line

By default, the sed command replaces the first occurrence of the pattern in each line and it won’t replace the second, third…occurrence in the line. Use the /1, /2 etc flags to replace the first, second occurrence of a pattern in a line respectively. The below command replaces the second occurrence of the word “unix” with “linux” in a line.
```
$ sed 's/unix/linux/2' geekfile.txt
unix is great os. linux is opensource. unix is free os.
learn operating system.
unix linux which one you choose.
unix is easy to learn.linux is a multiuser os.Learn unix .unix is a powerful.
```

#### Replacing all the occurrence of the pattern in a line
The substitute flag /g (global replacement) specifies the sed command to replace all the occurrences of the string in the line.
```
$sed 's/unix/linux/g' geekfile.txt
```
#### Duplicating the replaced line with /p flag
The /p print flag prints the replaced line twice on the terminal. If a line does not have the search pattern and is not replaced, then the /p prints that line only once.
```
$sed 's/unix/linux/p' geekfile.txt
```
#### Printing only the replaced lines
Use the -n option along with the /p print flag to display only the replaced lines. Here the -n option suppresses the duplicate rows generated by the /p flag and prints the replaced lines only one time.
```
$sed -n 's/unix/linux/p' geekfile.txt
```
#### Deleting lines from a particular file

To Delete a particular line say n in this example
```
$ sed 'nd' filename.txt
```

To Delete a last line
```
$ sed '$d' filename.txt
```

To Delete line from range x to y
```
$ sed 'x,yd' filename.txt
```
