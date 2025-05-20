#include <bits/stdc++.h>

using namespace std;

class Graph {
    int V; // Number of vertices
    vector<vector<int>> adjMatrix;
    vector<bool>vis;

public:
    // Constructor
    Graph(int V) {
        this->V = V;
        adjMatrix.resize(V, vector<int>(V, 0)); // Initialize V x V matrix with 0
    }

    // Add edge to the graph (undirected by default)
    void addEdge(int u, int v, bool isDirected = false) {
        adjMatrix[u][v] = 1;
        if (!isDirected) {
            adjMatrix[v][u] = 1;
        }
    }

    void visited(){
        vis.clear();
        vis.resize(V);
    }

    // DFS traversal from a given source node
    void dfs(int start) {
        vis[start]=1;
        cout << start << " ";
        for(int i=0;i<V;i++){
            if(!vis[i] && adjMatrix[start][i]==1){
                dfs(i);
            }
        }
    }
};

void solve(){
    Graph g(6); // Create a graph with 6 vertices (0 to 5)

    // Add edges
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 5);

    // Perform BFS starting from vertex 0
    g.visited();
    g.dfs(0);   
}

// Approximate time ,even that will consumes time, so  leave it 

int main(){
clock_t time_req;
time_req=clock();

solve();

time_req=clock()-time_req;
cout <<'\n';
cout << "Execution time : " << (float)time_req/CLOCKS_PER_SEC << " seconds" <<'\n';
return 0;
}