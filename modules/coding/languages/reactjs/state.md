# ReactJS State Management

State management is one of the important and unavoidable features of any dynamic application. React provides a simple and flexible API to support state management in a React component. Let us understand how to maintain state in React application in this chapter.

## What is state?
State represents the value of a dynamic properties of a React component at a given instance. React provides a dynamic data store for each component. The internal data represents the state of a React component and can be accessed using this.state member variable of the component. Whenever the state of the component is changed, the component will re-render itself by calling the render() method along with the new state.

A simple example to better understand the state management is to analyse a real-time clock component. The clock component primary job is to show the date and time of a location at the given instance. As the current time will change every second, the clock component should maintain the current date and time in it’s state. As the state of the clock component changes every second, the clock’s render() method will be called every second and the render() method show the current time using it’s current state.

The simple representation of the state is as follows −
```
{
   date: '2020-10-10 10:10:10'
}
```
Let us create a new Clock component later in this chapter.

Here,

## State management API

As we learned earlier, React component maintains and expose it’s state through this.state of the component. React provides a single API to maintain state in the component. The API is this.setState(). It accepts either a JavaScript object or a function that returns a JavaScript object.

The signature of the setState API is as follows −
```
this.setState( { ... object ...} );
```
A simple example to set / update name is as follows −
```
this.setState( { name: 'John' } )
```
The signature of the setState with function is as follows −
```
this.setState( (state, props) =>
   ... function returning JavaScript object ... );
```
Here,

state refers the current state of the React component

props refers the current properties of the React component.

React recommends to use setState API with function as it works correctly in async environment. Instead of lambda function, normal JavaScript function can be used as well.
```
this.setState( function(state, props) {
   return ... JavaScript object ...
}
```
A simple example to update the amount using function is as follows −
```
this.setState( (state, props) => ({
   amount: this.state.amount + this.props.additionaAmount
})
```
React state should not be modified directly through this.state member variable and updating the state through member variable does not re-render the component.

A special feature of React state API is that it will be merged with the existing state instead of replacing the state. For example, we can update any one of the state fields at a time instead of updating the whole object. This feature gives the developer the flexibility to easily handle the state data.

A special feature of React state API is that it will be merged with the existing state instead of replacing the state. For example, we can update any one of the state fields at a time instead of updating the whole object. This feature gives the developer the flexibility to easily handle the state data.

For example, let us consider that the internal state contains a student record.
```
{
   name: 'John', age: 16
}
```
We can update only the age using setState API, which will automatically merge the new object with the existing student record object.
```
this.setState( (state, props) => ({
   age: 18
});
```

## Stateless component

React component with internal state is called Stateful component and React component without any internal state management is called Stateless component. React recommends to create and use as many stateless component as possible and create stateful component only when it is absolutely necessary. Also, React does not share the state with child component. The data needs to be passed to the child component through child’s properties.

An example to pass date to the FormattedDate component is as follows −
```
<FormattedDate value={this.state.item.spend_date} />
```
The general idea is not to overcomplicate the application logic and use advanced features only when necessary.

### Create a stateful component
Let us create a React application to show the current date and time.

First, create a new react application, react-clock-app using Create React App or Rollup bundler by following instruction in Creating a React application chapter.

Next, open the application in your favorite editor.

Next, create src folder under the root directory of the application.

Next, create components folder under src folder.

Next, create a file, Clock.js under src/components folder and start editing.

Next, import React library.
```
import React from 'react';
Next, create Clock component.

class Clock extends React.Component {
   constructor(props) {
      super(props);
   }
}
```
Next, initialize state with current date and time.
```
constructor(props) {
   super(props);
   this.state = {
      date: new Date()
   }
}
```
Next, add a method, setTime() to update the current time −
```
setTime() {
   console.log(this.state.date);
   this.setState((state, props) => (
      {
         date: new Date()
      }
   ))
}
```
Next, use JavaScript method, setInterval and call setTime() method every second to ensure that the component’s state is updated every second.
```
constructor(props) {
   super(props);
   this.state = {
      date: new Date()
   }
   setInterval( () => this.setTime(), 1000);
}
```
Next, create a render function.
```
render() {
}
```
Next, update the render() method to show the current time.
```
render() {
   return (
      <div><p>The current time is {this.state.date.toString()}</p></div>
   );
}
```
Finally, export the component.
```
export default Clock;
```
The complete source code of the Clock component is as follows −
```
import React from 'react';

class Clock extends React.Component {
   constructor(props) {
      super(props);
      this.state = {
         date: new Date()
      }      
      setInterval( () => this.setTime(), 1000);
   }
   setTime() {
      console.log(this.state.date);
      this.setState((state, props) => (
         {
            date: new Date()
         }
      ))
   }
   render() {
      return (
         <div>
            <p>The current time is {this.state.date.toString()}</p>
         </div>
      );
   }
}
export default Clock;
```
Next, create a file, index.js under the src folder and use Clock component.
```
import React from 'react';
import ReactDOM from 'react-dom';
import Clock from './components/Clock';

ReactDOM.render(
   <React.StrictMode>
      <Clock />
   </React.StrictMode>,
   document.getElementById('root')
);
```
Finally, create a public folder under the root folder and create index.html file.
```
<!DOCTYPE html>
<html lang="en">
   <head>
      <meta charset="utf-8">
      <title>Clock</title>
   </head>
   <body>
      <div id="root"></div>
      <script type="text/JavaScript" src="./index.js"></script>
   </body>
</html>
```
Next, serve the application using npm command.
```
npm start
```
Next, open the browser and enter http://localhost:3000 in the address bar and press enter. The application will show the time and update it every second.

The current time is Wed Nov 11 2020 10:10:18 GMT+0530(Indian Standard Time)
The above application works fine but throws an error in the console.

Can't call setState on a component that is not yet mounted.
The error message indicates that the setState has to be called only after the component is mounted.

### What is mounting?
React component has a life-cycle and mounting is one of the stages in the life cycle. Let us learn more about the life-cycle in the upcoming chapters.

Introduce state in expense manager app
Let us introduce state management in the expense manager application by adding a simple feature to remove an expenses item.

