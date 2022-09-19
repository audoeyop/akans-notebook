# Virtual Box

VirtualBox is open-source software for virtualizing the x86 computing architecture. It acts as a hypervisor, creating a VM (virtual machine) where the user can run another OS (operating system).

The operating system where VirtualBox runs is called the "host" OS. The operating system running in the VM is called the "guest" OS. VirtualBox supports Windows, Linux, or macOS as its host OS.

When configuring a virtual machine, the user can specify how many CPU cores, and how much RAM and disk space should be devoted to the VM. When the VM is running, it can be "paused." System execution is frozen at that moment in time, and the user can resume using it later.

## Supported guest operating systems
Guest operating systems supported by VirtualBox include:

- Windows 10, 8, 7, XP, Vista, 2000, NT, and 98.
- Linux distributions based on Linux kernel 2.4 and newer, including Ubuntu, Debian, OpenSUSE, Mandriva/Mandrake, Fedora, RHEL, and Arch Linux.
- Solaris and OpenSolaris.
- macOS X Server Leopard and Snow Leopard.
- OpenBSD and FreeBSD.
- MS-DOS.
- OS/2.
- QNX.
- BeOS R5.
- Haiku.
- ReactOS.

# VBoxManage CLI Commands
```
VBoxManage list
VBoxManage list runningvms
VBoxManage startvm <id>
VBoxManage startvm <id> --type headless
VBoxManage controlvm <id> stop
```
# Change relative VM time
VBoxManage modifyvm <id> -biossystemtimeoffset <offset in [ms]>

# Interrupt network
VBoxManage controlvm <id> setlinkstate1 off

# Reference
https://www.computerhope.com/jargon/v/virtualbox.htm#:~:text=History,took%20over%20development%20of%20VirtualBox.
