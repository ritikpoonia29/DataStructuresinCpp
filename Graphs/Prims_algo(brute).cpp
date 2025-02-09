// Time Complexity : Greater than O(n2)

#include <bits/stdc++.h>
using namespace std;

// Function to find the mst using the prims algorithm.
void prims(int v, int e, vector<pair<int, int>> adj[])
{
    int key[v]; // Stores the min distance required to reach every node.
    bool mst[v];    // Stores the details whether the node is viisted or not.
    int parent[v];  // Stores the details of the parent node of the current node.

    /* Initially mark all the nodes in
        i. Array Key as INFINITY
        ii. Array mst as false
        iii. Array parent as 0  */
    for (int i = 0; i < v; i++)
    {
        key[i] = INT_MAX;
        mst[i] = false;
        parent[i] = -1;
    }

    key[0] = 0; // Mark the distance of first node as 0.
    parent[0] = 0;  // Store the parent of the first nodea as 0.
    for (int i = 0; i < v-1; i++)
    {
        int mini = INT_MAX;
        int u;

        for (int j = 0; j < v; j++)
        {
            // If the j'th node is not visited and its distance is less than the previous node the store its distance in mini and its index in u.
            if (mst[j] == false && key[j] < mini)
            {
                mini = key[j];
                u = j;
            }
        }

        mst[u] = true;  // Mark the u'th node as visited.
        // Iterate on all the nodes which are adjacent to the u'th node.
        for (auto it : adj[u])
        {
            int j = it.first;   
            int weight = it.second;
            // If the adjacent node is not visited then store u as its parent and its weight in the variable weight
            if (mst[j] == false && weight < key[j])
            {
                parent[j] = u;
                key[j] = weight;
            }
        }
    }

    for(int i=0;i<v;i++)
    {
        cout<<parent[i]<<"->"<<i<<"\n";
    }
}
int main()
{
    int v, e;
    cin >> v >> e;

    vector<pair<int, int>> adj[v + 1];

    for (int i = 0; i < e; i++)
    {
        int a, b, wt;
        cin >> a >> b >> wt;
        adj[a].push_back({b, wt});
        adj[b].push_back({a, wt});
    }

    prims(v, e, adj);
}