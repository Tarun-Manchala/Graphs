# Graphs

Graph Representation:

- Adjacency List
- Adjacency Matrix

Differ based on Weights, Direction and Connection among nodes.

Terminology : walks, traversal, in-degree, out-degree, cycles, bipartite.

---

### **Popular & Basic Algorithms :**

- **Traversal (DFS / BFS)**
    
    
- **Cycles detection**
    - In **undirected graphs:** Use DFS or Union-Find (Disjoint Set Union - DSU).
    - In **directed graphs:** Use DFS with recursion stack.
- **Shortest Path**
    - Dijkstra’s Algorithm:
        
        Finds shortest paths from a source node to all other nodes in a **weighted graph (non-negative weights)**.
        
    - Bellman-Ford Algorithm:
        
        Handles **negative weights**, detects **negative cycles**.
        
    - Floyd-Warshall Algorithm:
        
        All-pairs shortest paths — works for **dense graphs**, supports negative weights.
        
    - A* Search
        
        Uses a heuristic to find the shortest path — often used in AI/pathfinding.
        
- **Minimum spanning Tree**
    - Kruskal’s Algorithm:
        
        Sort edges by weight and add them if they don’t form a cycle (using Union-Find).
        
    - Prim’s Algorithm:
        
        Grow MST by adding the smallest edge from the tree to a new vertex.
        
- **Topological sort**
    - Linear ordering of vertices in a **DAG (Directed Acyclic Graph)**.
    - Implemented using DFS or Kahn’s algorithm (BFS with indegree count).
- **Connectivity**
    - Union-Find (DSU):
        
        Efficient structure to detect connected components and cycles.
        
    - Tarjan’s Algorithm:
        
        Finds **strongly connected components** (SCCs) in a directed graph.
        
    - Kosaraju’s Algorithm:
        
        Another method to find SCCs using two passes of DFS.
        
- **Flow Algorithms**
    - Ford-Fulkerson / Edmonds-Karp Algorithm:
        
        Solve **maximum flow** problems in flow networks.
        
    - Dinic's Algorithm:
        
        Optimized max flow algorithm using level graphs.
        
- Bridges and Articulation Points:
    
    Find critical connections in a graph (Tarjan’s Bridge-finding algorithm).
    
- Eulerian Path/Circuit:
    
    Use Hierholzer’s algorithm for directed/undirected graphs.
    

---

### Advanced Algorithms :

- Matching & related
    - Bipartite graph check
    - Kuhn's Algorithm - Maximum Bipartite Matching
    - Hungarian Algorithm
- **Heavy-Light Decomposition (HLD)**
- **Centroid Decomposition**
- **Tarjan's Offline LCA Algorithm**
- **Lowest Common Ancestor (LCA)**
- **2-SAT using Implication Graph + SCC**
- **Bridge-Finding and Articulation Points (Tarjan)**
- **Minimum-Cost Maximum Flow**
- **Euler Tour Technique / Euler Tour Tree**
- **Johnson’s Algorithm**
- **Gabow’s Algorithm**
- **Dominator Tree**
- **Chinese Postman Problem (Route visiting all edges)**
- **Edmonds’ Blossom Algorithm**
- **Link/Cut Trees**
- **Randomized/Probabilistic Algorithms in Graphs**
- **MO’s Algorithm on Trees**
