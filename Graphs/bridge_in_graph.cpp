#include<bits/stdc++.h>
using namespace std;

void dfs(int node, int parent, vector<int> &vis, vector<int> &time, vector<int> &low, vector<int> adj[], int &timer)
{
    vis[node] = 1;
    time[node] = low[node] = timer++;

    for(auto it: adj[node])
    {
        if(it == parent)
        {
            continue;
        }

        if(!vis[it])
        {
            dfs(it, node, vis, time ,low, adj, timer);

            low[node] = min(low[node], low[it]);

            if(low[it] > time[node])
            {
                cout<<node<<" "<<it<<endl;
            }
        }
        else{
            low[node] = min(low[node], time[it]);
        }
    }
}

int main()
{
    int n, m;
    cin>>n>>m;

    vector<int> adj[n];

    for(int i=0;i<m;i++)
    {
        int a, b;
        cin>>a>>b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    vector<int> time(n, -1);
    vector<int> low(n, -1);
    vector<int> vis(n, 0);
    int timer = 0;
    for(int i=0;i<n;i++)
    {
        if(!vis[i])
        dfs(i, -1, vis, time, low, adj, timer);
    }
}