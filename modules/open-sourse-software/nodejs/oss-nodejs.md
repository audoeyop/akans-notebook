# NVM
`nvm` (Node Version Manager) is a tool to manage and install different versions of Node.js. The following are examples of basic usage of `nvm`.
```
$ nvm ls-remote                 # lists all of the available versions of Node.js & iojs
$ nvm ls                        # list locally installed version
$ nvm install 0.12.3            # install the version 0.12.3 (see ls-remote for available options)
$ nvm use 0.12.3                # switch to and use the installed 0.12.3 version
$ nvm use 0.12.3 --default      # switch to and use the installed 0.12.3 version and set as default version
$ nvm which 0.12.2              # the path to the installed node version
$ nvm current                   # what is the current installed nvm version
$ nvm alias default 0.10.32     # set the default node to the installed 0.10.32 version
$ nvm --help                    # the help documents
```

# NPM

`npm` is the standard package manager for Node.js. It facilitates installation and management of Node.js packages. The following are some `npm` usage examples:

```
npm i	                            # Alias for npm install
npm install	                      # Install everything in package.json and dependencies
npm -g install <package_name> --save # install package and dependencies globally and save as dependency in global package.json
npm install --production             # install everything in package.json and dependencies, except devDependecies
npm install <package_name>	            # installs package and dependencies in node_modules
npm install --save <package_name>	     # installs package and dependencies in node_modules and save in package.json as dependency
npm install --save-prod <package_name>	# installs package and dependencies in node_modules and save in package.json as dependency
npm install --save-dev <package_name>	 # installs package and dependencies in node_modules and save in package.json as devDependency
npm install --save-exact <package_name>   # installs package and dependencies in node_modules and save in package.json with exact version
npm install --save-bundle <package_name>  # installs package and dependencies in node_modules and save in package.json as bundleDependency
npm uninstall <package_name>            # remove the package and dependencies from node_modules, but not package.json
npm uninstall <package_name> --save     #  remove the package and dependencies from node_modules and from dependencies in package.json
npm uninstall <package_name> --save-dev # remove the package and dependencies from node_modules and from devDependencies in package.json
npm -g uninstall <package_name> --save  # remove package and dependencies globally and from dependencies in global package.json
npm root                                # find npm project root folder from directory
npm root -g                             # find global npm package folder
```

## Install NPM Packages
npm package versions are noted as "tags". The following example include ways to target specific package versions.
```
npm i <package_name>	          # NPM package
npm i <package_name>@latest       # Specify tag latest
npm i <package_name>@3.0.0	    # Specify version 3.0.0
npm i <package_name>@">=1 <2.0"	   # Specify version range
npm i @org/<package_name>	         # Scoped NPM package
npm i /path/to/repo	    # Install local package from source
npm i ./archive.tgz	    # Install package from tarball
npm i https://site.com/archive.tgz	# Tarball via HTTP
```
## Listing Packages
```
npm list	             # Lists the installed versions of all dependencies in this software
npm list -g --depth 0	# Lists the installed versions of all globally installed packages
npm view	             # Lists the latest versions of all dependencies in this software
npm outdated	         # Lists only the dependencies in this software which are outdated
```

## Updating Packages
```
npm update	      # Update production packages
npm update --dev    # Update dev packages
npm update -g       # Update global packages
npm update <package_name>   # Update a package
```
## Misc features
Add someone as an owner
```
npm owner add USERNAME PACKAGENAME
```
List packages
```
npm ls
```
- Adds warning to those that install a package of old versions
```
npm deprecate PACKAGE@"< 0.2.0" "critical bug fixed in v0.2.0"
```

Update all packages, or selected packages
```
npm update [-g] PACKAGE
```
Check for outdated packages
```
npm outdated [PACKAGE]
```
## Local vs. Global Packages
NPM supports local packages and global packages. Local packages are installed in the directory where you run npm install <package-name>, and they are put in the node_modules folder under this directory.
Global packages are all put in a single place in your system (exactly where depends on your setup). Running npm commands with `-g` will tagret global packages.

Global packages can be used to run Node.js applications on the system from any directory. Where local packages can only be used for Node.js application fron the specific project directory. Using local packages are a good way to manage separate projects on the same system.

## Package.json File
The package.json file can be used to set configurations in your Node.js project, including the set of package dependencies for your project. The project developer uses this file to define all of the packages that the Node.js application depends on.

The following is an example of a package.json file:
```
{
  "name": "test-project",
  "version": "1.0.0",
  "description": "A Vue.js project",
  "main": "src/main.js",
  "private": true,
  "dependencies": {
    "vue": "^2.5.2"
  },
  "devDependencies": {
    "autoprefixer": "^7.1.2",
    "babel-core": "^6.22.1",
    "babel-eslint": "^8.2.1",
    "babel-helper-vue-jsx-merge-props": "^2.0.3",
    "vue-template-compiler": "^2.5.2",
    "webpack": "^3.6.0",
    "webpack-bundle-analyzer": "^2.9.0"

  },
  "peerDependencies": {
    "webpack-merge": "^4.1.0",
    "webpack-dev-server": "^2.9.1"
  },
  "optionalDependencies": {
    "webpack-merge": "^4.1.0",
    "webpack-dev-server": "^2.9.1"
  },
  "engines": {
    "eslint": "^4.15.0",
    "eslint-config-airbnb-base": "^11.3.0"
  }
}

```
Notice the `dependencies`, `devDependencies`, `peerDependencies`, and `optionalDependencies` sections which list packages and package versions that the project depends on.

