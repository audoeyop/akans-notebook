# ReactJS Properties

Let us modify our ExpenseEntryItem component and try to use properties.

Open our expense-manager application in your favorite editor.

Open ExpenseEntryItem file in the src/components folder.

Introduce construction function with argument props.
```
constructor(props) {
   super(props);
}
```
Next, change the render method and populate the value from props.
```
render() {
   return (
      <div>
         <div><b>Item:</b> <em>{this.props.name}</em></div>
         <div><b>Amount:</b> <em>{this.props.amount}</em></div>
         <div><b>Spend date:</b>
            <em>{this.props.spenddate.tostring()}</em></div>
         <div><b>Category:</b> <em>{this.props.category}</em></div>
      </div>
   );
}
```
Here,

name represents the item’s name of type String

amount represents the item’s amount of type number

spendDate represents the item’s Spend Date of type date

category represents the item’s category of type String

Now, we have successfully updated the component using properties.
```
import React from 'react'
import './ExpenseEntryItem.css';
import styles from './ExpenseEntryItem.module.css'

class ExpenseEntryItem extends React.Component {
   constructor(props) {
      super(props);
   }
   render() {
      return (
         <div>
            <div><b>Item:</b> <em>{this.props.name}</em></div>
            <div><b>Amount:</b> <em>{this.props.amount}</em></div>
            <div><b>Spend Date:</b>
               <em>{this.props.spendDate.toString()}</em></div>
            <div><b>Category:</b> <em>{this.props.category}</em></div>
         </div>
      );
   }
}
export default ExpenseEntryItem;
```
Now, we can use the component by passing all the properties through attributes in the index.js.
```
import React from 'react';
import ReactDOM from 'react-dom';
import ExpenseEntryItem from './components/ExpenseEntryItem'

const name = "Grape Juice"
const amount = 30.00
const spendDate = new Date("2020-10-10")
const category = "Food"

ReactDOM.render(
   <React.StrictMode>
      <ExpenseEntryItem
         name={name}
         amount={amount}
         spendDate={spendDate}
         category={category} />
   </React.StrictMode>,
   document.getElementById('root')
);
```
Next, serve the application using npm command.
```
npm start
```
Next, open the browser and enter http://localhost:3000 in the address bar and press enter.

## Grape Modules
The complete code to do it using CDN in a webpage is as follows −
```
<!DOCTYPE html>
<html>
   <head>
      <meta charset="UTF-8" />
      <title>React based application</title>
   </head>
   <body>
      <div id="react-app"></div>

      <script src="https://unpkg.com/react@17/umd/react.development.js" crossorigin></script>
      <script src="https://unpkg.com/react-dom@17/umd/react-dom.development.js" crossorigin></script>
      <script src="https://unpkg.com/@babel/standalone/babel.min.js"></script>
      <script type="text/babel">
         class ExpenseEntryItem extends React.Component {
            constructor(props) {
               super(props);
            }
            render() {
               return (
                  <div>
                     <div><b>Item:</b> <em>{this.props.name}</em></div>
                     <div><b>Amount:</b> <em>{this.props.amount}</em></div>
                     <div><b>Spend Date:</b> <em>{this.props.spendDate.toString()}</em></div>
                     <div><b>Category:</b> <em>{this.props.category}</em></div>
                  </div>
               );
            }
         }
         const name = "Grape Juice"
         const amount = 30.00
         const spendDate = new Date("2020-10-10")
         const category = "Food"

         ReactDOM.render(
            <ExpenseEntryItem
               name={name}
               amount={amount}
               spendDate={spendDate}
               category={category} />,
            document.getElementById('react-app') );
      </script>
   </body>
</html>
```

## Objects as properties
Let us learn how to use JavaScript object as attributes in this chapter.

Open our expense-manager application in your favorite editor.

Next, open ExpenseEntryItem.js file.

Next, change the render() method and access the input object item through this.props.item property.
```
render() {
   return (
      <div>
         <div><b>Item:</b> <em>{this.props.item.name}</em></div>
         <div><b>Amount:</b> <em>{this.props.item.amount}</em></div>
         <div><b>Spend Date:</b>
            <em>{this.props.item.spendDate.toString()}</em></div>
         <div><b>Category:</b> <em>{this.props.item.category}</em></div>
      </div>
   );
}
```
Next, open index.js and represent the expense entry item in JavaScript object.
```
const item = {
   id: 1,
   name : "Grape Juice",
   amount : 30.5,
   spendDate: new Date("2020-10-10"),
   category: "Food"
}
```
Next, pass the object to the component using curly brace ({}) syntax in the component attributes.
```
<ExpenseEntryItem item={item} />
```
The complete code of index.js is as follows −
```
import React from 'react';
import ReactDOM from 'react-dom';
import ExpenseEntryItem from './components/ExpenseEntryItem'

const item = {
   id: 1,
   name : "Grape Juice",
   amount : 30.5,
   spendDate: new Date("2020-10-10"),
   category: "Food"
}
ReactDOM.render(
   <React.StrictMode>
   <ExpenseEntryItem item={item} />
   </React.StrictMode>,
   document.getElementById('root')
);
```
Next, serve the application using npm command.
```
npm start
```
Next, open the browser and enter http://localhost:3000 in the address bar and press enter.

The complete code to do it using CDN in a webpage is as follows −
```
<!DOCTYPE html>
<html>
   <head>
      <meta charset="UTF-8" />
      <title>React based application</title>
   </head>
   <body>
      <div id="react-app"></div>

      <script src="https://unpkg.com/react@17/umd/react.development.js" crossorigin></script>
      <script src="https://unpkg.com/react-dom@17/umd/react-dom.development.js" crossorigin></script>
      <script src="https://unpkg.com/@babel/standalone/babel.min.js"></script>
      <script type="text/babel">
         class ExpenseEntryItem extends React.Component {
            constructor(props) {
               super(props);
            }
            render() {
               return (
                  <div>
                     <div><b>Item:</b>
                        <em>{this.props.item.name}</em></div>
                     <div><b>Amount:</b>
                        <em>{this.props.item.amount}</em></div>
                     <div><b>Spend Date:</b>
                        <em>{this.props.item.spendDate.toString()}</em>
                     </div>
                     <div><b>Category:</b>
                        <em>{this.props.item.category}</em>
                     </div>
                  </div>
               );
            }
         }
         const item = {
            id: 1,
            name : "Grape Juice",
            amount : 30.5,
            spendDate: new Date("2020-10-10"),
            category: "Food"
         }
         ReactDOM.render(
            <ExpenseEntryItem item={item} />,
            document.getElementById('react-app')
         );
      </script>
   </body>
</html>
```

# References
https://www.tutorialspoint.com/reactjs/reactjs_create_component_using_properties.htm
