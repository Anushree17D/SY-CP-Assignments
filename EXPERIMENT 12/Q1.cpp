#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int V, E;
    cout << "Enter number of vertices: ";
    cin >> V;

    cout << "Enter number of edges: ";
    cin >> E;

    vector<vector<int>> adj(V);

    cout << "Enter edges (u v):\n";
    for(int i = 0; i < E; i++)
    {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u); 
    }

    int totalDegree = 0;

    for(int i = 0; i < V; i++)
        totalDegree += adj[i].size();

    int totalEdges = totalDegree / 2;

    cout << "Total edges = " << totalEdges;

    return 0;
}
