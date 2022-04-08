# Electron Inter Process Communication

Electron provides us with 2 IPC (Inter Process Communication) modules called ipcMain and ipcRenderer.

The ipcMain module is used to communicate asynchronously from the main process to renderer processes. When used in the main process, the module handles asynchronous and synchronous messages sent from a renderer process (web page). The messages sent from a renderer will be emitted to this module.

The ipcRenderer module is used to communicate asynchronously from a renderer process to the main process. It provides a few methods so you can send synchronous and asynchronous messages from the renderer process (web page) to the main process. You can also receive replies from the main process.

We will create a main process and a renderer process that will send each other messages using the above modules.

Create a new file called main_process.js with the following contents −

const {app, BrowserWindow} = require('electron')
const url = require('url')
const path = require('path')
const {ipcMain} = require('electron')

let win

function createWindow() {
   win = new BrowserWindow({width: 800, height: 600})
   win.loadURL(url.format ({
      pathname: path.join(__dirname, 'index.html'),
      protocol: 'file:',
      slashes: true
   }))
}

// Event handler for asynchronous incoming messages
ipcMain.on('asynchronous-message', (event, arg) => {
   console.log(arg)

   // Event emitter for sending asynchronous messages
   event.sender.send('asynchronous-reply', 'async pong')
})

// Event handler for synchronous incoming messages
ipcMain.on('synchronous-message', (event, arg) => {
   console.log(arg)

   // Synchronous event emmision
   event.returnValue = 'sync pong'
})

app.on('ready', createWindow)
Now create a new index.html file and add the following code in it.

<!DOCTYPE html>
<html>
   <head>
      <meta charset = "UTF-8">
      <title>Hello World!</title>
   </head>

   <body>
      <script>
         const {ipcRenderer} = require('electron')

         // Synchronous message emmiter and handler
         console.log(ipcRenderer.sendSync('synchronous-message', 'sync ping'))

         // Async message handler
         ipcRenderer.on('asynchronous-reply', (event, arg) => {
            console.log(arg)
         })

         // Async message sender
         ipcRenderer.send('asynchronous-message', 'async ping')
      </script>
   </body>
</html>
Run the app using the following command −

$ electron ./main_process.js
The above command will generate the following output −

// On your app console
Sync Pong
Async Pong

// On your terminal where you ran the app
Sync Ping
Async Ping
It is recommended not to perform computation of heavy/ blocking tasks on the renderer process. Always use IPC to delegate these tasks to the main process. This helps in maintaining the pace of your application.

# References
https://www.tutorialspoint.com/electron/electron_inter_process_communication.htm
