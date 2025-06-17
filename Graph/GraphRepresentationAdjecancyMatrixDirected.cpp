// Graph representation, adjecancy matrix weighted graph, Directed graph
#include <bits/stdc++.h>
using namespace std;
// Declare graph
const int N = 1000;
int graph[N][N];
int main()
{
    int v, e, i;
    cout << "Enter count of vertices and edges: ";
    cin >> v >> e;
    cout << "Enter vetex having edge between them and weigth:\n";
    for (i = 1; i <= e; i++)
    {
        int v1, v2, w;
        cin >> v1 >> v2 >> w;
        graph[v1][v2] = w;
    }
    // Display Graph
    cout<<"our graph is...\n";
    for (int x = 1; x <= v; x++)
    {
        for (int y = 1; y <= v; y++)
        {
            cout << graph[x][y] << " ";
        }
        cout << endl;
    }
    return 0;
}
