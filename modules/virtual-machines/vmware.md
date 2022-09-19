# VMware

VMware is a virtualization and cloud computing software provider based in Palo Alto, Calif. Founded in 1998, VMware is a subsidiary of Dell Technologies. EMC Corporation originally acquired VMware in 2004; EMC was later acquired by Dell Technologies in 2016. VMware bases its virtualization technologies on its bare-metal hypervisor ESX/ESXi in x86 architecture.

With VMware server virtualization, a hypervisor is installed on the physical server to allow for multiple virtual machines (VMs) to run on the same physical server. Each VM can run its own operating system (OS), which means multiple OSes can run on one physical server. All the VMs on the same physical server share resources, such as networking and RAM. In 2019, VMware added support to its hypervisor to run containerized workloads in a Kubernetes cluster in a similar way.

## Virtual machines (VMs)
A virtual machine (VM) is the base unit of VMware virtualization. A VM is a software-based representation of a physical computer. An operating system (OS) running in a VM is called a guest OS.

Each VM includes a configuration file that stores the VM’s settings, a virtual disk file that is a software version of a hard drive, and a log file that keeps track of the VM’s activities, including system failures, hardware changes, migrations of virtual machines from one host to another, and the VM’s status.

VMware offers various tools for managing these files. You can configure virtual machine settings using the vSphere Client, which is a command-line interface for VM management. You can also use the vSphere Web Services software development kit to configure VMs via other programs. For example, you could enable your software development environment to create a virtual machine that it could use to test a software program.
