#include <iostream>

using namespace std;

const int MAX_VERTICES = 10; // Maximum number of vertices

// Function to add an edge to the graph
void addEdge(int adjMatrix[MAX_VERTICES][MAX_VERTICES], int u, int v) {
    adjMatrix[u][v] = 1;
    adjMatrix[v][u] = 1; // Assuming undirected graph
}

// Function to print the graph
void printGraph(int adjMatrix[MAX_VERTICES][MAX_VERTICES], int V) {
    cout << "Adjacency Matrix:" << endl;
    for (int i = 0; i < V; ++i) {
        for (int j = 0; j < V; ++j) {
            cout << adjMatrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Graph:" << endl;
    for (int i = 0; i < V; ++i) {
        cout << "Vertex " << i << " is connected to:";
        for (int j = 0; j < V; ++j) {
            if (adjMatrix[i][j] == 1)
                cout << " " << j;
        }
        cout << endl;
    }
}

int main() {
    int V, E; // Number of vertices and edges
    cout << "Enter the number of vertices: ";
    cin >> V;
    cout << "Enter the number of edges: ";
    cin >> E;

    // Create an adjacency matrix
    int adjMatrix[MAX_VERTICES][MAX_VERTICES] = {0};

    // Add edges to the graph
    cout << "Enter the edges (u v):" << endl;
    for (int i = 0; i < E; ++i) {
        int u, v;
        cin >> u >> v;
        addEdge(adjMatrix, u, v);
    }

    // Print the graph
    printGraph(adjMatrix, V);

    return 0;
}

