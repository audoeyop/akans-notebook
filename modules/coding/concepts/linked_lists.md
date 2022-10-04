Linked List Data Structure In C++
=================================

A linked list is a linear dynamic data structure to store data items. We have already seen arrays in our previous topics on basic C++. We also know that arrays are a linear data structure that store data items in contiguous locations.

Unlike arrays, the linked list does not store data items in contiguous memory locations.

A linked list consists of items called "Nodes" which contain two parts. The first part stores the actual data and the second part has a pointer that points to the next node. This structure is usually called "Singly linked list".

Linked List In C++
------------------

We will take a look at the singly linked list in detail in this tutorial.

The following diagram shows the structure of a singly linked list.

![](assets/structure-of-a-singly-linked-list.png)

As shown above, the first node of the linked list is called "head" while the last node is called "Tail". As we see, the last node of the linked list will have its next pointer as null since it will not have any memory address pointed to.

Since each node has a pointer to the next node, data items in the linked list need not be stored at contiguous locations. The nodes can be scattered in the memory. We can access the nodes anytime as each node will have an address of the next node.

We can add data items to the linked list as well as delete items from the list easily. Thus it is possible to grow or shrink the linked list dynamically. There is no upper limit on how many data items can be there in the linked list. So as long as memory is available, we can have as many data items added to the linked list.

Apart from easy insertion and deletion, the linked list also doesn't waste memory space as we need not specify beforehand how many items we need in the linked list. The only space taken by linked list is for storing the pointer to the next node that adds a little overhead.

Next, we will discuss the various operations that can be performed on a linked list.

### Operations

Just like the other data structures, we can perform various operations for the linked list as well. But unlike arrays, in which we can access the element using subscript directly even if it is somewhere in between, we cannot do the same random access with a linked list.

In order to access any node, we need to traverse the linked list from the start and only then we can access the desired node. Hence accessing the data randomly from the linked list proves to be expensive.

We can perform various operations on a linked list as given below:

#### 1) Insertion

Insertion operation of linked list adds an item to the linked list. Though it may sound simple, given the structure of the linked list, we know that whenever a data item is added to the linked list, we need to change the next pointers of the previous and next nodes of the new item that we have inserted.

The second thing that we have to consider is the place where the new data item is to be added.

There are three positions in the linked list where a data item can be added.

### 1) At the beginning of the linked list

A linked list is shown below 2->4->6->8->10. If we want to add a new node 1, as the first node of the list, then the head pointing to node 2 will now point to 1 and the next pointer of node 1 will have a memory address of node 2 as shown in the below figure.

![](assets/Insertion.png)

Thus the new linked list becomes 1->2->4->6->8->10.

### 2) After the given Node

Here, a node is given and we have to add a new node after the given node. In the below-linked list a->b->c->d ->e, if we want to add a node f after node c then the linked list will look as follows:

![](assets/to-add-a-node-f-after-node-c.png)

Thus in the above diagram, we check if the given node is present. If it's present, we create a new node f. Then we point the next pointer of node c to point to the new node f. The next pointer of the node f now points to node d.

### 3) At the end of the Linked List

In the third case, we add a new node at the end of the linked list. Consider we have the same linked list a->b->c->d->e and we need to add a node f to the end of the list. The linked list will look as shown below after adding the node.

![](assets/3.At-the-end-of-the-linked-list.png)

Thus we create a new node f. Then the tail pointer pointing to null is pointed to f and the next pointer of node f is pointed to null. We have implemented all three types of insert functions in the below C++ program.

In C++, we can declare a linked list as a structure or as a class. Declaring linked list as a structure is a traditional C-style declaration. A linked list as a class is used in modern C++, mostly while using standard template library.

In the following program, we have used structure to declare and create a linked list. It will have data and pointer to the next element as its members.

