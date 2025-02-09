/*
Concept: The graph in which we can color all the vertices with only 2 colors such
         that no adjacent vertices have the same color is called a Bipartite Graph.

Dry Run: 0---1---2---3---4---6
            |            |
            |            |
            |            |
            7------------5
        It is a Bipartite Graph

        0---1---2---3
            |       |
            |       |
            |       |
            7-------4---5---6
        It is not a Bipartite Graph.
*/

#include <bits/stdc++.h>
using namespace std;

// This function checks whether the given componenet of a graph is Bipartites or not.
bool checkbipartite(int i, vector<int> adj[], int n, int color[])
{
    queue<int> q;
    q.push(i);
    color[i] = 1; // Color the first node with color 1.

    while (!q.empty())
    {
        int node = q.front();
        q.pop();

        for (auto it : adj[node])
        { // Check all the adjacent nodes of the node colored last.
            if (color[it] == -1)
            { // If the node is not colored yet color it with opposite color of the
                // previous node.
                color[it] = 1 - color[node];
                q.push(it);
            }

            else if (color[it] == color[node])
            {
                // If the color of previously colored node and its adjacent node
                // is same then return false.
                return false;
            }
        }
    }
    return true;
}
bool bipartite(int n, vector<int> adj[])
{
    int color[n];
    memset(color, -1, sizeof color); // Set the whole color array with -1 stating that initially all the nodes are uncoloured.
    for (int i = 0; i < n; i++)
    {
        if (color[i] == -1)
        {
            // If the node is uncoloured then check can we color it with the appropriate colour or not.
            if (!checkbipartite(i, adj, n, color))
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int v, e;
    cin >> v >> e;

    vector<int> adj[v];

    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    if (bipartite(v, adj))
    {
        cout << "Bipartite Graph\n";
    }
    else
    {
        cout << "Not a Bipartite Graph\n";
    }
}