Open expense-manager application in your favorite editor.

Next, open ExpenseEntryItemList.js file.

Next, initialize the state of the component with the expense items passed into the components through properties.
```
this.state = {
   items: this.props.items
}
```
Next, add the Remove label in the render()method.
```
<thead>
   <tr>
      <th>Item</th>
      <th>Amount</th>
      <th>Date</th>
      <th>Category</th>
      <th>Remove</th>
   </tr>
</thead>
```
Next, update the lists in the render() method to include the remove link. Also, use items in the state (this.state.items) instead of items from the properties (this.props.items).
```
const lists = this.state.items.map((item) =>
   <tr key={item.id} onMouseEnter={this.handleMouseEnter} onMouseLeave={this.handleMouseLeave}>
      <td>{item.name}</td>
      <td>{item.amount}</td>
      <td>{new Date(item.spendDate).toDateString()}</td>
      <td>{item.category}</td>
      <td><a href="#" onClick={(e) =>  this.handleDelete(item.id, e)}>Remove</a></td>
   </tr>
);
```
Next, implement handleDelete method, which will remove the relevant expense item from the state.
```
handleDelete = (id, e) => {
   e.preventDefault();
   console.log(id);

   this.setState((state, props) => {
      let items = [];

      state.items.forEach((item, idx) => {
         if(item.id != id)
            items.push(item)
      })
      let newState = {
         items: items
      }
      return newState;
   })
}
```
Here,

Expense items are fetched from the current state of the component.

Current expense items are looped over to find the item referred by the user using id of the item.

Create a new item list with all the expense item except the one referred by the user

Next, add a new row to show the total expense amount.
```
<tr>
   <td colSpan="1" style={{ textAlign: "right" }}>Total Amount</td>
   <td colSpan="4" style={{ textAlign: "left" }}>
      {this.getTotal()}
   </td>
</tr>
```
Next, implement the getTotal() method to calculate the total expense amount.
```
getTotal() {
   let total = 0;
   for(var i = 0; i < this.state.items.length; i++) {
      total += this.state.items[i].amount
   }
   return total;
}
```
The complete code of the render() method is as follows −
```
render() {
   const lists = this.state.items.map((item) =>
      <tr key={item.id} onMouseEnter={this.handleMouseEnter} onMouseLeave={this.handleMouseLeave}>
         <td>{item.name}</td>
         <td>{item.amount}</td>
         <td>{new Date(item.spendDate).toDateString()}</td>
         <td>{item.category}</td>
         <td><a href="#"
            onClick={(e) =>  this.handleDelete(item.id, e)}>Remove</a></td>
      </tr>
   );
   return (
      <table onMouseOver={this.handleMouseOver}>
         <thead>
            <tr>
               <th>Item</th>
               <th>Amount</th>
               <th>Date</th>
               <th>Category</th>
               <th>Remove</th>
            </tr>
         </thead>
         <tbody>
            {lists}
            <tr>
               <td colSpan="1" style={{ textAlign: "right" }}>Total Amount</td>
               <td colSpan="4" style={{ textAlign: "left" }}>
                  {this.getTotal()}
               </td>
            </tr>
         </tbody>
      </table>
   );
}
```
Finally, the updated code of the ExpenseEntryItemList is as follows −
```
import React from 'react';
import './ExpenseEntryItemList.css';

class ExpenseEntryItemList extends React.Component {
   constructor(props) {
      super(props);
      this.state = {
         items: this.props.items
      }
      this.handleMouseEnter = this.handleMouseEnter.bind();
      this.handleMouseLeave = this.handleMouseLeave.bind();
      this.handleMouseOver = this.handleMouseOver.bind();
   }
   handleMouseEnter(e) {
      e.target.parentNode.classList.add("highlight");
   }
   handleMouseLeave(e) {
      e.target.parentNode.classList.remove("highlight");
   }
   handleMouseOver(e) {
      console.log("The mouse is at (" + e.clientX + ", " + e.clientY + ")");
   }
   handleDelete = (id, e) => {
      e.preventDefault();
      console.log(id);
      this.setState((state, props) => {
         let items = [];
         state.items.forEach((item, idx) => {
            if(item.id != id)
               items.push(item)
         })
         let newState = {
            items: items
         }
         return newState;
      })
   }
   getTotal() {
      let total = 0;
      for(var i = 0; i < this.state.items.length; i++) {
         total += this.state.items[i].amount
      }
      return total;
   }
   render() {
      const lists = this.state.items.map((item) =>
         <tr key={item.id} onMouseEnter={this.handleMouseEnter} onMouseLeave={this.handleMouseLeave}>
            <td>{item.name}</td>
            <td>{item.amount}</td>
            <td>{new Date(item.spendDate).toDateString()}</td>
            <td>{item.category}</td>
            <td><a href="#"
               onClick={(e) =>  this.handleDelete(item.id, e)}>Remove</a></td>
         </tr>
      );
      return (
         <table onMouseOver={this.handleMouseOver}>
            <thead>
               <tr>
                  <th>Item</th>
                  <th>Amount</th>
                  <th>Date</th>
                  <th>Category</th>
                  <th>Remove</th>
               </tr>
            </thead>
            <tbody>
               {lists}
               <tr>
                  <td colSpan="1" style={{ textAlign: "right" }}>Total Amount</td>
                  <td colSpan="4" style={{ textAlign: "left" }}>
                     {this.getTotal()}
                  </td>
               </tr>
            </tbody>
         </table>
      );
   }
}
export default ExpenseEntryItemList;
```
Next, Update the index.js and include the ExpenseEntyItemList component.
```
import React from 'react';
import ReactDOM from 'react-dom';
import ExpenseEntryItemList from './components/ExpenseEntryItemList'

const items = [
   { id: 1, name: "Pizza", amount: 80, spendDate: "2020-10-10", category: "Food" },
   { id: 2, name: "Grape Juice", amount: 30, spendDate: "2020-10-12", category: "Food" },
   { id: 3, name: "Cinema", amount: 210, spendDate: "2020-10-16", category: "Entertainment" },
   { id: 4, name: "Java Programming book", amount: 242, spendDate: "2020-10-15", category: "Academic" },
   { id: 5, name: "Mango Juice", amount: 35, spendDate: "2020-10-16", category: "Food" },
   { id: 6, name: "Dress", amount: 2000, spendDate: "2020-10-25", category: "Cloth" },
   { id: 7, name: "Tour", amount: 2555, spendDate: "2020-10-29", category: "Entertainment" },
   { id: 8, name: "Meals", amount: 300, spendDate: "2020-10-30", category: "Food" },
   { id: 9, name: "Mobile", amount: 3500, spendDate: "2020-11-02", category: "Gadgets" },
   { id: 10, name: "Exam Fees", amount: 1245, spendDate: "2020-11-04", category: "Academic" }
]
ReactDOM.render(
   <React.StrictMode>
      <ExpenseEntryItemList items={items} />
   </React.StrictMode>,
   document.getElementById('root')
);
```
Next, serve the application using npm command.
```
npm start
```
Next, open the browser and enter http://localhost:3000 in the address bar and press enter.

