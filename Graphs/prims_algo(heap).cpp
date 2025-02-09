// Time Complexity: O(n+e)

#include<bits/stdc++.h>
using namespace std;

// Function the find the shortest path using prims algorithm
// Almost the code is same as Prims_algo(Brute) slight differences are there.
void prims(int v, int e, vector<pair<int, int>> adj[])
{
    int key[v];
    bool mst[v];
    int parent[v];

    for(int i = 0;i<v;i++)
    {
        key[i] = INT_MAX;
        mst[i] = false;
        parent[i] = -1;
    }

    key[0] = 0;
    parent[0] = 0;

    // Create a priority queue that will store the distance and the index.
    priority_queue<pair<int, int>, vector<pair<int ,int>>, greater<pair<int, int>>> pq;

    pq.push({0, 0});    // Push the distance and index of node 0 as {0, 0};

    for(int i=0;i<v-1;i++)
    {
        int u = pq.top().second;    // Store the min distance of the key arary in u.
        pq.pop();

        mst[u] = true;   // Mark the node u as visited.

        // Iterate over all the adjacent node of the node u.
        for(auto it: adj[u])
        {
            int v = it.first;   // Store the distance of the node in v/
            int weight = it.second; // Store teh weight of the node in variable weight

            // If the node is not visited then mark its parent as u and push its distance and node itself in the queue.
            // Store the weight in the key at index v.
            if(mst[v] == false && weight < key[v])
            {
                parent[v] = u;
                pq.push({key[v], v});
                key[v] = weight;
            }
        }
    }

    for(int i=0;i<v;i++)
    {
        cout<<parent[i]<<"->"<<i<<endl;
    }
}

int main()
{
    int v, e;
    cin>>v>>e;

    vector<pair<int, int>> adj[v+1];

    for(int i=0;i<v;i++)
    {
        int s, d, wt;
        cin>>s>>d>>wt;

        adj[s].push_back({d, wt});
        adj[d].push_back({s, wt});
    }

    prims(v, e, adj);
}