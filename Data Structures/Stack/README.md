# Stack

A list with the restriction that insertion and deletion can be performed only from one end, called the top.

Stack is LIFO(Last In First Out) Data Structure.

## Operations

* Push(x) - Inserting an element on top of stack  
* Pop() - Removing an element on top of stack
* Top() - Returns the top element
* IsEmpty() - returns true if list is empty

Time Complexity of all these operation is O(1)

## Applications
- Function call/Recursion
- Undo Operation in text editor
- Balanced Paranthesis

## We can implement stacks using 

1. Arrays
2. Linked Lists

## Infix (human-readable)

operand-operator-operand

## Prefix (polish notation)

operator-operand-operand
- good for machine

## Postfix (reverse polish notation)

operand-operand-operator

* Easiest to parse
* Least costly in terms of time and memory
* good for machine 
