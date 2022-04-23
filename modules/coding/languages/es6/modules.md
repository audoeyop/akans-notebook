# ES6 Modules

Consider a scenario where parts of JavaScript code need to be reused. ES6 comes to your rescue with the concept of Modules.

A module organizes a related set of JavaScript code. A module can contain variables and functions. A module is nothing more than a chunk of JavaScript code written in a file. By default, variables and functions of a module are not available for use. Variables and functions within a module should be exported so that they can be accessed from within other files. Modules in ES6 work only in strict mode. This means variables or functions declared in a module will not be accessible globally.

Exporting a Module
------------------

The export keyword can be used to export components in a module. Exports in a module can be classified as follows -

-   Named Exports
-   Default Exports

### Named Exports

Named exports are distinguished by their names. There can be several named exports in a module. A module can export selected components using the syntax given below -

Syntax 1
```
//using multiple export keyword
export component1
export component2
...
...
export componentN
```
Syntax 2

Alternatively, components in a module can also be exported using a single export keyword with {} binding syntax as shown below -
```
//using single export keyword

export {component1,component2,....,componentN}
```
### Default Exports

Modules that need to export only a single value can use default exports. There can be only one default export per module.

Syntax
```
export default component_name
```
However, a module can have a default export and multiple named exports at the same time.

Importing a Module
------------------

To be able to consume a module, use the import keyword. A module can have multiple import statements.

### Importing Named Exports

While importing named exports, the names of the corresponding components must match.

Syntax
```
import {component1,component2..componentN} from module_name
```
However, while importing named exports, they can be renamed using the as keyword. Use the syntax given below -
```
import {original_component_name as new_component_name }
```
All named exports can be imported onto an object by using the asterisk * operator.
```
import * as variable_name from module_name
```
### Importing Default Exports

Unlike named exports, a default export can be imported with any name.

Syntax
```
import any_variable_name from module_name
```
### Example: Named Exports

Step 1 - Create a file company1.js and add the following code -

```
let company = "TutorialsPoint"

let getCompany = function(){
   return company.toUpperCase()
}

let setCompany = function(newValue){
   company = newValue
}

export {company,getCompany,setCompany}
```
Step 2 - Create a file company2.js. This file consumes components defined in the company1.js file. Use any of the following approaches to import the module.

Approach 1
```
import {company,getCompany} from './company1.js'

console.log(company)
console.log(getCompany())
```
Approach 2
```
import {company as x, getCompany as y} from './company1.js'

console.log(x)
console.log(y())
```
Approach 3
```
import * as myCompany from './company1.js'

console.log(myCompany.getCompany())
console.log(myCompany.company)
```
Step 3 - Execute the modules using an HTML file

To execute both the modules we need to make a html file as shown below and run this in live server. Note that we should use the attribute type="module" in the script tag.

```
<!DOCTYPE html>
<html lang="en">
<head>
   <meta charset="UTF-8">
   <meta name="viewport" content="width=device-width, initial-scale=1.0">
   <meta http-equiv="X-UA-Compatible" content="ie=edge">
   <title>Document</title>
</head>
<body>
   <script src="./company2.js" type="module"></script>
</body>
</html>
```

The output of the above code will be as stated below -
```
TutorialsPoint
TUTORIALSPOINT
```
Default Export
--------------

Step 1 - Create a file company1.js and add the following code -

```
let name = 'TutorialsPoint'

let company = {
   getName:function(){
      return name
   },
   setName:function(newName){
      name = newName
   }
}

export default company
```

Step 2 - Create a file company2.js. This file consumes the components defined in the company1.js file.

```
import c from './company1.js'
console.log(c.getName())
c.setName('Google Inc')
console.log(c.getName())
```

Step 3 - Execute the modules using an HTML file

To execute both the modules we need to make an html file as shown below and run this in live server. Note that we should use the attribute type="module" in the script tag.

```
<!DOCTYPE html>
<html lang="en">
<head>
   <meta charset="UTF-8">
   <meta name="viewport" content="width=device-width, initial-scale=1.0">
   <meta http-equiv="X-UA-Compatible" content="ie=edge">
   <title>Document</title>
</head>
<body>
   <script src="./company2.js" type="module"></script>
</body>
</html>
```

The output of the above code will be as mentioned below -
```
TutorialsPoint
Google Inc
```
Example: Combining Default and Named Exports
--------------------------------------------

Step 1 - Create a file company1.js and add the following code -

```
//named export
export let name = 'TutorialsPoint'

let company = {
   getName:function(){
      return name
   },
   setName:function(newName){
      name =newName
   }
}
//default export
export default company
```

Step 2 - Create a file company2.js. This file consumes the components defined in the company1.js file. Import the default export first, followed by the named exports.

```
import c, {name} from './company1.js'

console.log(name)
console.log(c.getName())
c.setName("Mohtashim")
console.log(c.getName())
```

Step 3 - Execute the modules using an HTML file

```
<!DOCTYPE html>
<html lang="en">
   <head>
      <meta charset="UTF-8">
      <meta name="viewport" content="width=device-width, initial-scale=1.0">
      <meta http-equiv="X-UA-Compatible" content="ie=edge">
      <title>Document</title>
   </head>
   <body>
      <script src="company2.js" type="module"></script>
   </body>
</html>
```
The output of the above code will be as shown below -
```
TutorialsPoint
TutorialsPoint
Mohtashim
```
