# 🛣️ Smart Road Network & Route Finder using Graphs

## 1. Project Overview

The **Smart Road Network & Route Finder** is a menu-driven C++ application that manages a network of locations connected by roads using a **Weighted Undirected Graph**.

The application allows users to add locations, establish roads with distances, display the road network, find the shortest path between two locations, perform graph traversals, search for locations, sort nearby roads by distance, and delete existing roads.

The graph is implemented using an **Adjacency Matrix**, where vertices represent locations and weighted edges represent roads connecting them.

Dijkstra's Shortest Path Algorithm is used to find the minimum-distance route between two locations. BFS and DFS are used to traverse the road network.

## 2. Objectives

- To understand and implement Graph data structures using C++.
- To represent a road network using an Adjacency Matrix.
- To perform vertex insertion and edge insertion and deletion.
- To implement Dijkstra's Shortest Path Algorithm.
- To implement Breadth First Search (BFS) and Depth First Search (DFS).
- To implement searching for locations.
- To apply Bubble Sort to arrange connected roads by distance.
- To understand weighted and undirected graph concepts.
- To demonstrate object-oriented programming concepts and operator overloading.

## 3. Features

1. **Add Location (Vertex)** – Adds a new location to the road network.
2. **Add Road (Weighted Edge)** – Connects two locations with a specified positive distance.
3. **Display Road Network** – Displays registered locations and their Adjacency Matrix.
4. **Find Shortest Path (Dijkstra)** – Calculates and displays the shortest route and total distance between two locations.
5. **Graph Traversal (BFS)** – Visits connected locations using Breadth First Search.
6. **Graph Traversal (DFS)** – Visits connected locations using Depth First Search.
7. **Search Location & Sort Roads** – Searches for a location and sorts its connected roads from nearest to farthest using Bubble Sort.
8. **Delete Road** – Removes an existing connection between two locations.
9. **Exit** – Terminates the application.

## 4. Data Structures and Algorithms Used

### 4.1 Graph

A Graph is a non-linear data structure consisting of vertices and edges.

In this project:

- **Vertex:** Represents a location.
- **Edge:** Represents a road connecting two locations.
- **Weight:** Represents the distance between connected locations.

The project uses a **Weighted Undirected Graph**, meaning that roads have distances and connections work in both directions.

### 4.2 Adjacency Matrix

The graph is represented using a two-dimensional array:

```cpp
int adjMatrix[MAX_NODES][MAX_NODES];
```

The maximum number of locations is 20.

- `0` represents the distance from a vertex to itself.
- A positive integer represents the distance between connected locations.
- `INF` represents the absence of a direct road.

When a road is added between two locations, both matrix positions are updated:

```cpp
adjMatrix[u][v] = weight;
adjMatrix[v][u] = weight;
```

This represents an undirected graph.

### 4.3 Dijkstra's Shortest Path Algorithm

Dijkstra's algorithm finds the shortest distance between a starting location and a destination.

**Working:**

1. Initialize all distances to infinity.
2. Set the starting location's distance to zero.
3. Select the unvisited location having the minimum known distance.
4. Mark that location as visited.
5. Update the distances of its connected neighbours.
6. Repeat until all reachable locations are processed or no reachable unvisited location remains.
7. Reconstruct and display the shortest path using the parent array.

The implementation uses:

- `dist[]` – Stores the shortest known distance.
- `parent[]` – Stores the previous vertex in the shortest path.
- `visited[]` – Tracks visited vertices.
- `path[]` – Stores the reconstructed shortest path.

**Time Complexity:** O(V²), where V is the number of vertices.

### 4.4 Breadth First Search (BFS)

BFS traverses a graph level by level, visiting neighbouring vertices before moving to the next level.

The project uses a manually implemented array-based queue.

**Working:**

1. Mark the starting vertex as visited.
2. Insert it into the queue.
3. Remove a vertex from the front of the queue.
4. Display the vertex.
5. Visit all its unvisited connected neighbours and insert them into the queue.
6. Continue until the queue becomes empty.

**Time Complexity:** O(V²) using the Adjacency Matrix.

### 4.5 Depth First Search (DFS)

DFS traverses a graph by exploring one path as deeply as possible before backtracking.

The project implements DFS recursively.

**Working:**

1. Start from the selected vertex.
2. Mark it as visited.
3. Display the current vertex.
4. Visit an unvisited connected neighbour recursively.
5. Continue until no unvisited connected neighbour remains.

**Time Complexity:** O(V²) using the Adjacency Matrix.

### 4.6 Searching Algorithm

The project uses Linear Search to find a location by its name.

The `searchLocation()` function checks each registered location until it finds a matching name or reaches the end of the list.

**Time Complexity:** O(V).

### 4.7 Bubble Sort

Bubble Sort is used to arrange the roads connected to a selected location in ascending order of distance.

**Working:**

1. Collect the distances and destination indices of connected roads.
2. Compare adjacent distances.
3. Swap the distances and their corresponding destination indices when they are in the wrong order.
4. Repeat until the roads are sorted.
5. Display the nearest road first and the farthest road last.