```
#include <iostream>
using namespace std;

// A linked list node
struct Node
{
   int data;
   struct Node *next;
};
//insert a new node in front of the list
void push(struct Node** head, int node_data)
{
   /* 1. create and allocate node */
   struct Node* newNode = new Node;

   /* 2. assign data to node */
   newNode->data = node_data;

   /* 3. set next of new node as head */
   newNode->next = (*head);

   /* 4. move the head to point to the new node */
   (*head) = newNode;
}

//insert new node after a given node
void insertAfter(struct Node* prev_node, int node_data)
{
  /*1. check if the given prev_node is NULL */
if (prev_node == NULL)
{
   cout<<"the given previous node is required,cannot be NULL"; return; }

   /* 2. create and allocate new node */
   struct Node* newNode =new Node;

   /* 3. assign data to the node */
   newNode->data = node_data;

   /* 4. Make next of new node as next of prev_node */
   newNode->next = prev_node->next;

    /* 5. move the next of prev_node as new_node */
    prev_node->next = newNode;
}

/* insert new node at the end of the linked list */
void append(struct Node** head, int node_data)
{
/* 1. create and allocate node */
struct Node* newNode = new Node;

struct Node *last = *head; /* used in step 5*/

/* 2. assign data to the node */
newNode->data = node_data;

/* 3. set next pointer of new node to null as its the last node*/
newNode->next = NULL;

/* 4. if list is empty, new node becomes first node */
if (*head == NULL)
{
*head = newNode;
return;
}

/* 5. Else traverse till the last node */
while (last->next != NULL)
last = last->next;

/* 6. Change the next of last node */
last->next = newNode;
return;
}

// display linked list contents
void displayList(struct Node *node)
{
   //traverse the list to display each node
   while (node != NULL)
   {
      cout<<node->data<<"-->";
      node = node->next;
   }

if(node== NULL)
cout<<"null";
}
/* main program for linked list*/
int main()
{
/* empty list */
struct Node* head = NULL;

// Insert 10.
append(&head, 10);

// Insert 20 at the beginning.
push(&head, 20);

// Insert 30 at the beginning.
push(&head, 30);

// Insert 40 at the end.
append(&head, 40); //

Insert 50, after 20.
insertAfter(head->next, 50);

cout<<"Final linked list: "<<endl;
displayList(head);

return 0;
}
```

Output:
```
Final linked list:
30-->20-->50-->10-->40-->null
```

Next, we implement the linked list insert operation in Java. In Java language, the linked list is implemented as a class. The program below is similar in logic to the C++ program, the only difference is that we use a class for the linked list.

```
class LinkedList
{
   Node head; // head of list

   //linked list node declaration
   class Node
{
   int data;
   Node next;
   Node(int d) {data = d; next = null; }
}

/* Insert a new node at the front of the list */
public void push(int new_data)
{
   //allocate and assign data to the node
   Node newNode = new Node(new_data);

   //new node becomes head of linked list
   newNode.next = head;

   //head points to new node
   head = newNode;
}

// Given a node,prev_node insert node after prev_node
public void insertAfter(Node prev_node, int new_data)
{
   //check if prev_node is null.
   if (prev_node == null)
   {
      System.out.println("The given node is required and cannot be null");
      return;
   }

//allocate node and assign data to it
Node newNode = new Node(new_data);

//next of new Node is next of prev_node
newNode.next = prev_node.next;

//prev_node->next is the new node.
prev_node.next = newNode;
}
    //inserts a new node at the end of the list
public void append(intnew_data)
    {
        //allocate the node and assign data
        Node newNode = new Node(new_data);

        //if linked list is empty, then new node will be the head
if (head == null)
        {
head = new Node(new_data);
return;
        }

        //set next of new node to null as this is the last node
newNode.next = null;

// if not the head node traverse the list and add it to the last
Node last = head;
while (last.next != null)
last = last.next;

//next of last becomes new node
last.next = newNode;
return;
}

//display contents of linked list
public void displayList()
{
   Node pnode = head;
   while (pnode != null)
{
   System.out.print(pnode.data+"-->");
   pnode = pnode.next;
}
if(pnode == null)
System.out.print("null");

}

}

//Main class to call linked list class functions and construct a linked list
class Main{
public static void main(String[] args)
   {
   /* create an empty list */
   LinkedList lList = new LinkedList();

   // Insert 40.
   lList.append(40);

   // Insert 20 at the beginning.
   lList.push(20);

   // Insert 10 at the beginning.
   lList.push(10);

   // Insert 50 at the end.
   lList.append(50);

   // Insert 30, after 20.
   lList.insertAfter(lList.head.next, 30);

   System.out.println("\nFinal linked list: ");
   lList. displayList ();
   }
}
```

