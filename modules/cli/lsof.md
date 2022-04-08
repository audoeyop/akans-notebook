# lsof
`lsof` or ‘List Open Files’ is used to find out which files are open by which process. Since Linux/Unix considers everything as a files (pipes, sockets,directories, devices etc) we can use this command to identify which files are currently in use. Open network ports and network connections are included as the connections are made via sockets.

List open files and process information.
```
$ lsof

COMMAND    PID      USER   FD      TYPE     DEVICE  SIZE/OFF       NODE NAME
init         1      root  cwd      DIR      253,0      4096          2 /
init         1      root  rtd      DIR      253,0      4096          2 /

...
...

```

FD – stands for File descriptor and may seen some of the values as:

- `cwd` current working directory
- `rtd` root directory
- `txt` program text (code and data)
- `mem` memory-mapped file

Also in FD column numbers like 1u is actual file descriptor and followed by u,r,w of it’s mode as:

- `r` for read access.
- `w` for write access.
- `u` for read and write access.

TYPE – of files and it’s identification.

- `DIR` – Directory
- `REG` – Regular file
- `CHR` – Character special file.
- `FIFO` – First In First Out

Running `lsof` with `sudo` will list root & system level files/processes as well.
```
$ sudo lsof
```

List User Specific Open Files
The below command will display the list of all opened files of user cyberpunk.
```
$ lsof -u cyberpunk
```

To find out all the running process of specific port, just use the following command with option -i. The below example will list all running process of port 22.
```
lsof -i TCP:22
```

List Only IPv4 Open Files
```
$ lsof -i 4
```

List Only IPv6 Open Files
```
$ lsof -i 6
```

List Open Files of TCP Port ranges 1-1024
```
$ lsof -i TCP:1-1024
```

Exclude User with ‘^’ Character
```
$ lsof -i -u^root
```

Find Out who’s Looking at What Files and Commands
```
$ lsof -i -u cyberpunk
```

List all network connections
```
$ lsof -i
```

Search by PID
```
$ lsof -p [PID]
```

Kill all activity of particular user
```
$ kill -9 `lsof -t -u cyberpunk`
```



# References
https://neverendingsecurity.wordpress.com/2015/04/13/lsof-commands-cheatsheet/
