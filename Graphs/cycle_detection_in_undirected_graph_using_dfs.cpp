/*
Concpet: We have to find whether there is cycle present in the given undirected
        graph using DFS.

*/

#include<bits/stdc++.h>
using namespace std;

// Function to check for the cycle at any node.
bool checkcycle(int i, int parent, vector<int> &vis, vector<int> adj[])
{
    vis[i] = 1; // Mark the first node as visited.

    for(auto it: adj[i])
    {
        // Check for the adjacent node of the current node.
        if(!vis[it])
        {
            // If not visited check for the cycle.
            // recursively keep calling the checkcycle funnction for adjacent nodes of curr nodes.
        if(checkcycle(it, i, vis, adj))
        {
            // If cycle is there return true;
            return true;
        }
        }
        else if(it != parent)
        {
            // If curr node is not equal to the parent node then return true.
            return true;
        }
    }
    return false;
}

bool cycle(int v, vector<int> adj[])
{
    vector<int> vis(v+1, 0);    // Visited array.

    for(int i=0;i<v;i++)
    {
        if(!vis[i])
        {
            if(checkcycle(i, -1, vis, adj))
            {
                // Check for the cycle at every index and pass the parent as -1 initially.
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
        adj[b].push_back(a);
    }

    if(cycle(v, adj))
    {
        cout<<"Cycle is Present"<<endl;
    }
    else
    {
        cout<<"Cycle is not present"<<endl;
    }
}