## State management using React Hooks

React introduces an entirely new concepts called React Hooks from React 16.8. Even though, it is a relatively new concept, it enables React functional component to have its own state and life-cycle. Also, React Hooks enables functional component to use many of the feature not available earlier. Let us see how to do state management in a functional component using React Hooks in this chapter.

### What is React Hooks?
React Hooks are special functions provided by React to handle a specific functionality inside a React functional component. React provides a Hook function for every supported feature. For example, React provides useState() function to manage state in a functional component. When a React functional component uses React Hooks, React Hooks attach itself into the component and provides additional functionality.

The general signature of useState() Hook is as follows −
```
const [<state variable>, <state update function>] = useState(<initial value>);
```
For example, state management in clock component using Hooks can be done as specified below −
```
const [currentDateTime, setCurrentDateTime] = useState(new Date());
setInterval(() => setCurrentDateTime(new Date()), 1000);
```
Here,
```
currentDateTime − Variable used to hold current date and time (returned by setState()
setCurrentDate() − Function used to set current date and time (returned by setState())
```

### Create a stateful component
Let us recreate our clock component using Hooks in this chapter.

First, create a new react application, react-clock-hook-app using Create React App or Rollup bundler by following instruction in Creating a React application chapter.

Next, open the application in your favorite editor.

Next, create src folder under the root directory of the application.

Next, create components folder under src folder.

Next, create a file, Clock.js under src/components folder and start editing.

Next, import React library and React state Hook, setState.
```
import React, { useState } from 'react';
```
Next, create Clock component.
```
function Clock() {
}
```
Next, create state Hooks to maintain date and time.
```
const [currentDateTime, setCurrentDateTime] = useState(new Date());
```
Next, set date and time for every second.
```
setInterval(() => setCurrentDateTime(new Date()), 1000);
```
Next, create the user interface to show the current date and time using currentDateTime and return it.
```
return ( <div><p>The current time is {currentDateTime.toString()}</p></div> );
```
Finally, export the component using the code snippet −
```
export default Clock;
```
The complete source code of the Clock component is as follows −
```
import React, { useState } from 'react';

function Clock(props) {
   const [currentDateTime, setCurrentDateTime] = useState(new Date());
   setInterval(() => setCurrentDateTime(new Date()), 1000);
   return (
      <div><p>The current time is {currentDateTime.toString()}</p></div>
   );
}
export default Clock;
```
Next, create a file, index.js under the src folder and use Clock component.
```
import React from 'react';
import ReactDOM from 'react-dom';
import Clock from './components/Clock';

ReactDOM.render(
   <React.StrictMode>
      <Clock />
   </React.StrictMode>,
   document.getElementById('root')
);
```
Finally, create a public folder under the root folder and create index.html file.
```
<!DOCTYPE html>
<html lang="en">
   <head>
      <meta charset="utf-8">
      <title>Clock</title>
   </head>
   <body>
      <div id="root"></div>
      <script type="text/JavaScript" src="./index.js"></script>
   </body>
</html>
```
Next, serve the application using npm command.
```
npm start
```
Next, open the browser and enter http://localhost:3000 in the address bar and press enter. The application will show the time and update it every second.
```
The current time is Wed Nov 11 2020 10:10:18 GMT+0530 (India Standard Time)
```
The above application works fine. But, setCurrentDateTime() set to execute every second has to be removed when the application ends. We can do this using another Hook,useEffect provided by React. We will learn it in the upcoming chapter (Component life cycle).

Introducing state in expense manager app
Let us introduce state management in the expense manager application by adding a simple feature to remove an expenses item using Hooks in this chapter.

Open expense-manager application in your favorite editor.

Next, create a new file, ExpenseEntryItemListFn.js under src/components folder and start editing.

Next, import React library and React state Hook, setState.
```
import React, { useState } from 'react';
```
Next, import the css, ExpenseEntryItem.css.
```
import './ExpenseEntryItemList.css'
```
Next, create ExpenseEntryItemListFn component.

