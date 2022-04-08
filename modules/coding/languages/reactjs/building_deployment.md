# ReactJS - Building & Deployment

Building
Once a React application development is done, application needs to be bundled and deployed to a production server. Let us learn the command available to build and deploy the application in this chapter.

A single command is enough to create a production build of the application.

npm run build
> expense-manager@0.1.0 build path\to\expense-manager
> react-scripts build

Creating an optimized production build...
Compiled with warnings.

File sizes after gzip:

   41.69 KB   build\static\js\2.a164da11.chunk.js
    2.24 KB   build\static\js\main.de70a883.chunk.js
    1.4  KB   build\static\js\3.d8a9fc85.chunk.js
    1.17 KB   build\static\js\runtime-main.560bee6e.js
  493     B   build\static\css\main.e75e7bbe.chunk.css

The project was built assuming it is hosted at /.
You can control this with the homepage field in your package.json.

The build folder is ready to be deployed.
You may serve it with a static server:

   npm install -g serve
   serve -s build

Find out more about deployment here:

   https://cra.link/deployment
Once the application is build, the application is available under build/static folder.

By default, profiling option is disable and can be enabled through –profile command line option. –profile will include profiling information in the code. The profiling information can be used along with React DevTools to analyse the application.

npm run build -- --profile
Deployment
Once the application is build, it can be deployed to any web server. Let us learn how to deploy a React application in this chapter.

Local deployment
Local deployment can be done using serve package. Let us first install serve package using below command −

npm install -g server
To start the application using serve, use the below command −

cd /go/to/app/root/folder
serve -s build
By default, serve serve the application using port 5000. The application can be viewed @ http://localhost:5000.

Production deployment
Production deployment can be easily done by copying the files under build/static folder to the production application’s root directory. It will work in all web server including Apache, IIS, Nginx, etc.

Relative path
By default, the production build is created assuming that the application will be hosted in the root folder of a web application. If the application needs to be hosted in a subfolder, then use below configuration in the package.json and then build the application.

{ ... "homepage": "http://domainname.com/path/to/subfolder", ... }

# References
https://www.tutorialspoint.com/reactjs/reactjs_building_deployment.htm
