# Apt vs DPKG
APT and dpkg are both command-line package management interfaces you can use in the terminal on Ubuntu and other Debian-based systems to install and manage packages on debian based systems.

The main difference between dpkg and apt is that dpkg is used to install/manage individual packages. apt-get can be used for many additional features including handling dependencies and clearing cache fo free up space on the system.

# DPKG

`dpkg` is a package manager for Debian, Ubuntu and many other Linux distro. It is used to install/manage individual packages. Here is a quick cheat sheet you will find handy while using dpkg at shell prompt:

| Syntax |	Description |	Example (s)
|---------|------------ |---------
dpkg -i {.deb package} |	Install the package |	dpkg -i zip_2.31-3_i386.deb
dpkg -i {.deb package} |	Upgrade package if it is installed else install a fresh copy of package |	dpkg -i zip_2.31-3_i386.deb
dpkg -R {Directory-name} |	Install all packages recursively from directory	 |dpkg -R /tmp/downloads
dpkg -r {package}	 |Remove/Delete an installed package except configuration files |	dpkg -r zip
dpkg -P {package} |	Remove/Delete everything including configuration files |	dpkg -P apache-perl
dpkg -l	 |List all installed packages, along with package version and short description |	dpkg -l<br/>dpkg -l \| less<br/>dpkg -l '*apache*'<br/>dpkg -l \| grep -i 'sudo'
dpkg -l {package}	| List individual installed packages, along with package version and short description |	dpkg -l apache-perl
dpkg -L {package}	| Find out files are provided by the installed package i.e. list where files were installed	| dpkg -L apache-perl
dpkg -L perl<br/>dpkg -c {.Deb package} |	List files provided (or owned) by the package i.e. List all files inside debian .deb package file, very useful to find where files would be installed |	dpkg -c dc_1.06-19_i386.deb
dpkg -S {/path/to/file} |	Find what package owns the file i.e. find out what package does file belong |	dpkg -S /bin/netstat<br/>dpkg -S /sbin/ippool
dpkg -p {package}|		Display details about package package group, version, maintainer, Architecture, display depends packages, description etc|		dpkg -p lsof
dpkg -s {package} | grep Status	Find out if Debian package is installed or not (status)	dpkg -s lsof | grep Status

# Apt
`apt` is a command-line tool which helps in handling packages in Linux. Its main task is to retrieve the information and packages from the authenticated sources for installation, upgrade and removal of packages along with their dependencies. Here APT stands for the Advanced Packaging Tool.

Apt includes `apt-get` and `apt-cache`. `apt-get` is for installing, upgrading, and cleaning packages, while `apt-cache` command is used for searching/finding new packages.

## Update the package database with apt-get

Updating the package database requires superuser privileges, so you’ll need to use sudo.
```
sudo apt-get update
```

## Upgrade installed packages with apt-get
When a new version of a package is availabel, you can upgrade the package with `sudo apt-get upgrade`

To upgrade only a specific program, use the command below:
```
sudo apt-get upgrade <package_name>
```

The command apt-get upgrade is very obedient. It never tries to remove any packages or tries to install a new package on its own.

The command apt-get dist-upgrade, on the other hand, is proactive. It looks for dependencies with the newer version of the package being installed and it tries to install new packages or remove an existing ones on its own.
```
sudo apt-get dist-upgrade
```

dist-upgrade has a conflict resolution system. It will attempt to upgrade the most important packages, at the expense of the less important ones. This may lead to the removal of some packages, which you might not want. **This is the main reason why `dist-upgrade` should be avoided on production machines.**

## Using apt-cache commands to search for packages
If you just want to search the apt packages with specific package names, you can use the command below:
```
apt-cache pkgnames <search_term>
```

Once you know the exact package name, you can get more information about it, such as version, dependencies, etc., by using the command below:
```
apt-cache showpkg <package_name>
```

## Install new packages with apt-get
If you know the name of the package, you can easily install it using the command below:
```
sudo apt-get install <package_name>
```
Just replace the <package_name> with your desired package. Suppose I wanted to install Pinta image editor. All I’d need to do is use the command below:
```
sudo apt-get install pinta
```

You are not restricted to installing just one package at a time. You can install several packages at a time by providing their names:
```
sudo apt-get install <package_1> <package_2> <package_3>
```

Suppose for some reason you want to install a package but don’t want to upgrade it if it is already installed. It sounds weird, but you may have reasons to do that.

For that case, you can use the no-upgrade flag in the following manner:
```
sudo apt-get install <package_name> --no-upgrade
```
In case you want to upgrade a package provided it’s already installed, but don’t want to install it if it’s not, you can do that with the following command:
```
sudo apt-get install <package_name> --only-upgrade
```
By default, the latest version available in the repository will be installed for any application. But if, for some reason, you don’t want to install the latest version, you can specify the package version number. (You would need to know the exact version number that you wanted to install).

All you need to do is to add the version number to the name of the package:
```
sudo apt-get install <package_name>=<version_number>
```

## How to remove installed packages with apt-get
Installing packages isn’t the only thing you can do with apt-get. You can also remove packages with it. All you need to do is to use the command in this manner:
```
sudo apt-get remove <package_name>
```
Auto-completion works here as well. So just start typing package name and press tab, and it will suggest all the installed packages starting with those letters.

Another way of uninstalling packages is to use purge. The command is used in the following manner:
```
sudo apt-get purge <package_name>
```
What is the difference between apt-get remove and apt-get purge?
- `apt-get remove` just removes the binaries of a package. It doesn’t touch the configuration files
- `apt-get purge` removes everything related to a package, including the configuration files

You can use the command below to clear your apt cache (locally saved retrieved package files):

## How to clean your system with apt-get
```
sudo apt-get clean
```
Another way is to use `autoclean`. Unlike the above clean command, `autoclean` only removes those retrieved package files that have a newer version now, and so won’t be used anymore.
```
sudo apt-get autoclean
```
Yet another way to free up disk space is to use `autoremove`. It removes libraries and packages that were installed automatically to satisfy the dependencies of another installed package. If that package is removed, these automatically installed packages are useless in the system. This command removes such packages.
```
sudo apt-get autoremove
```

# References
https://www.cyberciti.biz/howto/question/linux/dpkg-cheat-sheet.php
https://itsfoss.com/apt-get-linux-guide/
