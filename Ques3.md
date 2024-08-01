## Purpose
Implementation of Dijkstra's algorithm, which finds the shortest path from a start node to every other node in a weighted graph.

## Time Complexity
O(n^2)

## Code Structure and Function Documentation

### Class `EdgeNode`
- **Purpose:** Represents an edge in the graph.
- **Constructor:**
  ```cpp
  EdgeNode(int key, int weight)
  ```
  Initializes an edge with the given `key` (destination vertex) and `weight`, and sets `next` to `NULL`.

### Class `Graph`
- **Purpose:** Represents a graph using an adjacency list.
- **Constructor:**
  ```cpp
  Graph(bool directed)
  ```
  Initializes a graph, setting all edge lists to `NULL` and storing whether the graph is directed.
- **Destructor:**
  ```cpp
  ~Graph()
  ```
  Currently empty. Should release dynamically allocated memory.
- **Methods:**
  - ```cpp
    void insert_edge(int x, int y, int weight, bool directed)
    ```
    Inserts an edge from vertex `x` to vertex `y` with the given `weight`. If the graph is undirected, it also inserts an edge from `y` to `x`.
  - ```cpp
    void print()
    ```
    Prints the adjacency list of the graph, showing each vertex and its neighbors.

### Function `init_vars`
- **Purpose:** Initializes the `discovered`, `distance`, and `parent` arrays.
- **Signature:**
  ```cpp
  void init_vars(bool discovered[], int distance[], int parent[])
  ```
  Sets all vertices as undiscovered, all distances to the maximum integer value, and all parents to `-1`.

### Function `dijkstra_shortest_path`
- **Purpose:** Implements Dijkstra's algorithm to find the shortest paths from the start vertex.
- **Signature:**
  ```cpp
  void dijkstra_shortest_path(Graph *g, int parent[], int distance[], int start)
  ```
  Uses Dijkstra's algorithm to find the shortest path from the `start` vertex to all other vertices in the graph `g`. Updates the `distance` and `parent` arrays.

### Function `print_shortest_path`
- **Purpose:** Prints the shortest path from the start vertex to a given vertex `v`.
- **Signature:**
  ```cpp
  void print_shortest_path(int v, int parent[])
  ```
  Recursively prints the parent vertices leading to vertex `v`.

### Function `print_distances`
- **Purpose:** Prints the shortest distances from the start vertex to all other vertices.
- **Signature:**
  ```cpp
  void print_distances(int start, int distance[])
  ```
  Prints the shortest distance from the `start` vertex to each vertex, excluding vertices that are unreachable.

### `main` Function
- **Purpose:** Demonstrates the use of the `Graph` class and Dijkstra's algorithm.
- **Steps:**
  1. Creates a new graph `g`.
  2. Inserts edges into the graph.
  3. Calls `dijkstra_shortest_path` to find the shortest paths from the start vertex.
  4. Prints the shortest path from the start vertex to vertex 5.
  5. Prints the shortest distances from the start vertex to all other vertices.
  6. Deletes the graph to free memory.

## Example Usage
- **Input:**
  Inserted edges represent a weighted graph.
- **Output:**
  Prints the shortest path from vertex 1 to vertex 5 and the shortest distances from vertex 1 to all other vertices.