Output:
```
Final linked list:
10-->20-->30-->40-->50-->null
```

In both the program above, C++ as well as Java, we have separate functions to add a node in front of the list, end of the list and between the lists given in a node. In the end, we print the contents of the list created using all the three methods.

#### #2) Deletion

Like insertion, deleting a node from a linked list also involves various positions from where the node can be deleted. We can delete the first node, last node or a random kth node from the linked list. After deletion, we need to adjust the next pointer and the other pointers in the linked list appropriately so as to keep the linked list intact.

In the following C++ implementation, we have given two methods of deletion i.e. deleting the first node in the list and deleting the last node in the list. We first create a list by adding nodes to the head. Then we display the contents of the list after insertion and each deletion.

```
#include <iostream>
using namespace std;

/* Link list node */
struct Node {
   int data;
   struct Node* next;
   };

//delete first node in the linked list
Node* deleteFirstNode(struct Node* head)
{
   if (head == NULL)
   return NULL;

   // Move the head pointer to the next node
   Node* tempNode = head;
   head = head->next;
   delete tempNode;

   return head;
}
//delete last node from linked list
Node* removeLastNode(struct Node* head)
{
   if (head == NULL)
   return NULL;

   if (head->next == NULL) {
      delete head;
      return NULL;
   }

// first find second last node
Node* second_last = head;
while (second_last->next->next != NULL)
second_last = second_last->next;

// Delete the last node
delete (second_last->next);

// set next of second_last to null
second_last->next = NULL;

return head;
}

// create linked list by adding nodes at head
void push(struct Node** head, int new_data)
{
   struct Node* newNode = new Node;
   newNode->data = new_data;
   newNode->next = (*head);
   (*head) = newNode;
}

// main function
int main()
{
   /* Start with the empty list */
   Node* head = NULL;

   // create linked list
   push(&head, 2);
   push(&head, 4);
   push(&head, 6);
   push(&head, 8);
   push(&head, 10);

         Node* temp;

   cout<<"Linked list created "<<endl; for (temp = head; temp != NULL; temp = temp->next)
   cout << temp->data << "-->";
   if(temp == NULL)
   cout<<"NULL"<<endl;

       //delete first node
   head = deleteFirstNode(head);
   cout<<"Linked list after deleting head node"<<endl; for (temp = head; temp != NULL; temp = temp->next)
   cout << temp->data << "-->";
   if(temp == NULL)
   cout<<"NULL"<<endl;

      //delete last node
   head = removeLastNode(head);
   cout<<"Linked list after deleting last node"<<endl; for (temp = head; temp != NULL; temp = temp->next)
   cout << temp->data << "-->";
   if(temp == NULL)
   cout<<"NULL";

   return 0;
}
```

Output:
```
Linked list created
10-->8-->6-->4-->2-->NULL
```
Linked list after deleting head node
```
8-->6-->4-->2-->NULL
```
Linked list after deleting last node
```
8-->6-->4-->NULL
```
Next is the Java implementation for deleting nodes from the linked list. The implementation logic is the same as used in the C++ program. The only difference is that the linked list is declared as a class.

