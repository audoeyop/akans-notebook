The DOS shell is typically not as feature rich (has fewer commands out of the box) as typical unix shells. But you should know the following commands.

| Command | Description | Usage
|---------|------------ |---------
| dir | Displays a list of a directory's files and subfolders | > dir (shows current directory)<br />> dir myfolder
|cd <br /> chdir | Displays the name of the current directory or changes the current folder.  | > cd filepath<br/>> chdir filepath<br/>> cd .. (goes one directory up)                 
| > md<br/>mkdir | Creates a folder (directory)  | > md folder-name<br/>> mkdir folder-name                             
| > rm<br/>rmdir | Deletes a folder (directory) | > rm folder-name<br/>> rmdir folder-name<br/>> rm /s folder-name<br/> > rmdir /s folder-name<br/>Note: if the folder isn’t empty, you must add the /s.            
| copy | Copies a file from one location to another | > copy filepath-from filepath-to                
| move | Moves file from one folder to  another   | > move folder1\file.txt folder2\                
| ren<br/>rename | Changes the name of a file | > ren file1 file2    
| del | Deletes one or more files | > del filename    
| exit | Exits batch script or current command control | > exit                                          
| echo | Used to display a message or to turn off/on messages in batch scripts | > echo message                                  
| type | Displays contents of a text file | > type myfile.txt  |
| fc |  Compares two files and displays the difference between them | > fc file1 file2                                
| cls | Clears the screen | > cls                     
| help | Provides more details about DOS/Command Prompt commands | > help (lists all commands)<br/>> help command

# References
http://www.cs.columbia.edu/~sedwards/classes/2015/1102-fall/Command%20Prompt%20Cheatsheet.pdf                          
