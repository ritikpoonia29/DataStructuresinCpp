#include<bits/stdc++.h>
using namespace std;

// Declare a structure node to store the edges adn weight of the edges all together.
struct node{
    int u;
    int v;
    int wt;

    node(int first, int second, int weight)
    {
        u = first;
        v = second;
        wt = weight;
    }
};

// Comparator to sort the edges on the basis of their weight.
bool comparator(node a, node b)
{
    return a.wt<b.wt;
}

// This function helps in finding the parent of the node.
int findpar(int u, vector<int> &parent)
{
    if(u == parent[u])
    {
        return u;
    }
    return parent[u] = findpar(parent[u], parent);
}

// This funciton unites the ndoe with the graph
void unionn(int u, int v, vector<int> &parent, vector<int> &rank)
{
    u = findpar(u, parent);
    v = findpar(v, parent);

    // After finding the parents of u and v just check the rank of their parents. If the rank of u is less
    // than the rank of v then v is the parent of u else vice versa.
    if(rank[u] < rank[v])
    {
        parent[u] = v;
    }
    else if(rank[v] < rank[u])
    {
        parent[v] = u;
    }
    // Else if the ranks are equal of u and v then anyone can be the parent of anyone just increase the
    // rank of the parent by 1.
    else
    {
        parent[v] = u;
        rank[u]++;
    }
}
int main()
{
    int n, m;   // vertices and edges.
    cin>>n>>m;

    vector<node> edges; 

    for(int i=0;i<m;i++)
    {
        int u, v, wt;
        cin>>u>>v>>wt;
        edges.push_back(node(u, v, wt));    // Push the src, dest and wt of the edge in the node.
    }

    sort(edges.begin(), edges.end(), comparator);   // Sort the edges on the basis of their weight.

    vector<int> parent(n);  // Declare a vector parent.

    // Initially every node is parent of itself.
    for(int i=0;i<n;i++)
    {
        parent[i] = i;
    }

    // Declare a rank vector and initially the rank of each node is zero.
    vector<int> rank(n, 0);
    int cost = 0;   // This variable stores the cost of the MST.
    
    vector<pair<int, int>> mst; // This vector stores the edges in the Minimum Spanning Tree.

    for(auto it: edges)
    {
        if(findpar(it.v, parent) != findpar(it.u, parent))
        {
            cost+=it.wt;    // If both the nodes have different parents then add the weight of that node in the cost.
            mst.push_back({it.u, it.v});    // Push the edge in the mst.
            unionn(it.u, it.v, parent, rank);   // UNit the node with the MST.
        }
    }

    cout<<cost<<endl;
    cout<<endl;

    for(auto it: mst)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
}