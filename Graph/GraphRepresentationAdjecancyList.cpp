#include <bits/stdc++.h>
using namespace std;

const int N = 1000;
vector<pair<int, int>> graph[N]; // Adjacency list: node -> [(neighbor, weight)]

int main()
{
    int v, e;
    cout << "Enter count of vertices and edges: ";
    cin >> v >> e;

    cout << "Enter " << e << " edges in format: v1 v2 weight\n";
    for (int i = 0; i < e; i++)
    {
        int v1, v2, w;
        cin >> v1 >> v2 >> w;
        graph[v1].push_back({v2, w});
        graph[v2].push_back({v1, w}); // For undirected graph
    }

    // Display the graph
    cout << "\nAdjacency List Representation:\n";
    for (int i = 1; i <= v; i++) // Assuming 1-based vertex indexing
    {
        cout<< i << " -> ";
        for (auto edge : graph[i])
        {
            cout << "(" << edge.first << ", weight: " << edge.second << ") ";
        }
        cout << endl;
    }

    return 0;
}
