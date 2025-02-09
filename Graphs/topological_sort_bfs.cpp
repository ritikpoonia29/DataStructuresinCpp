#include<bits/stdc++.h>
using namespace std;

vector<int> toposort(int v, vector<int> adj[])
{
    queue<int> q;
    vector<int> indegree(v, 0);
    vector<int> ans;

    for(int i=0;i<v;i++)
    {
        for(auto it: adj[i])
        {
            indegree[it]++;
        }
    }

    for(int i=0;i<v;i++)
    {
        if(indegree[i] == 0)
        {
            q.push(i);
        }
    }

    while(!q.empty())
    {
        int node = q.front();
        q.pop();
        ans.push_back(node);
        for(auto it: adj[node])
        {
            indegree[it]--;
            if(indegree[it] == 0)
            {
                q.push(it);
            }
        }
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

    for(auto it: res)
    {
        cout<<it<<" ";
    }cout<<endl;
}