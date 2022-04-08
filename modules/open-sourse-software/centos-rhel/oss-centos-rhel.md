# RPM vs. YUM
RPM Package Manager allows you to install, upgrade, delete, query and verify packages on RPM-based Linux systems.

RPM packages come in the form of files with the `.rpm` extension. The RPM package consists of an archive file, that contains libraries and dependencies for a specific package.

Yum is a front-end tool for rpm that automatically solves dependencies for packages. It installs RPM software packages and dependencies from distribution official repositories and other third-party repositories.

Yum allows you to install, update, search and remove packages from your system. If you want to keep your system up-to-date, you can enable automatic updates via yum-cron.vAlso, if needed, it allows you to exclude a package or packages from the yum update.



# RPM
rpm is a powerful Package Manager for Red Hat, Suse and Fedora Linux. It can be used to build, install, query, verify, update, and remove/erase individual software packages. A Package consists of an archive of files, and package information, including name, version, and description:

| Syntax |	Description |	Example(s)
|---------|------------ |---------
rpm -ivh {rpm-file} |	Install the package |	$ rpm -ivh mozilla-mail-1.7.5-17.i586.rpm<br />$ rpm -ivh --test mozilla-mail-1.7.5-17.i586.rpm
$ rpm -Uvh {rpm-file} |	Upgrade package | $rpm -Uvh mozilla-mail-1.7.6-12.i586.rpm<br />$ rpm -Uvh --test mozilla-mail-1.7.6-12.i586.rpm
rpm -ev {package} |	Erase/remove/ an installed package	| $ rpm -ev mozilla-mail
rpm -ev --nodeps {package} | 	Erase/remove/ an installed package without checking for dependencies |	$ rpm -ev --nodeps mozilla-mail
rpm -qa	| Display list all installed packages | 	$ rpm -qa
rpm -qa | less
rpm -qi {package} |	Display installed information along with package version and short description |	$ rpm -qi mozilla-mail
rpm -qf {/path/to/file} |	Find out what package a file belongs to i.e. find what package owns the file |	$ rpm -qf /etc/passwd<br />$ rpm -qf /bin/bash
rpm -qc {pacakge-name} |	Display list of configuration file(s) for a package |	$ rpm -qc httpd
rpm -qcf {/path/to/file} |	Display list of configuration files for a command |	$ rpm -qcf /usr/X11R6/bin/xeyes
rpm -qa --last |	Display list of all recently installed RPMs |	$ rpm -qa --last<br />$ $ rpm -qa --last \| less<br />$ rpm -qpR {.rpm-file}
rpm -qR {package} |	Find out what dependencies a rpm file has |	$ rpm -qpR mediawiki-1.4rc1-4.i586.rpm<br />$ rpm -qR bash

## RPM Flags
- -q - Query packages
- -a - All packages
- -i - Info
- -v - Verify
- -U - Upgrade
- -e - Erase (Delete)
- -f - Filename
- -c - List configuration files
- -h - Print hash marks periodically while performing operation

# YUM
`yum` is the primary tool for getting, installing, deleting, querying, and managing software packages for Red Hat Enterprise Linux (RHEL), Centos, Fedora, and other RPM based Linux distribution repositories, as well as other third-party repositories.

## Installing Packages
You can install a package and all of its non-installed dependencies by entering:
yum install package_name
You can install multiple packages simultaneously by appending their names as arguments:
```
yum install package_name [more_names]
```
If you are installing packages on a multilib system, such as an AMD64 or Intel 64 machine, you can specify the architecture of the package (as long as it is available in an enabled repository) by appending .arch to the package name. For example, to install the sqlite2 package for i686, type:
```
~]# yum install sqlite2.i686
```
You can use glob expressions to quickly install multiple similarly-named packages:
```
~]# yum install audacious-plugins-\*
```
In addition to package names and glob expressions, you can also provide file names to yum install. If you know the name of the binary you want to install, but not its package name, you can give yum install the path name:
```
~]# yum install /usr/sbin/named
```
yum then searches through its package lists, finds the package which provides /usr/sbin/named, if any, and prompts you as to whether you want to install it.

