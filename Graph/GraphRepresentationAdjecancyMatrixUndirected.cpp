// adjecancy matrix representation for graph : undirected graph

#include <bits/stdc++.h>
using namespace std;
const int N = 1000;
int a[N][N]; 
int main()
{
    int v, e;
    cout<<"Enter count of vertices and edges: ";
    cin >> v >> e;
    cout<<"Enter vetex having edge between them: "<<endl;
    for (int i = 0; i < e; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        a[v1][v2] = 1;
        a[v2][v1] = 1; // For undirected graph
    }

    // Display the adjacency matrix
    cout << "\nAdjacency Matrix:\n";
    for (int i = 1; i <= v; i++)
    {
        for (int j = 1; j <= v; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
