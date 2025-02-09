/*
Concept: DFS means Depth First Search. He we keep on visiting the adjacent node 
        adjacent nodes until we reach an end.
Dry Run: 
v: 5    e: 4

        0--------1
        |\
        | \
        |  \
        3   2-------4
DFS: 0 -> 1 -> 2 -> 4 -> 3
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> dfs;    // evctor to store the dfs of the graph.
    void dfs_support(int v, vector<int> &vis, vector<int> adj[])
    {
        dfs.push_back(v);   // store the node visited in the dfs.
        vis[v] = 1; // Mark the node visited as 1 in visited array.
        for(auto it: adj[v])
        {
            if(!vis[it])   
            {   // If the adjacent nodes are not visited then call the dfs support function recursively for the adjacent nodes. 
                dfs_support(it, vis, adj);
            }
        }
    }
    
    vector<int> dfs_graph(int V, vector<int> adj[]) 
    {
        
        vector<int> vis(V+1, 0);    // stores the details of the nodes visited.
        
        for(int i=0;i<V;i++)
        {
            if(!vis[i])
            {
                // if node is not visisted then call this function for i.
                dfs_support(i, vis, adj);   // support function for the dfs.
            }
        }
        return dfs;
    }
int main()
{
    int v, e;
    cin>>v>>e;

    vector<int> adj[v];

    for(int i=0;i<e;i++)
    {
        int a, b;
        cin>>a>>b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    vector<int> ans = dfs_graph(v, adj);

    for(auto it: ans)
    {
        cout<<it<<" ";
    }cout<<endl;
}