# Electron Menus

The desktop apps come with two types of menus – the application menu(on the top bar) and a context menu(right-click menu). We will learn how to create both of these in this chapter.

We will be using two modules – the Menu and the MenuItem modules. Note that the Menu and the MenuItem modules are only available in the main process. For using these modules in the renderer process, you need the remote module. We will come across this when we create a context menu.

Now, let us create a new main.js file for the main process −

const {app, BrowserWindow, Menu, MenuItem} = require('electron')
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

const template = [
   {
      label: 'Edit',
      submenu: [
         {
            role: 'undo'
         },
         {
            role: 'redo'
         },
         {
            type: 'separator'
         },
         {
            role: 'cut'
         },
         {
            role: 'copy'
         },
         {
            role: 'paste'
         }
      ]
   },

   {
      label: 'View',
      submenu: [
         {
            role: 'reload'
         },
         {
            role: 'toggledevtools'
         },
         {
            type: 'separator'
         },
         {
            role: 'resetzoom'
         },
         {
            role: 'zoomin'
         },
         {
            role: 'zoomout'
         },
         {
            type: 'separator'
         },
         {
            role: 'togglefullscreen'
         }
      ]
   },

   {
      role: 'window',
      submenu: [
         {
            role: 'minimize'
         },
         {
            role: 'close'
         }
      ]
   },

   {
      role: 'help',
      submenu: [
         {
            label: 'Learn More'
         }
      ]
   }
]

const menu = Menu.buildFromTemplate(template)
Menu.setApplicationMenu(menu)
app.on('ready', createWindow)
We are building a menu from a template here. This means that we provide the menu as a JSON to the function and it will take care of the rest. Now we have to set this menu as the Application menu.

Now create an empty HTML file called index.html and run this application using −

$ electron ./main.js
On the normal position of application menus, you will see a menu based on the above template.

Application Menus
We created this menu from the main process. Let us now create a context menu for our app. We will do this in our HTML file −

<!DOCTYPE html>
<html>
   <head>
      <meta charset = "UTF-8">
      <title>Menus</title>
   </head>

   <body>
      <script type = "text/javascript">
         const {remote} = require('electron')
         const {Menu, MenuItem} = remote

         const menu = new Menu()

         // Build menu one item at a time, unlike
         menu.append(new MenuItem ({
            label: 'MenuItem1',
            click() {
               console.log('item 1 clicked')
            }
         }))

         menu.append(new MenuItem({type: 'separator'}))
         menu.append(new MenuItem({label: 'MenuItem2', type: 'checkbox', checked: true}))
         menu.append(new MenuItem ({
            label: 'MenuItem3',
            click() {
               console.log('item 3 clicked')
            }
         }))

         // Prevent default action of right click in chromium. Replace with our menu.
         window.addEventListener('contextmenu', (e) => {
            e.preventDefault()
            menu.popup(remote.getCurrentWindow())
         }, false)
      </script>
   </body>
</html>
We imported the Menu and MenuItem modules using the remote module; then, we created a menu and appended our menuitems to it one by one. Further, we prevented the default action of right-click in chromium and replaced it with our menu.

Context Menu
The creation of menus in Electron is a very simple task. Now you can attach your event handlers to these items and handle the events according to your needs.

# References
https://www.tutorialspoint.com/electron/electron_menus.htm
