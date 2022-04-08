# Homebrew vs. Macports

Homebrew has grown to be the largest MacOS package manager, with broad package support and the ability to create unofficial “taps” software. Homebrew installs packages under “/usr/local” or “/opt/homebrew”. Taps allow distributing binaries via Homebrew before going to include in the main homebrew package repo, which takes time and justification. Homebrew distributes per-OS compiled binaries, so install time is almost instant. It is possible to also download source and build locally with Homebrew if desired. Homebrew does NOT require root, installing as user by default.

MacPorts distributes source code that is compiled on install, so Macports is generally much slower to install packages. Macports installs packages under “/opt/local”. Macports uses root, which can lead to users goofing up their system or workplace policy issues.

# Homebrew
Homebrew is a package manager for macOS which lets you install f open-source software via the terminal.

Install <package_name> with the brew install command:
```
brew install <package_name>
```
Homebrew will update its list of packages and then download and install the ``<package_name>`` command:
```
Updating Homebrew...

==> Downloading https://homebrew.bintray.com/bottles/<package_name>-1.8.0.catalina.bottle.tar.gz
######################################################################## 100.0%
==> Pouring <package_name>-1.8.0.catalina.bottle.tar.gz
🍺  /usr/local/Cellar/<package_name>/1.8.0: 8 files, 117.2KB
```
Occasionally, you’ll want to upgrade an existing package. Use the brew upgrade command, followed by the package name:
```
brew upgrade <package_name>
```
To remove a package, use brew uninstall. To uninstall the <package_name> command, execute this command:
```
brew uninstall <package_name>
```

# References
https://www.digitalocean.com/community/tutorials/how-to-install-and-use-homebrew-on-macos
