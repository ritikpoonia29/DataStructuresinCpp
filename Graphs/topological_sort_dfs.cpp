/*
Concept: We have to do the linear ordering of the vertices such that if there is a
        edge u-->v then u appears before v in the order.

Dry Run : 
6 6
2 3
3 1
4 0
4 1
5 0
5 2

Topological Sort: 5 4 2 3 1 0;
*/

#include<bits/stdc++.h>
using namespace std;

// This function finds the topological sort.
void findtoposort(int i, vector<int> &vis, stack<int> &st, vector<int> adj[])
{
    vis[i] = 1; // Mark the i'th node as visited

    for(auto it: adj[i])
    {// Check for the all the adjacent nodes of i'th node.
        if(!vis[it])
        {
            // If the adjacent nodes are not visited then run topological sort on the adjacent node.
            findtoposort(it, vis, st, adj);
        }
    }
    st.push(i); // Push the i'th node in the stack.
}
vector<int> toposort(int v, vector<int> adj[])
{
    vector<int> vis(v,0);   // Create a array to keep the record of visited nodes.
    stack<int> st;  // Create a stack to keep the elemnts in topologically sorted manner.

    vector<int> ans;    // Create a array ans to store the elements when popped from the stack.

    for(int i=0;i<v;i++)
    {   // Iterate in all the components of the graph.
        if(!vis[i])
        {   // If any component is not visited then apply topo sort on that component.
            findtoposort(i, vis, st, adj);
        }
    }

    while(!st.empty())
    {
        ans.push_back(st.top());
        st.pop();
    }

    return ans;
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
    }

    vector<int> res = toposort(v, adj);

    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }cout<<endl;
}