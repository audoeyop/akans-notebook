# Stacks

A stack is an abstract data structure that contains a collection of elements. Stack implements the LIFO (last in first out) mechanism i.e. the element that is pushed at the end is popped out first. Some of the principle operations in the stack are −

- Push - This adds a data value to the top of the stack.

- Pop - This removes the data value on top of the stack

- Peek - This returns the top data value of the stack

A program that implements a stack using array is given as follows.
```
Input: Push elements 11, 22, 33, 44, 55, 66
Output: Pop elements 66, 55, 44, 33, 22, 11
```

## Algorithm

**push(item)**
```
Begin
   increase the top pointer by 1
   insert item into the location top
End
```
**pop()**
```
Begin
   item = top element from stack
   reduce top pointer by 1
   return item
End
```
**peek()**
```
Begin
   item = top element from stack
   return item
End
```
Example Code
```
#include <iostream>
using namespace std;
int stack[100], n = 100, top = -1;
void push(int val) {
   if(top >= n-1)
      cout<<"Stack Overflow"<<endl;
   else {
      top++;
      stack[top] = val;
   }
}
void pop() {
   if(top <= -1)
      cout<<"Stack Underflow"<<endl;
   else {
      cout<<"The popped element is "<< stack[top] <<endl;
      top--;
   }
}
void display() {
   if(top>= 0) {
      cout<<"Stack elements are:";
      for(int i = top; i>= 0; i--)
         cout<<stack[i]<<" ";
      cout<<endl;
   } else
      cout<<"Stack is empty";
}
int main() {
   int ch, val;
   cout<<"1) Push in stack"<<endl;
   cout<<"2) Pop from stack"<<endl;
   cout<<"3) Display stack"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
            cout<<"Enter value to be pushed:"<<endl;
            cin>>val;
            push(val);
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3: {
            display();
            break;
         }
         case 4: {
            cout<<"Exit"<<endl;
            break;
         }
         default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }while(ch! = 4);
   return 0;
}
```
Output
```
1) Push in stack
2) Pop from stack
3) Display stack
4) Exit

Enter choice: 1
Enter value to be pushed: 2
Enter choice: 1
Enter value to be pushed: 6
Enter choice: 1
Enter value to be pushed: 8
Enter choice: 1
Enter value to be pushed: 7
Enter choice: 2
The popped element is 7
Enter choice: 3
Stack elements are:8 6 2
Enter choice: 5
Invalid Choice
Enter choice: 4
Exit
```

# References
https://www.tutorialspoint.com/cplusplus-program-to-implement-stack