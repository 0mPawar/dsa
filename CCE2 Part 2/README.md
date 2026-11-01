# DSA CCE-2 P2 – Stack and Queue Implementations

## 1. Project Overview

This project contains four menu-driven C++ programs demonstrating the implementation of **Stacks and Queues** using arrays and linked lists. Each program allows users to perform the basic operations of the respective data structure.

This work is prepared for **CCE-2: Git and GitHub Repository – Unit IV: Stacks and Queues**.

## 2. Objectives

- To understand the working principles of Stack and Queue.
- To implement Stack using an array.
- To implement Queue using an array.
- To implement Stack using a linked list.
- To implement Queue using a linked list.
- To practise insertion, deletion, traversal and boundary-condition handling.
- To use Git and GitHub to maintain source code and document project progress.

## 3. Features

The repository includes the following four implementations:

1. **Stack using Array** – Supports Push, Pop, Peek and Display operations.
2. **Queue using Array** – Supports Enqueue, Dequeue, Front and Display operations.
3. **Stack using Linked List** – Supports Push, Pop, Peek and Display operations using dynamically allocated nodes.
4. **Queue using Linked List** – Supports Enqueue, Dequeue, Front and Display operations using dynamically allocated nodes.

All four programs are menu-driven and handle empty-structure conditions. The array implementations also check for overflow.

## 4. Data Structures Used

### 4.1 Stack

A Stack is a linear data structure that follows **LIFO (Last In, First Out)**. The element inserted last is removed first.

**Operations:**

- `push()` – Inserts an element at the top.
- `pop()` – Removes the top element.
- `peek()` – Displays the top element.
- `display()` – Displays elements from top to bottom.

#### Stack using Array

The array-based Stack uses a fixed-size array with a capacity of 100 elements and a `topIndex` variable to track the top position. It checks for overflow and underflow.

#### Stack using Linked List

The linked-list Stack uses dynamically allocated nodes. The `topNode` pointer refers to the top node.

- `push()` inserts a node at the beginning.
- `pop()` removes the first node.
- `peek()` displays the top node's value.
- `display()` traverses from top to bottom.

### 4.2 Queue

A Queue is a linear data structure that follows **FIFO (First In, First Out)**. The element inserted first is removed first.

**Operations:**

- `enqueue()` – Inserts an element at the rear.
- `dequeue()` – Removes an element from the front.
- `getFront()` – Displays the front element.
- `display()` – Displays elements from front to rear.

#### Queue using Array

The array-based Queue uses a fixed-size array with a capacity of 100 elements. The `frontIndex` and `rearIndex` variables track the front and rear positions.

This implementation is a **linear queue**, not a circular queue. Positions freed at the beginning are not reused until the queue becomes empty and the indices are reset.

#### Queue using Linked List

The linked-list Queue uses dynamically allocated nodes and two pointers:

- `frontNode` – Points to the first node, from which elements are deleted.
- `rearNode` – Points to the last node, where new elements are inserted.

The linked-list implementation grows dynamically, subject to available memory.

### 4.3 Time Complexity

| Operation    | Stack (Array) | Queue (Array) | Stack (Linked List) | Queue (Linked List) |
| ------------ | ------------: | ------------: | ------------------: | ------------------: |
| Insert       |          O(1) |          O(1) |                O(1) |                O(1) |
| Delete       |          O(1) |          O(1) |                O(1) |                O(1) |
| Peek / Front |          O(1) |          O(1) |                O(1) |                O(1) |
| Display      |          O(n) |          O(n) |                O(n) |                O(n) |

_Note: The array-based Queue uses a linear queue. Enqueue and dequeue take O(1) time, but the linear queue does not reuse freed positions at the beginning until it becomes empty._

## 5. Technologies Used

- **Programming Language:** C++
- **Data Structures:** Stack and Queue
- **Implementation Methods:** Array and Linked List
- **IDE:** Visual Studio Code
- **Compiler:** GCC (`g++`) or another compatible C++ compiler
- **Version Control:** Git and GitHub

## 6. How to Run the Project

Run each source file separately because every file contains its own `main()` function.

### Step 1: Open the Project Folder

Open the repository folder in Visual Studio Code or a terminal.

### Step 2: Compile and Run the Programs

#### A. Stack using Array

Compile:

```bash
g++ src/stack_array.cpp -o stack_array
```

Windows:

```bash
.\stack_array.exe
```

Linux/macOS:

```bash
./stack_array
```

#### B. Queue using Array

Compile:

```bash
g++ src/queue_array.cpp -o queue_array
```

Windows:

```bash
.\queue_array.exe
```

Linux/macOS:

```bash
./queue_array
```

#### C. Stack using Linked List

Compile:

```bash
g++ src/stack_linked_list.cpp -o stack_linked_list
```

Windows:

```bash
.\stack_linked_list.exe
```

Linux/macOS:

```bash
./stack_linked_list
```

#### D. Queue using Linked List

Compile:

```bash
g++ src/queue_linked_list.cpp -o queue_linked_list
```

Windows:

```bash
.\queue_linked_list.exe
```

Linux/macOS:

```bash
./queue_linked_list
```

## 7. Testing

Test each program using the following cases:

- Display an empty Stack or Queue.
- Attempt to pop from an empty Stack.
- Attempt to dequeue from an empty Queue.
- Insert one element.
- Insert multiple elements.
- Remove elements and verify their order.
- Check the top element of a Stack.
- Check the front element of a Queue.
- Fill the array-based structure to its capacity and test overflow.
- Remove all elements and verify that the structure becomes empty.
- For linked-list implementations, verify that deleting the final element resets the relevant pointers correctly.
- Exit each program properly.

## 8. Learning Outcomes

- Understood the LIFO principle of Stack.
- Understood the FIFO principle of Queue.
- Implemented Stack and Queue using arrays.
- Implemented Stack and Queue using linked lists.
- Practised pointer manipulation and dynamic memory allocation.
- Learned to handle overflow, underflow and empty-structure conditions.
- Understood the differences between array-based and linked-list implementations.
- Gained experience organizing C++ source files and maintaining code using Git and GitHub.

## 9. Limitations

- Array-based Stack and Queue have a fixed capacity of 100 elements.
- The array-based Queue is a linear queue, so freed positions at the beginning are not reused until the queue becomes empty.
- Linked-list implementations require dynamic memory allocation and are limited by available system memory.
- These programs demonstrate basic Stack and Queue operations; they do not implement advanced variations such as circular queues or priority queues.

## 10. Project Information

- **Subject:** Data Structures and Algorithms (DSA)
- **Activity:** CCE-2 P2 – Git and GitHub Repository
- **Unit:** Unit IV – Stacks and Queues
- **Academic Year:** 2026–2027
- **Course:** S.Y. B.Tech, Electronics and Computer Engineering
- **Institution:** Amrutvahini College of Engineering, Sangamner

## 11. Conclusion

This project demonstrates four implementations of Stack and Queue using arrays and linked lists. It explains the differences between fixed-size array storage and dynamic linked-list storage while implementing their basic operations. The programs provide practical experience with linear data structures, pointer manipulation, and their applications in C++.