### Finding which package owns a file
If you know you want to install the package that contains the named binary, but you do not know in which bin or sbin directory is the file installed, use the yum provides command with a glob expression:
```
~]# yum provides "*bin/named"
```
yum provides "*/file_name" is a common and useful trick to find the packages that contain file_name.

### Installing a Package Group
A package group is similar to a package: it is not useful by itself, but installing one pulls a group of dependent packages that serve a common purpose. A package group has a name and a groupid. The yum grouplist -v command lists the names of all package groups, and, next to each of them, their groupid in parentheses. The groupid is always the term in the last pair of parentheses, such as kde-desktop in the following example:
```
~]# yum -v grouplist kde\*
```
You can install a package group by passing its full group name (without the groupid part) to groupinstall, for example:
```
~]# yum groupinstall "KDE Software Compilation"
```
You can also install by groupid:
```
~]# yum groupinstall kde-desktop
```
You can even pass the groupid (or quoted name) to the install command if you prepend it with an @-symbol (which tells yum that you want to perform a groupinstall):
```
~]# yum install @kde-desktop
```

## Displaying Package Information
The yum info package_name [more_names] command displays information about one or more packages (glob expressions are valid here as well). For example, to display information about the abrt package, type:
```
~]# yum info abrt
```
yum info package_name is similar to the rpm -q --info package_name command, but provides as additional information the ID of the Yum repository the RPM package is found in (look for the From repo line in the output).

The yumdb info package_name [more_names] command can be used to query the Yum database for alternative and useful information about a package, including the checksum of the package (and algorithm used to produce it, such as SHA-256), the command given on the command line that was invoked to install the package (if any), and the reason that the package is installed on the system (where user indicates it was installed by the user, and dep means it was brought in as a dependency). For example, to display additional information about the yum package, type:
```
~]# yumdb info yum
```

## Listing Packages
yum list and related commands provide information about packages, package groups, and repositories.

## # Listing all ABRT addons and plugins using glob expressions

yum list glob_expr [more_glob_exprs]
```
~]# yum list abrt-addon\* abrt-plugin\*
```

###Lists all installed and available packages.
```
~]# yum list all
```
yum list installed
Lists all packages installed on your system. The rightmost column in the output lists the repository from which the package was retrieved.
Example 4.3. Listing installed packages using a double-quoted glob expression
~]# yum list installed "krb?-*"
Loaded plugins: langpacks, presto, refresh-packagekit
Installed Packages
krb5-libs.x86_64              1.9-7.fc15              @fedora

Lists all available packages in all enabled repositories.
Example
yum list available
```
~]# yum list available gstreamer\*plugin\*
```

### Lists all package groups.
```
~]# yum grouplist
```

### Lists the repository ID, name, and number of packages it
```
~]# yum repolist
```

## Searching Packages
You can search all RPM package names, descriptions and summaries by using the yum search term [more_terms] command. yum displays the list of matches for each term, for example:
```
~]# yum search meld kompare
```

## Removing Packages
The yum remove package_name uninstalls (removes in RPM and Yum terminology) the package, as well as any packages that depend on it. As when you install multiple packages, you can remove several at once by adding more package names to the command. For example, to remove totem, rhythmbox, and sound-juicer, type the following at a shell prompt:
```
~]# yum remove totem rhythmbox sound-juicer
```

### Removing a Package Group
You can remove a package group using syntax congruent with the install syntax. The following are alternative but equivalent ways of removing the KDE Software Compilation group:
~]# yum groupremove "KDE Software Compilation"
~]# yum groupremove kde-desktop
~]# yum remove @kde-desktop


## Updating Packages
You can use the yum check-update command to see which installed packages on your system have updates available:
```
~]# yum check-update
```

### Updating a Single Package
You can choose to update a single package, multiple packages, or all packages at once. If any dependencies of the package (or packages) you update have updates available themselves, then they are updated too.

To update a single package, enter yum update package_name, for example:
```
~]# yum update gdb
```

### Updating All Packages and Their Dependencies
To update all packages and their dependencies, simply enter the yum update command (without any arguments):
```
~]# yum update
```

