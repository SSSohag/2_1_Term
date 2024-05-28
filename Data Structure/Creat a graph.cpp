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
    for (int i = 0; i < V; ++i) {
        cout << i + 1 << " is connected to:";
        for (int j = 0; j < V; ++j) {
            if (adjMatrix[i][j] == 1)
                cout << " " << j + 1;
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
        addEdge(adjMatrix, u - 1, v - 1);
    }

    // Print the graph
    cout << "Graph:" << endl;
    printGraph(adjMatrix, V);

    return 0;
}

