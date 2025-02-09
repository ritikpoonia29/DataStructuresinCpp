#include<bits/stdc++.h>
using namespace std;

// This function finds the DFS of the graph and in the stack we push the node which has no further DFS.
void dfs(int node, stack<int> &st, vector<int> &vis, vector<int> adj[])
{
    vis[node] = 1;

    for(auto it: adj[node])
    {
        if(!vis[it])
        {
            dfs(it, st, vis, adj);
        }
    }
    // After the DFS push the node.
    st.push(node);
}

// This function finds the DFS of the transposed graph and prints the nodes according to their finish time pushed in the stack.
void rev_dfs(int node, vector<int> &vis, vector<int> transpose[])
{
    cout<<node<<" ";

    vis[node] = 1;

    for(auto it: transpose[node])
    {
        if(!vis[it])
        {
            rev_dfs(it, vis, transpose);
        }
    }
}

int main()
{
    int n, m;   // n: No of vertices;   m: No of edges.
    cin>>n>>m;

    vector<int> adj[n+1];

    for(int i=0;i<m;i++)
    {
        int a, b;
        cin>>a>>b;

        adj[a].push_back(b);
    }

    stack<int> st;  // Stack to keep the nodes according to their finish time.
    vector<int> vis(n, 0);  // Vector to keep the details of the visited nodes.

    for(int i=0;i<n;i++)
    {
        if(!vis[i])
        {
            dfs(i, st, vis, adj);
        }
    }

    vector<int> transpose[n];   // Vector to store the nodes in the transposed manner.

    for(int i=0;i<n;i++)
    {
        vis[i] = 0;
        for(auto it: adj[i])
        {
            adj[it].push_back(i);
        }
    }

    while(!st.empty())
    {   // Until the stack gets empty store the top of the stack in the node and pop it.
        int node = st.top();
        st.pop();
        // If the node is not visited call DFS on tha node.
        if(!vis[node])
        {
            cout<<"SCC: ";
            rev_dfs(node, vis, transpose);
            cout<<endl;
        }
    }
}