## Configuring Yum and Yum Repositories
The /`etc/yum.conf` configuration file contains one mandatory [main] section under which you can set Yum options. The values that you define in the [main] section of yum.conf have global effect, and may override values set in individual [repository] sections. You can also add [repository] sections to /etc/yum.conf; however, best practice is to define individual repositories in new or existing .repo files in the `/etc/yum.repos.d/directory`.  “Setting [repository] Options” if you need to add or edit repository-specific information.

### Adding a Yum Repository
To define a new repository, you can either add a [repository] section to the /etc/yum.conf file, or to a .repo file in the /etc/yum.repos.d/ directory. All files with the .repo file extension in this directory are read by yum, and it is recommended to define your repositories here instead of in /etc/yum.conf.

Yum repositories commonly provide their own .repo file. To add such a repository to your system and enable it, run the following command as root:
```
yum-config-manager --add-repo repository_url
```
where repository_url is a link to the .repo file. For example, to add a repository located at http://www.example.com/example.repo, type the following at a shell prompt:
```
~]# yum-config-manager --add-repo http://www.example.com/example.repo
```
An repo file should be added to the `/etc/yum.repos.d/` directory for this entry.

### Enabling a Yum Repository
To enable a particular repository or repositories, type the following at a shell prompt as root:
```
yum-config-manager --enable repository
```
where repository is the unique repository ID (use `yum repolist all` to list available repository IDs). Alternatively, you can use a glob expression to enable all matching repositories:
```
yum-config-manager --enable glob_expression
```
For example, to enable repositories defined in the [example], [example-debuginfo], and [example-source]sections, type:
```
~]# yum-config-manager --enable example\*
```
When successful, the `yum-config-manager --enable` command displays the current repository configuration.
Disabling a Yum Repository
To disable a Yum repository, run the following command as root:
```
yum-config-manager --disable repository
```
where repository is the unique repository ID (use yum repolist all to list available repository IDs). Similarly to yum-config-manager --enable, you can use a glob expression to disable all matching repositories at the same time:
```
yum-config-manager --disable glob_expression
```
When successful, the `yum-config-manager --disable` command displays the current configuration.

### Setting [main] Options
The `/etc/yum.conf` configuration file contains exactly one [main] section. You can add many additional options under the [main] section heading in `/etc/yum.conf`. Some of the key-value pairs in the [main] section affect how yum operates; others affect how Yum treats repositories. The best source of information for all Yum options is in the [main] OPTIONS and [repository] OPTIONS sections of man yum.conf.

A sample /etc/yum.conf configuration file can look like this:
```
[main]
cachedir=/var/cache/yum/$basearch/$releasever
keepcache=0
debuglevel=2
logfile=/var/log/yum.log
exactarch=1
obsoletes=1
gpgcheck=1
plugins=1
installonly_limit=3
[comments abridged]
# PUT YOUR REPOS HERE OR IN separate files named file.repo
# in /etc/yum.repos.d
```
The following is a list of the most commonly-used options in the [main] section, and descriptions for each:
**assumeyes=value**

...where value is one of:
- 0 — yum should prompt for confirmation of critical actions it performs. This is the default.
- 1 — Do not prompt for confirmation of critical yum actions. If assumeyes=1 is set, yum behaves in the same way that the command line option -y does.

**cachedir=/var/cache/yum/$basearch/$releasever**

This option specifies the directory where Yum should store its cache and database files. By default, Yum's cache directory is /var/cache/yum/$basearch/$releasever.

**debuglevel=value**

...where value is an integer between 1 and 10. Setting a higher debuglevel value causes yum to display more detailed debugging output. debuglevel=0 disables debugging output, while debuglevel=2 is the default.

**exactarch=value**

...where value is one of:
- 0 — Do not take into account the exact architecture when updating packages.
- 1 — Consider the exact architecture when updating packages. With this setting, yum will not install an i686 package to update an i386 package already installed on the system. This is the default.

**exclude=package_name [more_package_names]**
This option allows you to exclude packages by keyword during installation/updates. Listing multiple packages for exclusion can be accomplished by quoting a space-delimited list of packages. Shell globs using wildcards (for example, * and ?) are allowed.

**gpgcheck=value**

...where value is one of:
- 0 — Disable GPG signature-checking on packages in all repositories, including local package installation.
- 1 — Enable GPG signature-checking on all packages in all repositories, including local package installation. gpgcheck=1 is the default, and thus all packages' signatures are checked.