```
class Main {

// Linked list node /
static class Node {
      int data;
      Node next;
   };

// delete first node of linked list
static Node deleteFirstNode(Node head)
{
   if (head == null)
   return null;

   // Move the head pointer to the next node
   Node temp = head;
   head = head.next;

   return head;
}

// Delete the last node in linked list
static Node deleteLastNode(Node head)
{
   if (head == null)
   return null;

   if (head.next == null) {
   return null;
}

// search for second last node
Node second_last = head;
while (second_last.next.next != null)
second_last = second_last.next;

// set next of second last to null
second_last.next = null;

return head;
}

// Add nodes to the head and create linked list
static Node push(Node head, int new_data)
{
   Node newNode = new Node();
   newNode.data = new_data;
   newNode.next = (head);
   (head) = newNode;
   return head;
}

//main function
public static void main(String args[])
{
   // Start with the empty list /
   Node head = null;

        //create linked list
   head = push(head, 1);
   head = push(head, 3);
   head = push(head, 5);
   head = push(head, 7);
   head = push(head, 9);

        Node temp;
   System.out.println("Linked list created :");
   for (temp = head; temp != null; temp = temp.next)
   System.out.print(temp.data + "-->");
   if(temp == null)
   System.out.println("null");

   head = deleteFirstNode(head);
   System.out.println("Linked list after deleting head node :");
   for (temp = head; temp != null; temp = temp.next)
   System.out.print(temp.data + "-->");
   if(temp == null)
   System.out.println("null");
   head = deleteLastNode(head);
   System.out.println("Linked list after deleting last node :");
   for (temp = head; temp != null; temp = temp.next)
   System.out.print(temp.data + "-->");
   if(temp == null)
   System.out.println("null");
   }
}
```

Output:
```
Linked list created :
9-->7-->5-->3-->1-->null
```
Linked list after deleting head node :
```
7-->5-->3-->1-->null
```
Linked list after deleting last node :
```
7-->5-->3-->null
```

### Count The Number Of Nodes

The operation to count the number of nodes can be performed while traversing the linked list. We have already seen in the implementation above that whenever we need to insert/delete a node or display contents of the linked list, we need to traverse the linked list from start.

Keeping a counter and incrementing it as we traverse each node will give us the count of the number of nodes present in the linked list. We will leave this program for the readers to implement.

### Arrays And Linked Lists

Having seen the operations and implementation of the linked list, let us compare how arrays and linked list fair in comparison with each other.

| Arrays | Linked lists |
| --- | --- |
| Arrays have fixed size | Linked list size is dynamic |
| Insertion of new element is expensive | Insertion/deletion is easier |
| Random access is allowed | Random access not possible |
| Elements are at contiguous location | Elements have non-contiguous location |
| No extra space is required for the next pointer | Extra memory space required for next pointer |

### Applications

As arrays and linked lists are both used to store items and are linear data structures, both these structures can be used in similar ways for most of the applications.

Some of the applications for linked lists are as follows:

-   A linked list can be used to implement stacks and queues.
-   A linked list can also be used to implement graphs whenever we have to represent graphs as adjacency lists.
-   A mathematical polynomial can be stored as a linked list.
-   In the case of hashing technique, the buckets used in hashing are implemented using the linked lists.
-   Whenever a program requires dynamic allocation of memory, we can use a linked list as linked lists work more efficiently in this case.

### Conclusion

Linked lists are the data structures that are used to store data items in a linear fashion but noncontiguous locations. A linked list is a collection of nodes that contain a data part and a next pointer that contains the memory address of the next element in the list.

The last element in the list has its next pointer set to NULL, thereby indicating the end of the list. The first element of the list is called the Head. The linked list supports various operations like insertion, deletion, traversal, etc. In case of dynamic memory allocation, linked lists are preferred over arrays.

Linked lists are expensive as far as their traversal is concerned since we cannot randomly access the elements like arrays. However, insertion-deletion operations are less expensive when compared arrays.

We have learned all about linear linked lists in this tutorial. Linked lists can also be circular or doubly. We will have an in-depth look at these lists in our upcoming tutorials.

## Doubly Linked List

A Doubly Linked List (DLL) contains an extra pointer, typically called the previous pointer, together with the next pointer and data which are there in the singly linked list.

![](assets/DLL1.png)

C++ Example
```
class Node {
public:
    int data;

    // Pointer to next node in DLL
    Node* next;

    // Pointer to previous node in DLL
    Node* prev;
};

```

# References
https://www.softwaretestinghelp.com/linked-list/
https://www.geeksforgeeks.org/doubly-linked-list/