function ExpenseEntryItemListFn(props) { }
Next, initialize the state Hooks of the component with the expense items passed into the components through properties.
```
const [items, setItems] = useState(props.items);
```
Next, create event handlers to highlight the rows.
```
function handleMouseEnter(e) {
   e.target.parentNode.classList.add("highlight");
}
function handleMouseLeave(e) {
   e.target.parentNode.classList.remove("highlight");
}
function handleMouseOver(e) {
   console.log("The mouse is at (" + e.clientX + ", " + e.clientY + ")");
}
```
Next, create event handler to remove the selected items using items and setItems().
```
function handleDelete(id, e) {
   e.preventDefault();
   console.log(id);
   let newItems = [];
   items.forEach((item, idx) => {
      if (item.id != id)
         newItems.push(item)
   })
   setItems(newItems);
}
```
Next, create getTotal() method to calculate the total amount.
```
function getTotal() {
   let total = 0;
   for (var i = 0; i < items.length; i++) {
      total += items[i].amount
   }
   return total;
}
```
Next, create user interface to show the expenses by looping over the items.
```
const lists = items.map((item) =>
   <tr key={item.id} onMouseEnter={handleMouseEnter} onMouseLeave={handleMouseLeave}>
      <td>{item.name}</td>
      <td>{item.amount}</td>
      <td>{new Date(item.spendDate).toDateString()}</td>
      <td>{item.category}</td>
      <td><a href="#" onClick={(e) => handleDelete(item.id, e)}>Remove</a></td>
   </tr>
);
```
Next, create the complete UI to show the expenses and return it.
```
return (
   <table onMouseOver={handleMouseOver}>
      <thead>
         <tr>
            <th>Item</th>
            <th>Amount</th>
            <th>Date</th>
            <th>Category</th>
            <th>Remove</th>
         </tr>
      </thead>
      <tbody>
         {lists}
         <tr>
            <td colSpan="1" style={{ textAlign: "right" }}>Total Amount</td>
            <td colSpan="4" style={{ textAlign: "left" }}>
               {getTotal()}
            </td>
         </tr>
      </tbody>
   </table>
);
```
Finally, export the function as shown below −
```
export default ExpenseEntryItemListFn;
```
The complete code of the ExpenseEntryItemListFn is as follows −
```
import React, { useState } from 'react';
import './ExpenseEntryItemList.css'

function ExpenseEntryItemListFn(props) {
   const [items, setItems] = useState(props.items);

   function handleMouseEnter(e) {
      e.target.parentNode.classList.add("highlight");
   }
   function handleMouseLeave(e) {
      e.target.parentNode.classList.remove("highlight");
   }
   function handleMouseOver(e) {
      console.log("The mouse is at (" + e.clientX + ", " + e.clientY + ")");
   }
   function handleDelete(id, e) {
      e.preventDefault();
      console.log(id);
      let newItems = [];
      items.forEach((item, idx) => {
         if (item.id != id)
            newItems.push(item)
      })
      setItems(newItems);
   }
   function getTotal() {
      let total = 0;
      for (var i = 0; i < items.length; i++) {
         total += items[i].amount
      }
      return total;
   }
   const lists = items.map((item) =>
      <tr key={item.id} onMouseEnter={handleMouseEnter} onMouseLeave={handleMouseLeave}>
         <td>{item.name}</td>
         <td>{item.amount}</td>
         <td>{new Date(item.spendDate).toDateString()}</td>
         <td>{item.category}</td>
         <td><a href="#"
            onClick={(e) => handleDelete(item.id, e)}>Remove</a></td>
      </tr>
   );
   return (
      <table onMouseOver={handleMouseOver}>
         <thead>
            <tr>
               <th>Item</th>
               <th>Amount</th>
               <th>Date</th>
               <th>Category</th>
               <th>Remove</th>
            </tr>
         </thead>
         <tbody>
            {lists}
            <tr>
               <td colSpan="1" style={{ textAlign: "right" }}>Total Amount</td>
               <td colSpan="4" style={{ textAlign: "left" }}>
                  {getTotal()}
               </td>
            </tr>
         </tbody>
      </table>
   );
}
export default ExpenseEntryItemListFn;
```
Next, update the index.js and include the ExpenseEntyItemListFn component −
```
import React from 'react';
import ReactDOM from 'react-dom';
import ExpenseEntryItemListFn from './components/ExpenseEntryItemListFn'

const items = [
   { id: 1, name: "Pizza", amount: 80, spendDate: "2020-10-10", category: "Food" },
   { id: 2, name: "Grape Juice", amount: 30, spendDate: "2020-10-12", category: "Food" },
   { id: 3, name: "Cinema", amount: 210, spendDate: "2020-10-16", category: "Entertainment" },
   { id: 4, name: "Java Programming book", amount: 242, spendDate: "2020-10-15", category: "Academic" },
   { id: 5, name: "Mango Juice", amount: 35, spendDate: "2020-10-16", category: "Food" },
   { id: 6, name: "Dress", amount: 2000, spendDate: "2020-10-25", category: "Cloth" },
   { id: 7, name: "Tour", amount: 2555, spendDate: "2020-10-29", category: "Entertainment" },
   { id: 8, name: "Meals", amount: 300, spendDate: "2020-10-30", category: "Food" },
   { id: 9, name: "Mobile", amount: 3500, spendDate: "2020-11-02", category: "Gadgets" },
   { id: 10, name: "Exam Fees", amount: 1245, spendDate: "2020-11-04", category: "Academic" }
]
ReactDOM.render(
   <React.StrictMode>
      <ExpenseEntryItemListFn items={items} />
   </React.StrictMode>,
   document.getElementById('root')
);
```
Next, serve the application using npm command.
```
npm start
```
Next, open the browser and enter http://localhost:3000 in the address bar and press enter.

## Component Life cycle

In React, Life cycle of a component represents the different stages of the component during its existence. React provides callback function to attach functionality in each and every stages of the React life cycle. Let us learn the life cycle (and the related API) of a React component in this chapter.

### Life cycle API
Each React component has three distinct stages.

- Mounting − Mounting represents the rendering of the React component in the given DOM node.

- Updating − Updating represents the re-rendering of the React component in the given DOM node during state changes / updates.

- Unmounting − Unmounting represents the removal of the React component.

React provides a collection of life cycle events (or callback API) to attach functionality, which will to be executed during the various stages of the component. The visualization of life cycle and the sequence in which the life cycle events (APIs) are invoked as shown below.

### Life Cycle
constructor() − Invoked during the initial construction phase of the React component. Used to set initial state and properties of the component.

render() − Invoked after the construction of the component is completed. It renders the component in the virtual DOM instance. This is specified as mounting of the component in the DOM tree.

componentDidMount() − Invoked after the initial mounting of the component in the DOM tree. It is the good place to call API endpoints and to do network requests. In our clock component, setInterval function can be set here to update the state (current date and time) for every second.
```
componentDidMount() {
   this.timeFn = setInterval( () => this.setTime(), 1000);
}
```
componentDidUpdate() − Similar to ComponentDidMount() but invoked during the update phase. Network request can be done during this phase but only when there is difference in component’s current and previous properties.

The signature of the API is as follows −
```
componentDidUpdate(prevProps, prevState, snapshot)
```
prevProps − Previous properties of the component.

