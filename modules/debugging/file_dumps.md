## XXD
Similar to od, xxd produces a hexadecimal or binary dump of a file in several different formats. It can also do the reverse, converting from its hex dump format back into the original data. For example, the command:
```
$ xxd /usr/bin/who
0000000: 7f45 4c46 0101 0100 0000 0000 0000 0000 .ELF............
0000010: 0200 0300 0100 0000 a08c 0408 3400 0000 ............4...
0000020: 6824 0000 0000 0000 3400 2000 0600 2800 h$......4. ...(.
0000030: 1900 1800 0600 0000 3400 0000 3480 0408 ........4...4...
```
displays a hex dump of binary file /usr/bin/who, 16 bytes per row. The left column indicates the file offset of the row, the next eight columns contain the data, and the final column displays the printable characters in the row, if any.

xxd produces three-column output by default: file offsets, the data in hex, and the data as text (printable characters only).

## Useful options

- `-l N` Display only the first N bytes. (Default is to display the entire file)

- `-s N` or `-s -N` Begin at a position other than the first byte of the file. The first form skips the first N bytes. The second (-N) begins N bytes from the end of the file. (There is also a +N syntax for more advanced skipping through standard input; see the manpage.)

- `-c N` Display N bytes per row. (Default=16)

- `-g N` Group each row of bytes into sequences of N bytes, separated by whitespace, like od -s. (Default=2)

- `-b` Display the output in binary instead of hexadecimal.
- `-e` Pprint in little-endian order, by default with -p it just prints byte as they are (big-endian)
- `-r`  Reverse mode, converts hex to ascii
- `-p`  Prints hex only

### Example Commands
To get hexdump of a file
```
xxd <filename>
```
To get hexdump of a file (only hex bytes)
```
xxd -p <filename>
```

To convert file/string to hex:
```
echo -n '42 is the solution' | xxd -p
output: 34322069732074686520736f6c7574696f6e0a
```

To convert file/string to hex (5 bytes per line)
```
echo -n '42 is the solution' | xxd -p -c 5
```

To convert hex to bin/string:
```
echo -n '34322069732074686520736f6c7574696f6e0a' | xxd -p -r
output: 42 is the solution
```

To convert string to hex without newlines
```
echo -n "Ciao" | xxd -p | tr -d '\n'
```

Get the hexdump of the first 120 bytes of a file 12 bytes per line
```
xxd -l 120 -c 12 <filename>
```

Get the hexdump of the first 120 bytes after the address 0x30 of a file
```
xxd -l 120 -s 0x30 <filename>
```

Get from byte 0x36 to 0x13 + 13 bytes showing only 13 bytes (chirurgic mode ;))
```
xxd -s 0x36 -l 13 -c 13
```

Create a file with plenty of null bytes except the 200000 byte which will be 0x41
```
echo "200000: 41" | xxd -r > <newfile>
```

Copy input_file to output_file and prepend 100 bytes of value 0x00.
```
xxd input_file | xxd -r -s 100 > output_file
```

Separate with a space each 4 byte (also with 1 is useful)
```
xxd -g 4 <file>
```

## Other Commands for Dumping

### od
The `od` command in Linux is used to convert the content of input in different formats with octal format as the default format.

Display the contents of a file in hexadecimal format.
```
od -x input.txt
```

Display the contents of a file in octal format.
```
od -b input.txt
```

Display the contents of a file in character/text format.
```
od -c input.txt
```

### hd
The `hd` or hexdump command in Linux is used to filter and display the specified files, or standard input in a human readable specified format.

Display the contents of a file in hexadecimal format.
```
hd -x input.txt
```

Display the contents of a file in octal format.
```
hd -b input.txt
```

Display the contents of a file in character/text format.
```
hd -c input.txt
```

### dd

dd is a command-line utility for Unix and Unix-like operating systems whose primary purpose is to convert and copy files.

- On Unix, device drivers for hardware (such as hard disk drives) and special device files (such as /dev/zero and /dev/random) appear in the file system just like normal files.

- dd can also read and/or write from/to these files, provided that function is implemented in their respective drivers

- As a result, dd can be used for tasks such as backing up the boot sector of a hard drive, and obtaining a fixed amount of random data.

- The `dd` utility can also perform conversions on the data as it is copied, including byte order swapping and conversion to and from the ASCII and EBCDIC text encodings.

#### Practical Examples

##### Copy Entire Disk
To backup an entire copy of a hard disk to another hard disk connected to the same system, execute the dd command as shown. In this `dd` command example, the Unix device name of the source hard disk is `/dev/hda`, and device name of the target hard disk is `/dev/hdb`.
```
$ dd if = /dev/sda of = /dev/sdb
```

- “if” represents inputfile, and “of” represents output file.
So the exact copy of /dev/sda will be available in /dev/sdb.

- If there are any errors, the above command will fail. If you give the parameter “conv=noerror” then it will continue to copy if there are read errors.

- Input file and output file should be mentioned very carefully. Just in case, you mention source device in the target and vice versa, you might loss all your data.

To copy, hard drive to hard drive using dd command given below, sync option allows you to copy everything using synchronized I/O.
```
$ dd if = /dev/sda of = /dev/sdb conv=noerror, sync
```

##### To backup a Partition
You can use the device name of a partition in the input file, and in the output either you can specify your target path or image file as shown in the dd command.
```
$ dd if=/dev/hda1 of=~/partition.img
```

##### To create an image of a Hard Disk
Instead of taking a backup of the hard disk, you can create an image file of the hard disk and save it in other storage devices. There are many advantages of backing up your data to a disk image, one being the ease of use. This method is typically faster than other types of backups, enabling you to quickly restore data following an unexpected catastrophe.It creates the image of a hard disk `/dev/hda`.
```
$ dd if = /dev/hda of = ~/hdadisk.img
```

#####To restore using the Hard Disk Image
To restore a hard disk with the image file of an another hard disk, the following dd command can be used
```
$ dd if = hdadisk.img of = /dev/hdb
```
The image file hdadisk.img file, is the image of a /dev/hda, so the above command will restore the image of `/dev/hda` to `/dev/hdb`.

##### To create CDROM Backup
`dd` command allows you to create an iso file from a source file. So we can insert the CD and enter dd command to create an iso file of a CD content.
```
$ dd if = /dev/cdrom of = tgsservice.iso bs = 2048
```
`dd` command reads one block of input and process it and writes it into an output file. You can specify the block size for input and output file. In the above dd command example, the parameter “bs” specifies the block size for the both the input and output file. So dd uses `2048` bytes as a block size in the above command.

##### Dumping Memory
`dd` can also be used for memory dumps by referencing the `/dev/mem` device file, which is a special file that provides access to the physical memory of the computer.
```
$ dd if=/dev/mem bs=1024 of=output_file
```

## memdump
`memdump` is a utility that copies the system memory and outputs the contents to standard output or to a file

memdump to a file
```
$ memdump > output_file
```

memdump to a standard output (messy on terminal, but can be usefil in a script to capture and perform operations on output ie. hashing for verification)
```
$ memdump
```


# References
https://www.oreilly.com/library/view/linux-pocket-guide/9780596806347/re28.html

https://www.aplawrence.com/Unixart/xxd.html

http://socpuppet.blogspot.com/2014/07/how-to-dump-memory-on-linux-systems.html

https://www.geeksforgeeks.org/dd-command-linux/
