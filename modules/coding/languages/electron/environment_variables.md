# Electron - Environment Variables

Environment Variables control application configuration and behavior without changing code. Certain Electron behaviors are controlled by environment variables because they are initialized earlier than the command line flags and the app’s code.

There are two kinds of environment variables encoded in electron – Production variables and Development variables.

Production Variables
The following environment variables are intended for use at runtime in packaged Electron applications.

Sr.No	Variable & Description
1
GOOGLE_API_KEY

Electron includes a hardcoded API key for making requests to Google’s geocoding webservice. Because this API key is included in every version of Electron, it often exceeds its usage quota.

To work around this, you can supply your own Google API key in the environment. Place the following code in your main process file, before opening any browser windows that will make geocoding requests −

process.env.GOOGLE_API_KEY = 'YOUR_KEY_HERE'
2
ELECTRON_RUN_AS_NODE

Starts the process as a normal Node.js process.

3
ELECTRON_FORCE_WINDOW_MENU_BAR (Linux Only)

Do not use the global menu bar on Linux.

Development Variables
The following environment variables are intended primarily for development and debugging purposes.

Sr.No	Variable & Description
1
ELECTRON_ENABLE_LOGGING

Prints Chrome’s internal logging to the console.

2
ELECTRON_ENABLE_STACK_DUMPING

Prints the stack trace to the console when Electron crashes.

3
ELECTRON_DEFAULT_ERROR_MODE

Shows the Windows’s crash dialog when Electron crashes.

To set any of these environment variables as true, set it in your console. For example, if you want to enable logging, then use the following commands −

For Windows
> set ELECTRON_ENABLE_LOGGING=true
For Linux
$ export ELECTRON_ENABLE_LOGGING=true
Note that you will need to set these environment variables every time you restart your computer. If you want to avoid doing so, add these lines to your .bashrc files.

# References
https://www.tutorialspoint.com/electron/electron_environment_variables.htm
