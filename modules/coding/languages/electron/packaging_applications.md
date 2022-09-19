# Electron - Packaging Applications

Packaging and distributing apps is an integral part of the development process of a desktop application. Since Electron is a cross-platform desktop application development framework, packaging and distribution of apps for all the platforms should also be a seamless experience.

The electron community has created a project, electron-packager that takes care of the same for us. It allows us to package and distribute our Electron app with OS-specific bundles (.app, .exe etc) via JS or CLI.

## Supported Platforms
Electron Packager runs on the following host platforms −

- Windows (32/64 bit)
- OS X
- Linux (x86/x86_64)

It generates executables/bundles for the following target platforms −

- Windows (also known as win32, for both 32/64 bit)
- OS X (also known as darwin) / Mac App Store (also known as mas)
- Linux (for x86, x86_64, and armv7l architectures)

Installation
Install the electron packager using −
```
# for use in npm scripts
$ npm install electron-packager --save-dev

# for use from cli
$ npm install electron-packager -g
```

## Packaging Apps
In this section, we will see how to run the packager from the command line. The basic form of the command is −
```
electron-packager <sourcedir> <appname> --platform=<platform> --arch=<arch> [optional flags...]
```
This will −

Find or download the correct release of Electron.

Use that version of Electron to create a app in <output-folder>/<appname>-<platform>-<arch>.

--platform and --arch can be omitted, in two cases. If you specify --all instead, bundles for all valid combinations of target platforms/architectures will be created. Otherwise, a single bundle for the host platform/architecture will be created.

# References
https://www.tutorialspoint.com/electron/electron_packaging_apps.htm
