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

bool check_bipartite(int i, vector<int> adj[], int color[])
{
    //  If teh first node is not coloured color it with color 1
    if (color[i] == -1)
    {
        color[i] = 1;
    }
    //  Iterate on all the adjacent nodes of i.
    for (auto it : adj[i])
    {
        if (color[it] == -1)
        { // If the adjacent node is not colored then color it with opposire color.
            color[it] = 1 - color[i];
            if (!check_bipartite(it, adj, color))
            { // If it is not possible to color the adjacent node then return false.
                return false;
            }
        }
        else if (color[it] == color[i])
        {
            //  If the color of the adjacent nodes is same then return false.
            return false;
        }
    }
    return true;
}
bool bipartite(vector<int> adj[], int v)
{
    int color[v];
    memset(color, -1, sizeof color); // Initially set the color of all the nodes as -1.

    for (int i = 0; i < v; i++)
    {
        if (color[i] == -1)
        {
            //  If the component of graph is not colored color then check is it bipartite graph or not.
            if (!check_bipartite(i, adj, color))
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

    if (bipartite(adj, v))
    {
        cout << "Bipartite Graph\n";
    }
    else
    {
        cout << "Not a Bipartite Graph\n";
    }
}