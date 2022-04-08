# Bower

Bower is a tool that helps you install, update, and manage all of your front-end web development dependencies. A dependency in this context is an open source project that you rely on to build your site, such as Bootstrap, jQuery, and Normalize.css.

**Bower is no longer the dependency manager of choice for front-end projects. While the open source project is still maintained, its creators decided to deprecate it, and advise how to migrate to other solutions—namely Yarn and webpack.**

## Installation and usage

Bower is a node module, and can be installed with the following command:
```
npm install -g bower
```
This will install bower globally on your system.

Installing packages
```
bower install bootstrap
```
This will install bootstrap in the newly created `/bower_components` folder (at the root level). Bower not only downloads main distribution files, but it also downloads the whole repository of jquery, bootstrap, etc. It is recommended to ignore the `/bower_components` directory if you are using version control.

Note that this is going to install bootstrap 3.2.x which is the latest version at the time of writing this article. If we want to install the latest version in 2.x, we need to run:
```
bower install bootstrap#2
```
we can also specify the exact version with
```
bower install bootstrap#2.2
```

## Updating packages
If we want to update all our packages, we just need to run the following command:
```
bower update
```

## Including scripts

Now that the bower packages have been installed under `/bower_components`, you can reference the files in the code for your project. For example, a web application could reference the `.js` and `.css` files installed for `bootstrap`.
```
<link rel="stylesheet" type="text/css" ref="bower_components/bootstrap/dist/css/bootstrap.css">

<script src="bower_components/jquery/dist/jquery.js"></script>

<script src="bower_components/jquery/dist/js/bootstrap.js"></script>
```
Also note that because bootstrap depends on jQuery, running any of the previous `bower install` commands will automatically install jQuery as well, in order to resolve bootstrap’s dependencies.


## bower.json File
Bower uses a `bower.json` file to manage package dependencies for the application.

The --save flag will instruct bower to create (if it does not exist) a bower.json file and include the installed packages in it. This is an example of the generated bower.json file:
```
bower install jquery#1 bootstrap --save
```
bower.json
```
{

  "name": "package name",

  "version": "2.9.0",

  "private": true,

  "dependencies": {

    "bootstrap": "~3.2.0",

    "jquery": "1",

  }

}
```
Notice how there is a version constraint ~3.2.0. This will ensure that all of the team members will be working on the same version of bootstrap, tilde means that the version should be reasonably close to the specified version.

## Uninstall Package
Remove bower package from `bower_components` directory.
```
bower uninstall <package_name>
```
Remove bower package from `bower_components` directory and from `bower.json`.
```
bower uninstall <package_name> --save
```

## Other Useful Commands
Search for bower packages
```
bower search <package_name>
```
Find information about bower package
```
bower info <package_name>
```

# Reference
https://www.codementor.io/@jadjoubran/beginners-guide-getting-started-with-bower-package-manager-8sbwnu547
