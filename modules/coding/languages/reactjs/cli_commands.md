# CLI Commands

Let us learn the basic command available in Create React App command line application in this chapter.

Creating a new application
Create React App provides multiple ways to create React application.

Using npx script.

npx create-react-app <react-app-name>
npx create-react-app hello-react-app
Using npm package manager.

npm init react-app <react-app-name>
npm init react-app hello-react-app
Using yarn package manager.

yarn init react-app <react-app-name>
yarn init react-app hello-react-app
Selecting a template
Create React App creates React application using default template. Template refers the initial code with certain build-in functionality. There are hundreds of template with many advanced features are available in npm package server. Create React App allows the users to select the template through –template command line switch.

create-react-app my-app --template typescript
Above command will create react app using cra-template-typescript package from npm server.

Installing a dependency
React dependency package can be installed using normal npm or yarn package command as React uses the project structure recommended by npm and yarn.

Using npm package manager.

npm install --save react-router-dom
Using yarn package manager.

yarn add react-router-dom
Running the application
React application can be started using npm or yarn command depending on the package manager used in the project.

Using npm package manager.

npm start
Using yarn package manager.

yarn start
To run the application in secure mode (HTTPS), set an environment variable, HTTPS and set it to true before starting the application. For example, in windows command prompt (cmd.exe), the below command set HTTPS and starts the application is HTTPS mode.

set HTTPS=true && npm start

# References
https://www.tutorialspoint.com/reactjs/reactjs_cli_commands.htm
