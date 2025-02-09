/*
Concept: Find whether there is a cycle in the given undirected graph or not.
Dry Run:

    0----1----2----3
         |         |
         |         |
         |         |
         6----5----4----7
*/
#include<bits/stdc++.h>
using namespace std;

// This function checks for the cycle in the graph.
bool checkcycle(int i, int v, vector<int> &vis, vector<int> adj[])
{
    queue<pair<int, int>> q; //Create the queue which stores the current node and the previous node.
    vis[i] = true; //Mark the first node as visited.
    q.push({i, -1}); //Push the first node in current and the mark the other node as -1.

    while(!q.empty())
    {
        // Iterate until the queue becomes empty.
        int curr =  q.front().first; // Store the first value of the front of the queue as current.
        int prev = q.front().second; // STore the second value of the front of the queue as previous.
        q.pop();    // Pop that element.

        for(auto it: adj[curr])
        {
            // Iterate on the adjacent nodes of the current node in adjacency matrix.
            if(!vis[it])
            {
                vis[it] = true;
                q.push({it, curr});
            }
            else if(prev!=it)
            {
                // If the prev node is not visited then there is no cycle else
                // there is a cycle present.
                return true;
            }
        }
    }
    return false;
}
bool cycle(int v, vector<int> adj[])
{
    vector<int> vis(v+1, 0);    

    for(int i=0;i<v;i++)
    {
        if(!vis[i])
        {
            // If the node is not visited then check for the cycle at that node.
            if(checkcycle(i, v, vis, adj))
            return true;
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
        cout<<"Cycle Present\n";
    }
    else
    {
        cout<<"Cycle not present\n";
    }
}