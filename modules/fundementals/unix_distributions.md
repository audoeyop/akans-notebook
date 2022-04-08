Qnix, OSX, Ubuntu, Red Hat Enterprise, Centos

https://en.wikipedia.org/wiki/List_of_Linux_distributions

https://www.hostinger.com/tutorials/centos-vs-ubuntu

From user’s point of view, there isn’t much difference in these tools. The RPM and DEB formats are both just archive files, with some metadata attached to them. They are both equally arcane, have hardcoded install paths and only differ in subtle details. DEB files are installation files for Debian based distributions. RPM files are installation files for Red Hat based distributions. Ubuntu is based on Debian’s package manage based on APT and DPKG. Red Hat, CentOS and Fedora are based on the old Red Hat Linux package management system, RPM.

DEB

DEB is the extension of the Debian software package format and the most often used name for such binary packages. DEB was developed by Bedian

RPM

It is a package management system. The name RPM variously refers to the .rpm file format, files in this format, software packaged in such files, and the package manager itself. RPM was intended primarily for Linux distributions; the file format is the baseline package format of the Linux Standard Base. RPM was developed by Community & Red Hat.

Key Differences

DEB files are installation files for Debian based distributions. Rpm files are installation files for Red Hat based distributions. There are other types for other distributions. Each is slightly different from the other. All are designed to make the installation of programs easier on the various distributions. None are executable files. DEB files are used with dpkg, aptitude, apt-get. Rpm files are used with yum.
Ubuntu is based on Debian’s package manage based on APT and DPKG. Red Hat, CentOS and Fedora are based on the old Red Hat Linux package management system, RPM.
Each RPM has a ‘spec’ file , detailing what version of the application its going to install and what other smaller applications will need to be installed in order for it to function. The DEB file too is dependent on a ‘control file’ which is much like the ‘spec’ file of an RPM package, as it defines what software needs to be installed in order for your target application to run, provides description of what you are going to install.
For a long time,apt-get has been superior in processing the enormous amount of metadata really fast while yum would take ages to do it. RPM also suffered from sites like RPM find where you would find 10+ incompatible packages for different distributions. Apt completely hid this problem for DEB packages because all packages got installed from the same source.
DEB was developed by Bedian, RPM was developed by Community & Red Hat.
In the Debian world, it is a bit more accepted to carry patches in a package that are not (yet) upstream. In the RPM world (at least among the Red Hat derivatives) this is frowned upon.
Debian has a vast amount of scripts that are able to automate a huge portion of creating a package. For example, creating a – simple – package of a setuptool’ed Python program, is as simple as creating a couple of meta-data files and running debuild. That said, the spec-file for such package in RPM format would be pretty short and in the RPM world, too, there’s a lot of stuff that is automated these days.
