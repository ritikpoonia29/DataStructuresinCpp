/*
Concept: We have to find whether there is any cycle present in the given directed graph.
Dry Run: 
    1--->2-->3-->4
         ^   |   |
         |   |   |
         |   v   v
         7   6-->5
        | ^
        |  \
        v   \
        8--->9

        There is a cycle in this graph 7-->8-->9-->7
*/

#include<bits/stdc++.h>
using namespace std;

//  This function checks for the cycle in the graph.
bool check_cycle(int i, vector<int> adj[], int vis[], int dfs_vis[])
{
    vis[i] = 1; //  Mark the initial node as visited.
    dfs_vis[i] = 1; //  Mark the initial node as visited in dfs visited array.

    for(auto it: adj[i])
    {
        // Iterate over all the adjacent nodes.
        if(!vis[it])
        {   // If the node is not visited check for the cycle at the adjacent node.
            if(check_cycle(it, adj, vis, dfs_vis))
            {
                // If cycle is there return true.
                return true;
            }
        }
        else if(dfs_vis[it])
        {
            // It the node is not visited but it is visited in the dfs visited array return true.
            return true;
        }
    }

    dfs_vis[i] = 0; // If there is no path to go ahead and there is no cycle then mark the initial component of the graph as univisited.
    return false;   // Since there is no cycle in the graph return false.
}

bool cycle(int v, vector<int> adj[])
{
    int vis[v]; // Array for the visited nodes.
    int dfs_vis[v]; //  Array to store the all the nodes visited in current loop.
    memset(vis, 0, sizeof vis); // All the nodes of the visited array are unvisited.
    memset(dfs_vis, 0, sizeof dfs_vis); // All the nodes of the dfs visited array are unvisited.

    for(int i=0;i<v;i++)
    {
        // Check for all the components of the graph for cycle.
        if(!vis[i])
        {
            // Check for cycle in all the components of the graph.
            if(check_cycle(i, adj, vis, dfs_vis))
            {
                return true;
            }
        }
    }
    return false;
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
    }

    if(cycle(v,adj))
    {
        cout<<"Cycle is present\n";
    }
    else
    {
        cout<<"Cycle is not present\n";
    }
}