prevState − Previous state of the component.

snapshot − Current rendered content.

componentWillUnmount() − Invoked after the component is unmounted from the DOM. This is the good place to clean up the object. In our clock example, we can stop updating the date and time in this phase.
```
componentDidMount() {
   this.timeFn = setInterval( () => this.setTime(), 1000);
}
```
shouldComponentUpdate() − Invoked during the update phase. Used to specify whether the component should update or not. If it returns false, then the update will not happen.

The signature is as follows −
```
shouldComponentUpdate(nextProps, nextState)
```
nextProps − Upcoming properties of the component

nextState − Upcoming state of the component

getDerivedStateFromProps − Invoked during both initial and update phase and just before the render() method. It returns the new state object. It is rarely used where the changes in properties results in state change. It is mostly used in animation context where the various state of the component is needed to do smooth animation.

The signature of the API is as follows −
```
static getDerivedStateFromProps(props, state)
```
props − current properties of the component

state − Current state of the component

This is a static method and does not have access to this object.

getSnapshotBeforeUpdate − Invoked just before the rendered content is commited to DOM tree. It is mainly used to get some information about the new content. The data returned by this method will be passed to ComponentDidUpdate() method. For example, it is used to maintain the user’s scroll position in the newly generated content. It returns user’s scroll position. This scroll position is used by componentDidUpdate() to set the scroll position of the output in the actual DOM.

The signature of the API is as follows −
```
getSnapshotBeforeUpdate(prevProps, prevState)
```
prevProps − Previous properties of the component.

prevState − Previous state of the component.

Working example of life cycle API
Let us use life cycle api in our react-clock-app application.

Open react-clock-hook-app in your favorite editor.

Next, open src/components/Clock.js file and start editing.

Next, remove the setInterval() method from the constructor.
```
constructor(props) {
   super(props);
   this.state = {
      date: new Date()
   }
}
```
Next, add componentDidMount() method and call setInterval() to update the date and time every second. Also, store the reference to stop updating the date and time later.
```
componentDidMount() {
   this.setTimeRef = setInterval(() => this.setTime(), 1000);
}
```
Next, add componentWillUnmount() method and call clearInterval() to stop the date and time update calls.
```
componentWillUnmount() {
   clearInterval(this.setTimeRef)
}
```
Now, we have updated the Clock component and the complete source code of the component is given below −
```
import React from 'react';

class Clock extends React.Component {
   constructor(props) {
      super(props);
      this.state = {
         date: new Date()
      }      
   }
   componentDidMount() {
      this.setTimeRef = setInterval(() => this.setTime(), 1000);
   }
   componentWillUnmount() {
      clearInterval(this.setTimeRef)
   }
   setTime() {
      this.setState((state, props) => {
         console.log(state.date);
         return {
            date: new Date()
         }
      })
   }
   render() {
      return (
         <div>
            <p>The current time is {this.state.date.toString()}</p>
         </div>
      );
   }
}
export default Clock;
```
Next, open index.js and use setTimeout to remove the clock from the DOM after 5 seconds.
```
import React from 'react';
import ReactDOM from 'react-dom';
import Clock from './components/Clock';

ReactDOM.render(
   <React.StrictMode>
      <Clock />
   </React.StrictMode>,
   document.getElementById('root')
);
setTimeout(() => {
   ReactDOM.render(
      <React.StrictMode>
         <div><p>Clock is removed from the DOM.</p></div>
      </React.StrictMode>,
      document.getElementById('root')
   );
}, 5000);
```
Next, serve the application using npm command.
```
npm start
```
Next, open the browser and enter http://localhost:3000 in the address bar and press enter.

The clock will be shown for 5 second and then, it will be removed from the DOM. By checking the console log, we can found that the cleanup code is properly executed.

### Interface DOM
Life cycle api in Expense manager app
Let us add life cycle api in the expense manager and log it whenever the api is called. This will give insight about the life cycle of the component.

Open expense-manager application in your favorite editor.

Next, update ExpenseEntryItemList component with below methods.
```
componentDidMount() {
   console.log("ExpenseEntryItemList :: Initialize :: componentDidMount :: Component mounted");
}
shouldComponentUpdate(nextProps, nextState) {
   console.log("ExpenseEntryItemList :: Update :: shouldComponentUpdate invoked :: Before update");
   return true;
}
static getDerivedStateFromProps(props, state) {
   console.log("ExpenseEntryItemList :: Initialize / Update :: getDerivedStateFromProps :: Before update");
   return null;
}
getSnapshotBeforeUpdate(prevProps, prevState) {
   console.log("ExpenseEntryItemList :: Update :: getSnapshotBeforeUpdate :: Before update");
   return null;
}
componentDidUpdate(prevProps, prevState, snapshot) {
   console.log("ExpenseEntryItemList :: Update :: componentDidUpdate :: Component updated");
}
componentWillUnmount() {
   console.log("ExpenseEntryItemList :: Remove :: componentWillUnmount :: Component unmounted");
}
```
Next, serve the application using npm command.
```
npm start
```
Next, open the browser and enter http://localhost:3000 in the address bar and press enter.

Next, check the console log. It will show the life cycle api during initialization phase as shown below.
```
ExpenseEntryItemList :: Initialize / Update :: getDerivedStateFromProps :: Before update
ExpenseEntryItemList :: Initialize :: componentDidMount :: Component mounted
```
Next, remove an item and then, check the console log. It will show the life cycle api during the update phase as shown below.
```
ExpenseEntryItemList :: Initialize / Update :: getDerivedStateFromProps :: Before update
ExpenseEntryItemList.js:109 ExpenseEntryItemList :: Update :: shouldComponentUpdate invoked :: Before update
ExpenseEntryItemList.js:121 ExpenseEntryItemList :: Update :: getSnapshotBeforeUpdate :: Before update
ExpenseEntryItemList.js:127 ExpenseEntryItemList :: Update :: componentDidUpdate :: Component updated
```

### Component life cycle using React Hooks

React Hooks provides a special Hook, useEffect() to execute certain functionality during the life cycle of the component. useEffect() combines componentDidMount, componentDidUpdate, and componentWillUnmount life cycle into a single api.

