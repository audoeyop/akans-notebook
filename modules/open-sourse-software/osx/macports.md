# Macports

MacPorts, is a package management system for installing and managing open-source software on the macOS and Darwin operating systems.

## Information
Search directory for ports
```
port search [--name] [--regex] '<searchtext>'
```
- This command normally searches both the name and description of ports. The --name switch limits search to name only.

- The --regex switch treats the search string as a Regular Expression.

- You can also use wildcards to limit searches to (for example) only ports that begin with a string, e.g. 'php*'.

### Get information about a port
```
port info <portname>

```

### List installed ports

List of the ports you have explicitly installed:
```
port echo requested
```

For a list of everything installed by MacPorts, including all dependencies:
```
port installed
```

### Install/Uninstall Ports
Install a port
```
[sudo] install <portname>
```

### If an install fails

If a port install fails for some reason, clean up the attempt before trying again.
```
[sudo] port clean <portname>
```

If you believe the downloaded files are corrupt, you can also delete any files downloaded for that port:
```
[sudo] port clean --dist <portname>
```
Uninstall a port

Note: This does not uninstall dependencies that were installed with this port.
```
[sudo] uninstall <portname>
```

### Updates
Update MacPorts and directory of available ports

It's recommended you do this every time you start using MacPorts on any given day.
```
[sudo] port selfupdate
```

List ports that have available updates
```
port outdated
```
Update all ports
```
[sudo] port upgrade outdated
```
Update a specific port
```
[sudo] port upgrade <portname>
```
### Cleanup/Maintenance
List inactive ports

By default, upgrading ports in MacPorts does not remove the older versions. This is a safety measure to ensure you can go back to a working and tested version in case an update goes wrong. Use
```
port installed inactive
```
to get a list of inactive ports you likely no longer need.

### Uninstall all inactive ports

To save disk space, you should periodically uninstall any old versions you no longer need.
```
[sudo] port uninstall inactive
```

### List no-longer needed dependencies (leaves)

After a while of using MacPorts, installing and uninstalling ports, packages that have been automatically installed as dependencies for other ports are left behind, even though they are no longer necessary. Ports that have not been manually installed (“requested”) and do not have any dependents are called “leaves” and can be identified using the leaves pseudo-port. To list leaves
```
port echo leaves
```
Uninstall no-longer needed dependencies (leaves)
```
[sudo] port uninstall leaves
```
Note that the uninstallation can cause new ports to become leaves. To uninstall all leaves, you would have to repeat the process until port echo leaves comes back empty. To automate this, you can use --follow-dependencies when uninstalling.
```
[sudo] port uninstall --follow-dependencies leaves
```
To go through this process interactively so you can make sure you're not uninstalling anything you want to keep, you can install the port_cutleaves port. After installation, run it with
```
[sudo] port_cutleaves
```

# References
https://kapeli.com/cheat_sheets/MacPorts.docset/Contents/Resources/Documents/index
