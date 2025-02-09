#include<bits/stdc++.h>
using namespace std;

int main()
{
    int node, edges;

    cin>>node>>edges;

    vector<int> adj[node+1];

    for(int i=0;i<edges;i++)
    {
        int u, v,wt;

        cin>>u>>v>>wt;
        // Here we are storing ther details for the undirected graph.
        adj[u].push_back({v, wt});
        adj[v].push_back({u, wt});
        /*
        For directed graph we use the following method to store the details in adjacency list.
        adj[u].push_back(v);
        */
    }
    
    for(int i=0;i<n;i++)
    {
        for(auto it: adj[i])
        {
        
        }
    }

}