# #lectron System Tray

System tray is a menu outside of your application window. On MacOS and Ubuntu, it is located on the top right corner of your screen. On Windows it is on the bottom right corner. We can create menus for our application in system trays using Electron.

Create a new main.js file and add the following code to it. Have a png file ready to use for the system tray icon.
```
const {app, BrowserWindow} = require('electron')
const url = require('url')
const path = require('path')

let win

function createWindow() {
   win = new BrowserWindow({width: 800, height: 600})
   win.loadURL(url.format ({
      pathname: path.join(__dirname, 'index.html'),
      protocol: 'file:',
      slashes: true
   }))
}

app.on('ready', createWindow)
```
After having set up a basic browser window, we will create a new index.html file with the following content −
```
<!DOCTYPE html>
<html>
   <head>
      <meta charset = "UTF-8">
      <title>Menus</title>
   </head>
   <body>
      <script type = "text/javascript">
         const {remote} = require('electron')
         const {Tray, Menu} = remote
         const path = require('path')

         let trayIcon = new Tray(path.join('','/home/ayushgp/Desktop/images.png'))

         const trayMenuTemplate = [
            {
               label: 'Empty Application',
               enabled: false
            },

            {
               label: 'Settings',
               click: function () {
                  console.log("Clicked on settings")
               }
            },

            {
               label: 'Help',
               click: function () {
                  console.log("Clicked on Help")
               }
            }
         ]

         let trayMenu = Menu.buildFromTemplate(trayMenuTemplate)
         trayIcon.setContextMenu(trayMenu)
      </script>
   </body>
</html>
```
We created the tray using the Tray submodule. We then created a menu using a template and further attached the menu to our tray object.

Run the application using the following command −
```
$ electron ./main.js
```
When you run the above command, check your system tray for the icon you used. I used a smiley face for my application. The above command will generate the following output −

# References
https://www.tutorialspoint.com/electron/electron_system_tray.htm
