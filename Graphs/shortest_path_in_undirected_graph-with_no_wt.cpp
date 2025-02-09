#include<bits/stdc++.h>
using namespace std;

void shortest_path(int v, vector<int> adj[])
{
    queue<int> q;
    int dist[v];

    for(int i=0;i<v;i++)
    {
        dist[i] = INT_MAX;
    }
    q.push(0);
    dist[0] = 0;

    while(!q.empty())
    {
        int node = q.front();
        q.pop();

        for(auto it: adj[node])
        {
            if(dist[node]+1 < dist[it])
            {
                dist[it] = dist[node]+1;
                q.push(it);
            }
        }
    }

    for(int i=0;i<v;i++)
    {
        cout<<dist[i]<<" ";
    }cout<<endl;
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
        adj[b].push_back(a);
    }

    shortest_path(v , adj);
}