The signature of the useEffect() api is as follows −
```
useEffect(
   <executeFn>,
   <values>
);
```
Here,

- executeFn − Function to execute when an effect occurs with an optional return function. The return function will be execute when a clean up is required (similar to componentWillUnmount).

- values − array of values the effect depends on. React Hooks execute the executeFn only when the values are changed. This will reduce unnecessary calling of the executeFn.

Let us add useEffect() Hooks in our react-clock-hook-app application.

Open react-clock-hook-app in your favorite editor.

Next, open src/components/Clock.js file and start editing.

Next, import useEffect api.
```
import React, { useState, useEffect } from 'react';
```
Next, call useEffect with function to set date and time every second using setInterval and return a function to stop updating the date and time using clearInterval.
```
useEffect(
   () => {
      let setTime = () => {
         console.log("setTime is called");
         setCurrentDateTime(new Date());
      }
      let interval = setInterval(setTime, 1000);
      return () => {
         clearInterval(interval);
      }
   },
   []
);
```
Here,

Created a function, setTime to set the current time into the state of the component.

Called the setInterval JavaScript api to execute setTime every second and stored the reference of the setInterval in the interval variable.

Created a return function, which calls the clearInterval api to stop executing setTime every second by passing the interval reference.

Now, we have updated the Clock component and the complete source code of the component is as follows −
```
import React, { useState, useEffect } from 'react';

function Clock() {
   const [currentDateTime, setCurrentDateTime] = useState(new Date());
   useEffect(
      () => {
         let setTime = () => {
            console.log("setTime is called");
            setCurrentDateTime(new Date());
         }
         let interval = setInterval(setTime, 1000);
         return () => {
            clearInterval(interval);
         }
      },
      []
   );
   return (
      <div>
         <p>The current time is {currentDateTime.toString()}</p>
      </div>
   );
}
export default Clock;
```
Next, open index.js and use setTimeout to remove the clock from the DOM after 5 seconds.
```
import React from 'react';
import ReactDOM from 'react-dom';
import Clock from './components/Clock';

ReactDOM.render(
   <React.StrictMode>
      <Clock />
   </React.StrictMode>,
   document.getElementById('root')
);
setTimeout(() => {
   ReactDOM.render(
      <React.StrictMode>
         <div><p>Clock is removed from the DOM.</p></div>
      </React.StrictMode>,
      document.getElementById('root')
   );
}, 5000);
```
Next, serve the application using npm command.
```
npm start
```
Next, open the browser and enter http://localhost:3000 in the address bar and press enter.

The clock will be shown for 5 seconds and then, it will be removed from the DOM. By checking the console log, we can found that the cleanup code is properly executed.

### Cleanup Code

**React children property aka Containment**

React allows arbitrary children user interface content to be included inside the component. The children of a component can be accessed through this.props.children. Adding children inside the component is called containment. Containment is used in situation where certain section of the component is dynamic in nature.

For example, a rich text message box may not know its content until it is called. Let us create RichTextMessage component to showcase the feature of React children property in this chapter.

First, create a new react application, react-message-app using Create React App or Rollup bundler by following instruction in Creating a React application chapter.

Next, open the application in your favorite editor.

Next, create src folder under the root directory of the application.

Next, create components folder under src folder.

Next, create a file, RichTextMessage.js under src/components folder and start editing.

Next, import React library.
```
import React from 'react';
```
Next, create a class, RichTextMessage and call constructor with props.
```
class RichTextMessage extends React.Component {
   constructor(props) {
      super(props);
   }
}
```
Next, add render() method and show the user interface of the component along with it’s children
```
render() {
   return (
      <div>{this.props.children}</div>
   )
}
```
Here,

props.children returns the children of the component.

Wraped the children inside a div tag.

Finally, export the component.
```
export default RichTextMessage;
```
The complete source code of the RichTextMessagecomponent is given below −
```
import React from 'react';

class RichTextMessage extends React.Component {
   constructor(props) {
      super(props);
   }
   render() {
      return (
         <div>{this.props.children}</div>
      )
   }
}
export default RichTextMessage;
```
Next, create a file, index.js under the src folder and use RichTextMessage component.
```
import React from 'react';
import ReactDOM from 'react-dom';
import RichTextMessage from './components/RichTextMessage';

ReactDOM.render(
   <React.StrictMode>
      <RichTextMessage>
         <h1>Containment is really a cool feature.</h1>
      </RichTextMessage>
   </React.StrictMode>,
   document.getElementById('root')
);
```
Finally, create a public folder under the root folder and create index.html file.
```
<!DOCTYPE html>
<html lang="en">
   <head>
      <meta charset="utf-8">
      <title>React App</title>
   </head>
   <body>
      <div id="root"></div>
      <script type="text/JavaScript" src="./index.js"></script>
   </body>
</html>
```
Next, serve the application using npm command.
```
npm start
```
Next, open the browser and enter http://localhost:3000 in the address bar and press enter.

### Cleanup Codes
Browser emits component’s children wrapped in div tag as shown below −
```
<div id="root">
   <div>
      <div>
         <h1>Containment is really a cool feature.</h1>
      </div>
   </div>
</div>
```
Next, change the child property of RichTextMessage component in index.js.
```
import React from 'react';
import ReactDOM from 'react-dom';
import Clock from './components/Clock';

ReactDOM.render(
  <React.StrictMode>
         <RichTextMessage>
            <h1>Containment is really an excellent feature.</h1>
         </RichTextMessage>
   </React.StrictMode>,
   document.getElementById('root')
);
```
Now, browser updates the component’s children content and emits as shown below −
```
<div id="root">
    <div>
        <div>
            <h1>Containment is really an excellent feature.</h1>
        </div>
    </div>
</div>
```
In short, containment is an excellent feature to pass arbitrary user interface content to the component.

## Layout in component

One of the advanced features of React is that it allows arbitrary user interface (UI) content to be passed into the component using properties. As compared to React’s special children property, which allows only a single user interface content to be passed into the component, this option enables multiple UI content to be passed into the component. This option can be seen as an extension of children property. One of the use cases of this option is to layout the user interface of a component.