If this option is set in the [main] section of the /etc/yum.conf file, it sets the GPG-checking rule for all repositories. However, you can also set gpgcheck=value for individual repositories instead; i.e., you can enable GPG-checking on one repository while disabling it on another. Setting gpgcheck=value for an individual repository in its corresponding .repo file overrides the default if it is present in `/etc/yum.conf`.

**groupremove_leaf_only=value**

...where value is one of:
- 0 — yum should not check the dependencies of each package when removing a package group. With this setting, yum removes all packages in a package group, regardless of whether those packages are required by other packages or groups. groupremove_leaf_only=0 is the default.
- 1 — yum should check the dependencies of each package when removing a package group, and remove only those packages which are not not required by any other package or group.

For more information on removing packages, refer to Intelligent package group removal.

**installonlypkgs=space separated list of packages**

Here you can provide a space-separated list of packages which yum can install, but will never update. Refer to man yum.conf for the list of packages which are install-only by default. If you add the installonlypkgs directive to /etc/yum.conf, you should ensure that you list all of the packages that should be install-only, including any of those listed under the installonlypkgs section of man yum.conf. In particular, kernel packages should always be listed in installonlypkgs (as they are by default), and installonly_limit should always be set to a value greater than 2 so that a backup kernel is always available in case the default one fails to boot. Refer to installonly_limit=value for details on the installonly_limit directive.

**installonly_limit=value**

...where value is an integer representing the maximum number of versions that can be installed simultaneously for any single package listed in the installonlypkgs directive. The defaults for the installonlypkgs directive include several different kernel packages, so be aware that changing the value of installonly_limit will also affect the maximum number of installed versions of any single kernel package. The default value listed in /etc/yum.conf is installonly_limit=3, and it is not recommended to decrease this value, particularly below 2.

**keepcache=value**

...where value is one of:
- 0 — Do not retain the cache of headers and packages after a successful installation. This is the default.
- 1 — Retain the cache after a successful installation.

**logfile=/var/log/yum.log**
This option specifies where yum should send its logging output. By default, yum logs to /var/log/yum.log.
multilib_policy=value

...where value is one of:
- best — install the best-choice architecture for this system. For example, setting multilib_policy=best on an AMD64 system causes yum to install 64-bit versions of all packages.
- all — always install every possible architecture for every package. For example, with multilib_policy set to all on an AMD64 system, yum would install both the i686 and AMD64 versions of a package, if both were available.

**obsoletes=value**
...where value is one of:

- 0 — Disable yum's obsoletes processing logic when performing updates.
- 1 — Enable yum's obsoletes processing logic when performing updates. When one package declares in its spec file that it obsoletes another package, the latter package will be replaced by the former package when the former package is installed. Obsoletes are declared, for example, when a package is renamed. obsoletes=1 the default.

**plugins=value**

...where value is one of:
- 0 — Disable all Yum plugins globally.
Disabling all plugins is not advised
Disabling all plugins is not advised, because certain plugins provide important Yum services. Disabling plugins globally is provided as a convenience option, and is generally only recommended when diagnosing a potential problem with Yum.
- 1 — Enable all Yum plugins globally. With plugins=1, you can still disable a specific Yum plugin by setting enabled=0 in that plugin's configuration file.

**reposdir=/absolute/path/to/directory/containing/repo/files**

This option allows you to specify a directory where .repo files are located. All .repo files contain repository information (similar to the [repository] sections of /etc/yum.conf). yum collects all repository information from .repo files and the [repository] section of the /etc/yum.conf file to create a master list of repositories to use for transactions. If reposdir is not set, yum uses the default directory /etc/yum.repos.d/.

**retries=value**

...where value is an integer 0 or greater. This value sets the number of times yum should attempt to retrieve a file before returning an error. Setting this to 0 makes yum retry forever. The default value is 10.

# References
https://www.2daygeek.com/comparison-difference-between-yum-vs-rpm/
https://www.cyberciti.biz/howto/question/linux/linux-rpm-cheat-sheet.php
https://www.cyberciti.biz/faq/rhel-centos-fedora-linux-yum-command-howto/
