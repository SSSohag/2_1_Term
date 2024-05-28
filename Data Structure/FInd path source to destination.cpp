#include <iostream>
#include <vector>

using namespace std;

const int MAX_VERTICES = 10; // Maximum number of vertices

// Function to add an edge to the graph
void addEdge(int adjMatrix[MAX_VERTICES][MAX_VERTICES], int u, int v) {
    adjMatrix[u][v] = 1;
    adjMatrix[v][u] = 1; // Assuming undirected graph
}

// Function to print all paths from source to destination
void printAllPathsUtil(int adjMatrix[MAX_VERTICES][MAX_VERTICES], int src, int dest, vector<int>& path, bool visited[]) {
    visited[src] = true;
    path.push_back(src);

    if (src == dest) {
        cout << "Path: ";
        for (int i = 0; i < path.size(); ++i) {
            cout << path[i];
            if (i != path.size() - 1)
                cout << " -> ";
        }
        cout << endl;
    } else {
        for (int i = 0; i < MAX_VERTICES; ++i) {
            if (adjMatrix[src][i] && !visited[i]) {
                printAllPathsUtil(adjMatrix, i, dest, path, visited);
            }
        }
    }

    // Backtrack
    visited[src] = false;
    path.pop_back();
}

// Function to print all paths from source to destination
void printAllPaths(int adjMatrix[MAX_VERTICES][MAX_VERTICES], int src, int dest, int V) {
    bool visited[MAX_VERTICES] = {false};
    vector<int> path;
    printAllPathsUtil(adjMatrix, src, dest, path, visited);
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

    int source, destination;
    cout << "Enter source and destination: ";
    cin >> source >> destination;

    // Print all paths from source to destination
    cout << "All paths from " << source << " to " << destination << ":\n";
    printAllPaths(adjMatrix, source, destination, V);

    return 0;
}

