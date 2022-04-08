## strace
strace is a Linux utility that traces system calls and signals for programs and processes. It shows you the system calls that processes make as well as their arguments and return values.

### strace Processes ###
strace a running process
```
strace -p [pid]
```
strace a running process and threads
```
strace -fp [pid]
```
strace a running process and print strings
```
strace -s 80 -fp [pid]
```
This will print the first 80 characters of every string.

### strace Programs (Files)
strace a program
```
strace ./program
```
strace a program and threads
```
strace -f ./program
```
strace a program and print strings
```
strace -s 80 -f ./program
```
This will print the first 80 characters of every string.

### strace Futex
While using strace, you may see many futex system calls, for example:
```
[pid  2082] futex(0x7f4c4d3bff30, FUTEX_WAKE_PRIVATE, 1) = 0 <0.000003>
[pid  2081] futex(0x7f4c4d3bff60, FUTEX_WAIT_PRIVATE, 2, NULL <unfinished ...>
[pid  2082] futex(0x7f4c4d3bff60, FUTEX_WAKE_PRIVATE, 1) = 0 <0.000003>
[pid  2082] futex(0x7f4c4d3bff64, FUTEX_WAIT_PRIVATE, 7, NULL <unfinished ...>
  ```
The futex system call is commonly used by threading implementations, like libpthread, to implement higher level locking functionality, like mutexes, semaphores, and more.

If your application is making a particularly large number of futex calls and you don’t want to trace them, you can either:

Exclude just the futex calls by using grep:
```
strace strace -Tf ./program 2>&1 | grep -v futex
```
Or, trace a specific set of system calls you do care about. In this example, trace open, read, and write this program and its threads:
```
strace -Tfe trace=open,read,write ./program
```

### Other useful strace options
There are many useful options that be added when using strace. Some of the more useful options for general purposes are:

- `-f` Follow threads and child processes that are created. Useful option because many programs will spawn additional processes or threads to do work.

- `-T` Print time spent in system call. This can be useful if you are trying to determine if a particular system call is taking a lot of time to return.

- `-o my-process-trace.txt` Log strace output to a file

- `-t` Print the time of day at the start of each line.

- `-s` [size] Print [size] characters per string displayed. This is useful if you are trying to trace what a program is writing to a file descriptor.

- `-c` Print a histogram of the number of system calls and the time spent at the termination of strace.

- `-e trace=open,close` Trace only the open and close system calls.

For a complete list of command line arguments, see the strace man page.

## Dtrace

DTrace publishes points of instrumentation throughout the system, from kernel facilities such as IO and scheduling to user-level function calls, to system calls (overlapping with strace).

Trace the creation of new processes and output their arguments:
```
dtrace -n 'proc:::exec-success { trace(curpsinfo->pr_psargs); }'
```
Trace files opened/created by process name:
```
dtrace -n 'syscall::openat*:entry { printf("%s %s",execname,copyinstr(arg1)); }'
```
Trace the number of system calls made by process name:
```
dtrace -n 'syscall:::entry { @num[execname] = count(); }'
```
Trace the process name every time a system call is made:
```
dtrace –n ‘syscall:::entry { trace(execname); }’
```
Trace the number of system calls made for each system call:
```
dtrace -n 'syscall:::entry { @num[probefunc] = count(); }'
```
Trace the number of system calls made by process id:
```
dtrace -n 'syscall:::entry { @num[pid,execname] = count(); }'
```
Trace lock times by process name:
```
dtrace -n 'lockstat:::adaptive-block { @time[execname] = sum(arg1); }'
```
Trace file I/O by process name (measured in blocks):
```
dtrace -n 'io:::start { printf("%d %s %d",pid,execname,args[0]->b_bcount); }'
```
Trace the writes in bytes by process name:
```
dtrace -n 'sysinfo:::writech { @bytes[execname] = sum(arg0); }'
```

# References

https://blog.packagecloud.io/eng/2015/11/15/strace-cheat-sheet/

https://www.oracle.com/technetwork/server-storage/solaris11/documentation/dtrace-cheatsheet-1930738.pdf