For example, a component with customizable header and footer can use this option to get the custom header and footer through properties and layout the content.

A quick and simple example with two properties, header and footer is given below
```
<Layout header={<h1>Header</h1>} footer={<p>footer</p>} />
```
And the layout render logic is as follows −
```
return (<div>
   <div>
      {props.header}
   </div>
   <div>
      Component user interface
   </div>
   <div>
      {props.footer}
   </div>
</div>)
```
Let us add a simple header and footer to our expense entry list (ExpenseEntryItemList) component.

Open expense-manager application in your favorite editor.

Next, open the file, ExpenseEntryItemList.js in src/components folder.

Next, use header and footer props in the render() method.
```
return (
   <div>
      <div>{this.props.header}</div>
         ... existing code ...
      <div>{this.props.footer}</div>
   </div>
);
```
Next, open index.js and include header and footer property while using the ExpenseEntryItemList component.
```
ReactDOM.render(
   <React.StrictMode>
      <ExpenseEntryItemList items={items}
         header={
            <div><h1>Expense manager</h1></div>
         }
         footer={
            <div style={{ textAlign: "left" }}>
               <p style={{ fontSize: 12 }}>Sample application</p>
            </div>
         }
      />
   </React.StrictMode>,
   document.getElementById('root')
);
```
Next, serve the application using npm command.
```
npm start
```
Next, open the browser and enter http://localhost:3000 in the address bar and press enter.

### Interface
Sharing logic in component aka Render props
Render props is an advanced concept used to share logic between React components. As we learned earlier, a component can receive arbitrary UI content or React elements (objects) through properties. Usually, the component render the React elements it receives as is along with its own user interface as we have seen in children and layout concept. They do not share any logic between them.

Going one step further, React allows a component to take a function which returns user interface instead of plain user interface object through properties. The sole purpose of the function is to render the UI. Then, the component will do advanced computation and will call the passed in function along with computed value to render the UI.

In short, component’s property, which accepts a JavaScript function that renders user interface is called Render Props. Component receiving Render Props will do advanced logic and share it with Render Props, which will render the user interface using the shared logic.

Lot of advanced third-party library are based on Render Props. Some of the libraries using Render Props are −

- React Router
- Formik
- Downshift
For example, Formik library component will do the form validation and submission and pass the form design to the calling function aka Render Props. Similarly, React Router do the routing logic while delegating the UI design to other components using Render Props.

## Material UI

React community provides a huge collection of advanced UI component framework. Material UI is one of the popular React UI frameworks. Let us learn how to use material UI library in this chapter.

### Installation
Material UI can be installed using npm package.
```
npm install @material-ui/core
```
Material UI recommends roboto fonts for UI. To use Roboto font, include it using Gooogleapi links.
```
<link rel="stylesheet" href="https://fonts.googleapis.com/css?family=Roboto:300,400,500,700&display=swap" />
```
To use font icons, use icon link from googleapis −
```
<link rel="stylesheet" href="https://fonts.googleapis.com/icon?family=Material+Icons" />
```
To use SVG icons, install @material-ui/icons package −
```
npm install @material-ui/icons
```

### Working example
Let us recreate the expense list application and use material ui components instead of html tables.

First, create a new react application, react-materialui-app using Create React App or Rollup bundler by following instruction in Creating a React application chapter.

Next, install React Transition Group library −
```
cd /go/to/project
npm install @material-ui/core @material-ui/icons --save
```
Next, open the application in your favorite editor.

Next, create src folder under the root directory of the application.

Next, create components folder under src folder.

Next, create a file, ExpenseEntryItemList.js in src/components folder to create ExpenseEntryItemList component

Next, import React library and the stylesheet.
```
import React from 'react';
```
Next, import Material-UI library.
```
import { withStyles } from '@material-ui/core/styles';
import Table from '@material-ui/core/Table';
import TableBody from '@material-ui/core/TableBody';
import TableCell from '@material-ui/core/TableCell';
import TableContainer from '@material-ui/core/TableContainer';
import TableHead from '@material-ui/core/TableHead';
import TableRow from '@material-ui/core/TableRow';
import Paper from '@material-ui/core/Paper';
```
Next, create ExpenseEntryItemList class and call constructor function.
```
class ExpenseEntryItemList extends React.Component {
   constructor(props) {
      super(props);
   }
}
<link rel="stylesheet" href="https://fonts.googleapis.com/css?family=Roboto:300,400,500,700&display=swap" />
```
Next, create a render function.
```
render() {
}
```
Next, apply styles for table rows and table cells in the render method.
```
const StyledTableCell = withStyles((theme) => ({
   head: {
      backgroundColor: theme.palette.common.black,
      color: theme.palette.common.white,
   },
   body: {
      fontSize: 14,
   },
}))(TableCell);
const StyledTableRow = withStyles((theme) => ({
   root: {
      '&:nth-of-type(odd)': {
         backgroundColor: theme.palette.action.hover,
      },
   },
}))(TableRow);
```
Next, Use map method to generate a collection of Material UI StyledTableRow each representing a single expense entry item in the list.
```
const lists = this.props.items.map((item) =>
   <StyledTableRow key={item.id}>
      <StyledTableCell component="th" scope="row">
         {item.name}
      </StyledTableCell>
      <StyledTableCell align="right">{item.amount}</StyledTableCell>
      <StyledTableCell align="right">
         {new Date(item.spendDate).toDateString()}
      </StyledTableCell>
      <StyledTableCell align="right">{item.category}</StyledTableCell>
   </StyledTableRow>
);
```
Here, key identifies each row and it has to be unique among the list.

Next, in the render() method, create a Material UI table and include the lists expression in the rows section and return it.
```
return (
<TableContainer component={Paper}>
   <Table aria-label="customized table">
      <TableHead>
         <TableRow>
            <StyledTableCell>Title</StyledTableCell>
            <StyledTableCell align="right">Amount</StyledTableCell>
            <StyledTableCell align="right">Spend date</StyledTableCell>
            <StyledTableCell align="right">Category</StyledTableCell>
         </TableRow>
      </TableHead>
      <TableBody>
         {lists}
      </TableBody>
   </Table>
</TableContainer> );
```
Finally, export the component.
```
export default ExpenseEntryItemList;
```
Now, we have successfully created the component to render the expense items using material ui components.

