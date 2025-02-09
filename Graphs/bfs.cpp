/*
Concept: BFS is Breadth First Search where we first traverse all the adjacent 
              nodes of the current node and then move to the next.
Dry Run:
v: 5   e: 4

        0--------1
        |\
        | \
        |  \
        3   2-------4
BFS: 0 -> 1 -> 2 -> 3 -> 4
*/
#include<bits/stdc++.h>
using namespace std;

vector<int> bfs_graph(int v, vector<int> adj[])
{
    vector<int> bfs;    // Stores the bfs of the graph.
    vector<int> vis(v+1, 0);    // stores the detail of the node whether it is visited or not.
    queue<int> q;   // stores the nodes and its adjacent nodes
    q.push(0);
    vis[0] = 1;

    while(!q.empty())
    {
        int temp = q.front();
        q.pop();
        bfs.push_back(temp);

        // Now we will traverse to the adjacent nodes of the node last visited.
        for(auto it: adj[temp])
        {
            if(!vis[it])
            {
                q.push(it);
                vis[it] = 1;    // mark the visited node as 1 in visited array.
            }
        }

    }
    return bfs;
}
int main()
{
    int v, e;
    cin>>v>>e;

    vector<int> adj[v]; // Adjacency List

    for(int i=0;i<e;i++)
    {
        int a, b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);

    }

    vector<int> ans = bfs_graph(v, adj);

    for(auto it: ans)
    {
        cout<<it<<" ";
    }cout<<endl;
}