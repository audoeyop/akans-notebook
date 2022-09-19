# Electron Installation

To get started with developing using the Electron, you need to have Node and npm(node package manager) installed. If you do not already have these, head over to Node setup to install node on your local system. Confirm that node and npm are installed by running the following commands in your terminal.
```
node --version
npm --version
```
The above command will generate the following output −
```
v6.9.1
3.10.8
```
Whenever we create a project using npm, we need to provide a package.json file, which has all the details about our project. npm makes it easy for us to set up this file. Let us set up our development project.

Fire up your terminal/cmd, create a new folder named hello-world and open that folder using the cd command.

Now to create the package.json file using npm, use the following command.
```
npm init
```

Create a new folder and open it using the cd command. Now run the following command to install Electron globally.
```
$ npm install -g electron-prebuilt
```
Once it executes, you can check if Electron is installed the right way by running the following command −
```
$ electron --version
```
You should get the output −
```
v1.4.13
```

# References
https://www.tutorialspoint.com/electron/electron_installation.htm
