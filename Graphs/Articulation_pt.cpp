#include<bits/stdc++.h>
using namespace std;
// Articulation Point is that node of the graph which if removed then it divides the graph into two
// different components.
// Function to iterate over the graph using DFS and to find the Articulaation Points.
void dfs(int node, int parent, vector<int> &vis, vector<int> &low, vector<int> &time, vector<int> &articulation, int timer, vector<int> adj[])
{
    vis[node] = 1;  // Mark the first node as visited.
    time[node] = low[node] = timer++;   // Mark the insertion time and low time of every node same and increase the time by 1 while moving to the next node.
    int child = 0;  // Number of childrens in the graph is 0 initially.

    // Iterate over all the adjacent nodes of the current node.
    for(auto it: adj[node])
    {
        // If the currentr adjacent node is a parent then don't do anything.
        if(it == parent)
        {
            continue;
        }

        // If the current adjacent node is not visited then call dfs on it.
        if(!vis[it])
        {
            dfs(it, node, vis, low, time, articulation, timer, adj);
            low[node] = min(low[node], low[it]);    // The low time of a node is the minimum of the low time of itself and the low time of the adjacent node.

            // If the low time of the adjacent node is greater than or equal to the insertion time of current node and its is not a parent then it is an Articulation Point.
            if(low[it] >= time[node] && parent != -1)
            {
                articulation[node] = 1;
            }
            child++;    // Increase the number of chils by 1 if the node is not an articulation point.
        }
        
        // If the node is visited then just update its low which is the minimum of the low of itself and the insertion time of the adjacent node.
        else
        {
            low[node] = min(low[node], time[it]);
        }
    }

    // If the node is parent and it has more than 1 child then it is an articulation point.
    if(parent == -1 && child > 1)
    {
        articulation[node] = 1;
    }
}
int main()
{
    int n, m;   // n: Vertices; m: Edges.
    cin>>n>>m;

    vector<int> adj[n+1];

    for(int i=0;i<m;i++)
    {
        int a, b;
        cin>>a>>b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    vector<int> low(n, -1);     // Stores the low time of every node.
    vector<int> time(n, -1);    // Stores the insertion time of every node.
    vector<int> vis(n, 0);  // Stores the details of the visited nodes.
    vector<int> articulation(n, -1);    // Stores the info whether a node is an articulation point or not.
    int timer = 0;

    for(int i=0;i<n;i++)
    {
        // If a component of a graph is not visited then call dfs oni it.
        if(!vis[i])
        {
            dfs(i, -1, vis, low, time, articulation, timer, adj);
        }
    }

    for(int i=0;i<n;i++)
    {
    if(articulation[i] == 1)
    {
        cout<<i<<endl;
    }
    }
}