The complete source code of the component is as given below −
```
import React from 'react';

import { withStyles } from '@material-ui/core/styles';
import Table from '@material-ui/core/Table';
import TableBody from '@material-ui/core/TableBody';
import TableCell from '@material-ui/core/TableCell';
import TableContainer from '@material-ui/core/TableContainer';
import TableHead from '@material-ui/core/TableHead';
import TableRow from '@material-ui/core/TableRow';
import Paper from '@material-ui/core/Paper';

class ExpenseEntryItemList extends React.Component {
   constructor(props) {
      super(props);
   }
   render() {
      const StyledTableCell = withStyles((theme) => ({
         head: {
            backgroundColor: theme.palette.common.black,
            color: theme.palette.common.white,
         },
         body: {
            fontSize: 14,
         },
      }))(TableCell);
      const StyledTableRow = withStyles((theme) => ({
         root: {
            '&:nth-of-type(odd)': {
               backgroundColor: theme.palette.action.hover,
            },
         },
      }))(TableRow);
      const lists = this.props.items.map((item) =>
         <StyledTableRow key={item.id}>
            <StyledTableCell component="th" scope="row">
               {item.name}
            </StyledTableCell>
            <StyledTableCell align="right">{item.amount}</StyledTableCell>
            <StyledTableCell align="right">{new Date(item.spendDate).toDateString()}</StyledTableCell>
            <StyledTableCell align="right">{item.category}</StyledTableCell>
         </StyledTableRow>
      );
      return (
      <TableContainer component={Paper}>
         <Table aria-label="customized table">
            <TableHead>
               <TableRow>
                  <StyledTableCell>Title</StyledTableCell>
                  <StyledTableCell align="right">Amount</StyledTableCell>
                  <StyledTableCell align="right">Spend date</StyledTableCell>
                  <StyledTableCell align="right">Category</StyledTableCell>
               </TableRow>
            </TableHead>
            <TableBody>
               {lists}
            </TableBody>
         </Table>
      </TableContainer> );
   }
}
export default ExpenseEntryItemList;
```
Next, open index.js and import react library and our newly created ExpenseEntryItemList component.
```
import React from 'react';
import ReactDOM from 'react-dom';
import ExpenseEntryItemList from './components/ExpenseEntryItemList';
```
Next, declare a list (of expense entry item) and populate it with some random values in index.js file.
```
const items = [
   { id: 1, name: "Pizza", amount: 80, spendDate: "2020-10-10", category: "Food" },
   { id: 1, name: "Grape Juice", amount: 30, spendDate: "2020-10-12", category: "Food" },
   { id: 1, name: "Cinema", amount: 210, spendDate: "2020-10-16", category: "Entertainment" },
   { id: 1, name: "Java Programming book", amount: 242, spendDate: "2020-10-15", category: "Academic" },
   { id: 1, name: "Mango Juice", amount: 35, spendDate: "2020-10-16", category: "Food" },
   { id: 1, name: "Dress", amount: 2000, spendDate: "2020-10-25", category: "Cloth" },
   { id: 1, name: "Tour", amount: 2555, spendDate: "2020-10-29", category: "Entertainment" },
   { id: 1, name: "Meals", amount: 300, spendDate: "2020-10-30", category: "Food" },
   { id: 1, name: "Mobile", amount: 3500, spendDate: "2020-11-02", category: "Gadgets" },
   { id: 1, name: "Exam Fees", amount: 1245, spendDate: "2020-11-04", category: "Academic" }
]
```
Next, use ExpenseEntryItemList component by passing the items through items attributes.
```
ReactDOM.render(
   <React.StrictMode>
      <ExpenseEntryItemList items={items} />
   </React.StrictMode>,
   document.getElementById('root')
);
```
The complete code of index.js is as follows −
```
import React from 'react';
import ReactDOM from 'react-dom';
import ExpenseEntryItemList from './components/ExpenseEntryItemList';

const items = [
   { id: 1, name: "Pizza", amount: 80, spendDate: "2020-10-10", category: "Food" },
   { id: 1, name: "Grape Juice", amount: 30, spendDate: "2020-10-12", category: "Food" },
   { id: 1, name: "Cinema", amount: 210, spendDate: "2020-10-16", category: "Entertainment" },
   { id: 1, name: "Java Programming book", amount: 242, spendDate: "2020-10-15", category: "Academic" },
   { id: 1, name: "Mango Juice", amount: 35, spendDate: "2020-10-16", category: "Food" },
   { id: 1, name: "Dress", amount: 2000, spendDate: "2020-10-25", category: "Cloth" },
   { id: 1, name: "Tour", amount: 2555, spendDate: "2020-10-29", category: "Entertainment" },
   { id: 1, name: "Meals", amount: 300, spendDate: "2020-10-30", category: "Food" },
   { id: 1, name: "Mobile", amount: 3500, spendDate: "2020-11-02", category: "Gadgets" },
   { id: 1, name: "Exam Fees", amount: 1245, spendDate: "2020-11-04", category: "Academic" }
]
ReactDOM.render(
   <React.StrictMode>
      <ExpenseEntryItemList items={items} />
   </React.StrictMode>,
   document.getElementById('root')
);
```
Next, serve the application using npm command.
```
npm start
```
Next, open index.html file in the public folder and include the material UI font and icons.
```
<!DOCTYPE html>
<html lang="en">
   <head>
      <meta charset="utf-8">
      <title>Material UI App</title>
      <link rel="stylesheet" href="https://fonts.googleapis.com/css?family=Roboto:300,400,500,700&display=swap" />
      <link rel="stylesheet" href="https://fonts.googleapis.com/icon?family=Material+Icons" />
   </head>
   <body>
      <div id="root"></div>
      <script type="text/JavaScript" src="./index.js"></script>
   </body>
</html>
```
Next, open the browser and enter http://localhost:3000 in the address bar and press enter.

# References
https://www.tutorialspoint.com/reactjs/reactjs_state.htm
