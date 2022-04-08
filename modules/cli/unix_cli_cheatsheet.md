# Unix Commands and Utilities

Unix commands are used to perform operations on a unix operating system. There are 3 components that make up a command.

| `Components` | Description
|---------|---------------|
| `Command` | The name of the command |
| `Arguments` | Flags and modifiers that the command can use to configure its behavior |
| `Files/Directories` | Files and/or directories that the command uses |

In the example below, the command is `ls`.
```
ls –l /home/directory
```
- `ls` is a command that lists all of the files & sub-directories in a directory.
- The `-l` flag tells the `ls` command to display detailed output of the files that are listed.
- `/home/directory` is the directory that `ls` will list files & sub-directories from.


| `Command` | Description
|---------|---------------|
| `pwd` | prints working directory (displays the full path of your location on the filesystem) |
| `ls` | lists contents of current directory |
| `ls –l` | lists contents of current directory with extra details |
| `ls` | /home/user/*.txt lists all files in /home/user ending in .txt |
| `cd` | change directory to your home directory |
| `cd ~` | change directory to your user's home directory|
| `cd /different/directory` | change directory to /different/directory |
| `cd -` | change directory to the last directory you were in before changing to wherever you are now |
| `mkdir new_directory` | creates a new directory called new_directory  |
| `rmdir new_directory` | deletes directory called new_directory. new_directory must be empty  |
| `touch my_file` | creates a file called my_file. updates the timestamp on the file if it already exists, without modifying its contents |
| `cp my_file my_file2` | copies my_file to my_file2. if my_file2 exists, this will overwrite it. |
| `rm my_file` | deletes file called my_file |
| `rm –f my_file` | deletes my_file without asking you for confirmation. useful if using wildcards (*) to delete files.  |
| `cp –r directory new_directory` | copies the whole directory dir to new_directory. –r must be specified to copy directory contents recursively |
| `rm –rf my_directory` | delete directory my_directory along with all its content without asking for confirmation. |
| `cat new.txt` | displays the contents of new.txt|
| `more new.txt` | displays the contents of new.txt screen by screen. spacebar to pagedown, q to quit |
| `head new.txt` | displays first 10 lines of new.txt |
| `head -n 30 new.txt` | displays first 30 lines of new.txt |
| `tail new.txt` | displays last 10 lines of new.txt|
| `tail -n 30 new.txt` | displays last 30 lines of new.txt|
| `tail –f new.txt` | displays the contents of a file as it grows, starting with the last 10 lines. ctrl-c to quit. |
| `mv my_file new_directory/sub_directory` | moves my_file into the destination directory new_directory/sub_directory |
| `mv my_file my_renamed_file` | renames file to my_renamed_file. if a file called my_renamed_file exists, this will overwrite it. |
| `mv my_directory my_sub_directory` | moves the directory called dir to the directory called subdir |
| `mv dir new_directoryname` | renames directory dir to new_directoryname |
| `find my_directory -name my_file` | searches my_directory for file named my_file  |
| `find my_directory -name *.rb` | searches my_directory and sub-directories for files Ruby files (files that end in `.rb`) |
| `find my_directory -name *my*` | searches my_directory and sub-directories for any file with a filename that contains 'my' |
| `top` | displays all the processes running on the machine, and shows available resources |        
| `chmod 755 file_or_directory` | changes the permission of the file_or_directory to 755 |
| `chmod 755 -R my_directory` | changes the permission of the directory my_directory and all of its subdirectories and fies to 755 |
| `chmod o+w,g+w,u+x file_or_directory` | adds the following permissions to file_or_directory: owner write, group write, user execute |     
| `chown user:group file_or_directory` | changes the ownership of file_or_directory to a user and/or group on the system |    
| `chown user:group -R my_directory` | changes the ownership of my_directory and all of its subdirectories and fies to a user and/or group on the system |    
| `id` | displays the user and group names and numeric IDs, of the calling process, to the standard output. In a shell session, this would produce your user/group info |
| `id -A` |  displays the process audit user ID and other process audit properties |
| `id -F` |  Display the full name of the effective user |
| `id -G` |  Display the different group IDs of the effective user |
| `id -M` | Display the MAC label of the current process |
| `id -P` | Display the id as a password file entry. |
| `id -u` | Display the effective user ID as a number. |
| `sudo [command]` | sudo runs [command] as root user |
| `df` | displays storage/disk usage information of your system |
| `du –h my_directory` | displays how much storage is being used by my_directory it's subdirectories|
| `du –h -d 0 my_directory` | displays how much storage is being used by my_directory. `-d 0` specifies the sub-directory depth to display storage information for. The value `0` means that we only want the information for the specified directory. A value of `1` would give us the values of all sub-directories 1 level deep |
| `grep pattern files` | searches for the pattern in files, and displays lines in those files matching the pattern  |
| `awk '/pattern/ {action}' file` | searches for the pattern in files, then performs actions on matched patterns  |
| `diff file1 file2` | compares and display the differences between file1 and file2  |
| `date` | shows the current date and time |  
| `which [command]` | searches directories in the PATH and displays the path for each EXECUTABLE instance of [command] |  
| `whereis [command]` | searches directories in the PATH and displays the path for each instance of [command] |  
| `[command] > my_file` | redirects the output of [command] writing it to a file called my_file |
| `date > timestamp` | redirects the output of the date command to a file in the current directory called timestamp |
| `[command] >> my_file` | appends the output of [command] to a file called my_file |     
| `wc {file}` |	displays the number of words in file |
| `wc -l {file}` |	displays the number of lines in a file |        
| `uptime` | displays the amout of time that the system has been running along with load averages that indicate how hard this system is working to keep up with the load. creates the file if it doesn’t exist |
| command1 \| command2 | "pipes" or forwards the output of command1 to input for command2. in some shells, shift-backslash key adds a "pipe" character |
| date \| grep Tue | displays any line in the output of the date command that matches the pattern Tue. (is it Tuesday?) |
| `tar -zxf archive.tgz` | extract the contents of the archive called archive.tgz. kind of like unzipping a zipfile. |
| `tar -zcf dir.tgz dir` | creates a compressed archive called dir.tgz that contains all the files and directory structure of dir  |
| `time [command]` | runs [command], timing how long it takes, and displays that time to the screen after completing [command] |   
| `man [command]` | displays the manual of [command] if it has one |
| `history` | displays a list of all past commands typed in the current terminal session |
| `clear` | clears the terminal |
| `MY_VARIABLE=my_val` | sets the environment variable MY_VARIABLE to my_val |
| `export MY_VARIABLE=my_val` | sets the environment variable MY_VARIABLE to my_val. export passes this environment variable to programs run from that shell and/or child processes |
| `env` | display all environment variables |
| `alias {short_command}='{long_command}'` | creates an alias, or a 'short_command' that can be run from the shell to initiate a 'long_command' |
| `unset MY_VARIABLE` | deletes the MY_VARIABLE environment variable
| `sudo adduser username` |	add a new user |
| `sudo passwd -l 'username'` | change the password of a user |
| `sudo userdel -r 'username'` | delete a user
| `sudo usermod -a -G GROUPNAME USERNAME` | add a user to a group |
| `sudo deluser USER GROUPNAME` |	To remove a user from a group |
| `logout` | exit the unix shell |
| `CTRL-c` | kills the program that is actively running in the shell |
| `CTRL-d` | exits and/or logs out of most shells |
| `ps` |	Give the status of processes running for a user |
| `ps PID` |	Gives the status of a particular process with id PID |
| `ps aux` |	Give the status of processes running for all users on the system, including the processes not linked to a terminal |
| `kill PID` | "soft" kills the running process with id PID. sends the process a sigterm signal & allows the process to perform some cleanup before stopping the process. |
| `kill -9 PID` | `-9` "hard" kills the running process with id PID. sends the process a sigkill signal. the process is stopped via the kernel immediately. Does not allow the program to continue, even to perform cleanup befor termination. |
| `quit` | exit the unix shell |

# References

https://sites.tufts.edu/cbi/files/2013/01/linux_cheat_sheet.pdf
https://www.guru99.com/linux-commands-cheat-sheet.html
http://www.mathcs.emory.edu/~valerie/courses/fall10/155/resources/unix_cheatsheet.html
