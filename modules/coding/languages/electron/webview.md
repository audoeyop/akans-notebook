# Electron Webview

The webview tag is used to embed the 'guest' content like web pages in your Electron app. This content is contained within the webview container. An embedded page within your app controls how this content will be displayed.

The webview runs in a separate process than your app. To ensure security from malicious content, the webview doesn't have same permissions as your web page. This keeps your app safe from the embedded content. All interactions between your app and the embedded page will be asynchronous.

Let us consider an example to understand the embedding of an external webpage in our Electron app. We will embed the tutorialspoint website in our app on the right side. Create a new main.js file with the following content −
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
Now that we have set up our main process, let us create the HTML file that will embed the tutorialspoint website. Create a file called index.html with the following content −
```
<!DOCTYPE html>
<html>
   <head>
      <meta charset = "UTF-8">
      <title>Menus</title>
   </head>

   <body>
      <div>
         <div>
            <h2>We have the website embedded below!</h2>
         </div>
         <webview id = "foo" src = "https://www.tutorialspoint.com/" style =
            "width:400px; height:480px;">
            <div class = "indicator"></div>
         </webview>
      </div>

      <script type = "text/javascript">
         // Event handlers for loading events.
         // Use these to handle loading screens, transitions, etc
         onload = () => {
            const webview = document.getElementById('foo')
            const indicator = document.querySelector('.indicator')

            const loadstart = () => {
               indicator.innerText = 'loading...'
            }

            const loadstop = () => {
               indicator.innerText = ''
            }

            webview.addEventListener('did-start-loading', loadstart)
            webview.addEventListener('did-stop-loading', loadstop)
         }
      </script>
   </body>
</html>
```
Run the app using the following command −
```
$ electron ./main.js
```
The above command will generate the following output −

## Webview
The webview tag can be used for other resources as well. The webview element has a list of events that it emits listed on the official docs. You can use these events to improve the functionality depending on the things that take place in the webview.

Whenever you are embedding scripts or other resources from the Internet, it is advisable to use webview. This is recommended as it comes with great security benefits and does not hinder normal behaviour.

# References
https://www.tutorialspoint.com/electron/electron_webview.htm