**Time Complexity:** O(d²), where d is the number of roads connected to the selected location.

### 4.8 Object-Oriented Programming

The project uses a class named `RoadGraph` to manage graph operations.

Important components:

- `RoadGraph` – Encapsulates graph data and operations.
- Constructor – Initializes the graph and sets the initial vertex count to zero.
- Private members – Store the Adjacency Matrix, location names and vertex count.
- Public methods – Perform insertion, deletion, searching, traversal and shortest-path operations.
- Friend function – Overloads the `<<` operator to display the graph.

**Operator Overloading:**

```cpp
friend ostream& operator<<(ostream& out, const RoadGraph& g);
```

This allows the graph to be displayed using:

```cpp
cout << map;
```

## 5. Technologies Used

- **Programming Language:** C++
- **Data Structure:** Weighted Undirected Graph
- **Graph Representation:** Adjacency Matrix
- **Algorithms:** Dijkstra, BFS, DFS, Linear Search and Bubble Sort
- **OOP Concepts:** Classes, Constructors, Encapsulation and Operator Overloading
- **IDE:** Visual Studio Code
- **Compiler:** GCC (`g++`) or another compatible C++ compiler
- **Version Control:** Git and GitHub

## 6. How to Run the Project

### Step 1: Save the Source Code

Save the C++ source code as:

```text
SmartRoadNetwork.cpp
```

### Step 2: Open the Project Folder

Open the project folder in Visual Studio Code or a terminal.

### Step 3: Compile the Program

```bash
g++ SmartRoadNetwork.cpp -o SmartRoadNetwork
```

### Step 4: Run the Program

**Windows:**

```bash
.\SmartRoadNetwork.exe
```

**Linux/macOS:**

```bash
./SmartRoadNetwork
```

### Step 5: Use the Menu

The application displays the following menu:

```text
========================================
   SMART ROAD NETWORK & ROUTE FINDER
========================================
1. Add Location (Vertex)
2. Add Road (Weighted Edge)
3. Display Road Network
4. Find Shortest Path (Dijkstra)
5. Graph Traversal (BFS)
6. Graph Traversal (DFS)
7. Search Location & Sort Roads
8. Delete Road
9. Exit
```

Follow the instructions displayed by the application to perform the required operations.

## 7. Testing

The program can be tested using the following cases:

- Adding multiple locations to the road network.
- Attempting to add a duplicate location.
- Attempting to exceed the maximum location capacity.
- Adding roads between valid locations.
- Attempting to add a road with zero or negative distance.
- Attempting to connect a location to itself.
- Displaying the Adjacency Matrix.
- Finding the shortest path between connected locations.
- Checking the shortest path when no route exists.
- Performing BFS traversal from a selected location.
- Performing DFS traversal from a selected location.
- Searching for an existing and non-existing location.
- Sorting connected roads from nearest to farthest.
- Deleting an existing road.
- Attempting to delete a road that does not exist.
- Entering invalid location indices.
- Entering non-integer values for numeric inputs.
- Exiting the application using menu option 9.

## 8. Learning Outcomes

- Understood the fundamentals of Graph data structures.
- Learned to represent a weighted undirected graph using an Adjacency Matrix.
- Implemented vertex and edge operations.
- Understood and implemented Dijkstra's Shortest Path Algorithm.
- Practised BFS and DFS graph traversal techniques.
- Applied Linear Search and Bubble Sort to graph-related operations.
- Learned to use classes, constructors, encapsulation and operator overloading.
- Improved understanding of algorithmic problem-solving and time complexity.
- Applied graph concepts to a real-world road network application.

## 9. Limitations

- The graph supports a maximum of 20 locations.
- The graph uses a fixed-size Adjacency Matrix.
- Location names are accepted as single words because the program uses `cin >> name`.
- The application supports adding and deleting roads but does not provide an operation to delete an entire location.
- The application uses predefined distances entered by the user and does not retrieve real-time road distances.
- The application does not display geographical maps or GPS-based routes.
- Dijkstra's algorithm supports positive road distances and does not handle negative edge weights.
- The BFS and DFS traversals display locations reachable from the selected starting location; they do not automatically traverse disconnected components.

## 10. Project Information

- **Subject:** Data Structures and Algorithms (DSA)
- **CCE:** CCE-3 – Course Project
- **Project Title:** Smart Road Network & Route Finder using Graphs
- **Data Structure:** Weighted Undirected Graph
- **Academic Year:** 2026–2027
- **Course:** S.Y. B.Tech, Electronics and Computer Engineering
- **Institution:** Amrutvahini College of Engineering, Sangamner

## 11. Conclusion

The Smart Road Network & Route Finder demonstrates the practical implementation of a weighted undirected graph using an Adjacency Matrix in C++. It provides functionalities such as location and road management, shortest-path calculation using Dijkstra's algorithm, BFS and DFS traversal, location searching and road sorting using Bubble Sort. This project helps develop a clear understanding of graph representation, graph algorithms, object-oriented programming and their applications in real-world road network systems.