There are different kinds of dependencies.
- `dependencies` are always installed. Typically, something would break if a dependency was missing.

- `devDependencies` are typically packages that are used in development but not mandatory for the actual functionality of your project. Examples: linters like ESLint and testing frameworks like Jest.

- `peerDependencies` are packages that are typically not installed automatically. In some cases, you want to express the compatibility of your package with another package without including it yourself. NPM will warn you when you have missing peerDependencies. Example: the react-router package depends on React being installed.
bundledDependencies are packages that will be bundled when publishing the package.

- `optionalDependencies` are dependencies that don’t necessarily need to be installed. If a dependency can be used, but you would like npm to proceed if it cannot be found or fails to install, then you may put it in the optionalDependencies object.

To install all of the packages in the `package.json` file, run one of the following commands.
```
npm install
npm i
```

To install all of the packages except devDependecies
```
npm install --production
```

### Adding dependencies to the package.json file

`–save or -S`: When the following command is used with npm install this will save all your installed core packages into the dependency section in the package.json file. Core dependencies are those packages without which your application will not give desired results.
```
npm install --save
```
`–save-prod or -P`: The following command is introduced in the later version of npm it will perform the same task as the --save command unless any other command such as -D or -O is present.
```
npm install --save-prod
```
`–save-dev or -D`: With --save-dev or -D command your installed packages will be added to devDependency section of the package.json file. Development dependencies are those packages which only meant for development purpose it will not affect the application’s result.
```
npm install --save-dev
```
`–save-optional` or `-O`: When this command is used the install the that packages will be listed under the optional Dependency section of the package.json file. Optional dependencies are those packages which are only used when a particular feature of the application is used and will not be required if that functionality isn’t used.
```
npm install --save-optional
```
`–no-save`: When this command is used with npm install it will not allow the installed packages from being saved into the dependency section.
```
npm install --no-save
```
Note: NPM provides two additional options to save dependencies into package.json file.

`–save-exact or -E`: This is an additional or optional command provided by the npm that will save the exact version of the installed packages which are configured at the time of development. It will not download the dependencies from npm’s default server range operator.
```
npm install --save-exact
```
`–save-bundle or -B`: The following command is also an optional command when --save-bundle or -B is used. This will also add the saved dependencies under the bundleDependency list.
```
npm install --save-bundle
```

To add an entry to the `package.json` file.

### Creating package.json file
The `package.json` file can be created manually or generated using the following command.
```
npm init
```
This will present some prompts for information related to your project. It will then create a boilerplate package.json file.

## package-lock.json File

A `package-lock.json` file is automatically generated for any operations where npm modifies either the node_modules tree, or package.json. It describes the exact packages and dependency versions that were installed and other information related to the project.

If a file does not exist, one can be generated with the following command:
```
npm i --package-lock-only
```

## Configuring npm

### npm config
The `npm config` command allows for setting/enabling/disabling features in for npm/nodejs. These commands add entries into your `~/.npmrc` file. The following example shows some common npm configurations:

Set npm configurations
```
npm config set init-author-name 'YOUR NAME'
npm config set init-license 'MIT'
npm config set proxy http://username:password@host:port
npm config set https-proxy http://username:password@host:port
```
Note: The `proxy` and `https-proxy` configurations are useful for when you are working from behind a local or corporate proxy.

Get setting for specific npm configuration
```
npm config get init-author-name
npm config get init-license
npm config get proxy
npm config get https-proxy
```

List all npm configs
```
npm config list [--json]
```

Remove npm configurations
```
npm config delete init-author-name
npm config delete init-license
npm config delete proxy
npm config delete https-proxy
```

### npmrc Files
npm allows you to use a few different rc files to set your configurations. The four locations where the files may reside are:

- Per-project config file: `/path/to/my/project/.npmrc`
- Per-user config file:` ~/.npmrc`
- Global config file: `$PREFIX/npmrc`
- Built-in npm config file: `/path/to/npm/npmrc`

Example npmrc file
```
https-proxy=proxy.example.com
init-license=MIT
init-author-url=http://stackabuse.com
color=true
```

### Configure from Command Line
You can also change configs from the command line by adding a '--' before the configuration argument. Putting --foo bar on the command line sets the foo configuration parameter to "bar". So you can try something like that:
```
 npm install <registry package_name> --registry=https://your.registry.local/
 ```

### NPM Environment Variables
There are a few environment variables that npm will use over parameters set locally (or in an npmrc file). Some examples are `NODE_ENV` and `HTTPS_PROXY`. You can also set any npm parameter by prefixing an environment variable with `npm_config_`. So that way you can do things like `export npm_config_registry=localhost:1234`.

### Software Registries
To change registry that npm uses to search for packages, you can use the following command:
```
npm config set registry <registry url>
npm install <registry package_name> --registry=https://your.registry.local/
```
The `registry` can also be set in the `package.json` file:
```
"registry":"http://my-internal-registry.local"
```


# References
https://cybertooth.io/blog/2017/07/13/nvm-cheat-sheet.html
https://devhints.io/npm
https://Node.js.dev/learn/the-package-json-guide
https://betterprogramming.pub/what-are-npms-optional-dependencies-and-when-should-we-use-them-796a6a964e73
