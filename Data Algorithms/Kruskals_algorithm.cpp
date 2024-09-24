#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Structure to represent an edge in the graph
struct Edge {
    int src, dest, weight;

    // Comparator function for sorting edges based on weight
    bool operator<(const Edge &other) const {
        return weight < other.weight;
    }
};

class Graph {
    int V; // Number of vertices
    vector<Edge> edges; // Vector to store edges

public:
    Graph(int vertices) : V(vertices) {}

    // Add an edge to the graph
    void addEdge(int src, int dest, int weight) {
        edges.push_back({src, dest, weight});
    }

    // Find the parent of a vertex in a disjoint set
    int findParent(vector<int> &parent, int i) {
        if (parent[i] == -1)
            return i;
        return findParent(parent, parent[i]);
    }

    // Perform union of two subsets
    void unionSets(vector<int> &parent, int x, int y) {
        int rootX = findParent(parent, x);
        int rootY = findParent(parent, y);
        parent[rootX] = rootY;
    }

    // Apply Kruskal's algorithm to find the minimum spanning tree
    void kruskalMST() {
        // Sort edges based on weight
        sort(edges.begin(), edges.end());

        vector<int> parent(V, -1); // To store parent of each vertex in the disjoint set

        cout << "Minimum Spanning Tree using Kruskal's Algorithm:" << endl;

        for (Edge edge : edges) {
            int srcParent = findParent(parent, edge.src);
            int destParent = findParent(parent, edge.dest);

            // If including this edge doesn't create a cycle, add it to the MST
            if (srcParent != destParent) {
                cout << edge.src << " - " << edge.dest << " : " << edge.weight << endl;
                unionSets(parent, srcParent, destParent);
            }
        }
    }
};

int main() {
    // Create a graph with 4 vertices
    Graph graph(4);

    // Add edges to the graph
    graph.addEdge(0, 1, 10);
    graph.addEdge(0, 2, 6);
    graph.addEdge(0, 3, 5);
    graph.addEdge(1, 3, 15);
    graph.addEdge(2, 3, 4);

    // Find the minimum spanning tree using Kruskal's algorithm
    graph.kruskalMST();

    return 0;
}
