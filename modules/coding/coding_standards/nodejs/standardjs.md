# StandardJS

StandardJS is a JavaScript style guide, linter, and formatter
This module saves you (and others!) time in three ways:

No configuration. The easiest way to enforce code quality in your project. No decisions to make. No .eslintrc files to manage. It just works.
Automatically format code. Just run standard --fix and say goodbye to messy or inconsistent code.
Catch style issues & programmer errors early. Save precious code review time by eliminating back-and-forth between reviewer & contributor.
Give it a try by running npx standard --fix right now!

Install
The easiest way to use JavaScript Standard Style is to install it globally as a Node command line program. Run the following command in Terminal:

$ npm install standard --global
Or, you can install standard locally, for use in a single project:

$ npm install standard --save-dev
Note: To run the preceding commands, Node.js and npm must be installed.

Usage
After you've installed standard, you should be able to use the standard program. The simplest use case would be checking the style of all JavaScript files in the current working directory:

$ standard
Error: Use JavaScript Standard Style
  lib/torrent.js:950:11: Expected '===' and instead saw '=='.
If you've installed standard locally, run with npx instead:

$ npx standard
You can optionally pass in a directory (or directories) using the glob pattern. Be sure to quote paths containing glob patterns so that they are expanded by standard instead of your shell:

$ standard "src/util/**/*.js" "test/**/*.js"
Note: by default standard will look for all files matching the patterns: **/*.js, **/*.jsx.

What you might do if you're clever
Add it to package.json

{
  "name": "my-cool-package",
  "devDependencies": {
    "standard": "*"
  },
  "scripts": {
    "test": "standard && node my-tests.js"
  }
}
Style is checked automatically when you run npm test

$ npm test
Error: Use JavaScript Standard Style
  lib/torrent.js:950:11: Expected '===' and instead saw '=='.
Never give style feedback on a pull request again!

Why should I use JavaScript Standard Style?
The beauty of JavaScript Standard Style is that it's simple. No one wants to maintain multiple hundred-line style configuration files for every module/project they work on. Enough of this madness!

This module saves you (and others!) time in three ways:

No configuration. The easiest way to enforce consistent style in your project. Just drop it in.
Automatically format code. Just run standard --fix and say goodbye to messy or inconsistent code.
Catch style issues & programmer errors early. Save precious code review time by eliminating back-and-forth between reviewer & contributor.
Adopting standard style means ranking the importance of code clarity and community conventions higher than personal style. This might not make sense for 100% of projects and development cultures, however open source can be a hostile place for newbies. Setting up clear, automated contributor expectations makes a project healthier.

For more info, see the conference talk "Write Perfect Code with Standard and ESLint". In this talk, you'll learn about linting, when to use standard versus eslint, and how prettier compares to standard.
