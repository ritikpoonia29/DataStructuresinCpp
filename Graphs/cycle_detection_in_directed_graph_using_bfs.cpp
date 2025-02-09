#include<bits/stdc++.h>
using namespace std;

bool cycle(int v, vector<int> adj[])
{
    queue<int> q;
    vector<int> indegree(v, 0);

    for(int i=0;i<v;i++)
    {
        for(auto it: adj[i])
        indegree[it]++;
    }

    for(int i=0;i<v;i++)
    {
        if(indegree[i] == 0)
        {
            q.push(i);
        }
    }
    int count = 0;
    while(!q.empty())
    {
        int node = q.front();
        q.pop();
        count++;

        for(auto it: adj[node])
        {
            indegree[it]--;
            if(indegree[it] == 0)
            {
                q.push(it);
            }
        }
    }

    if(count == v)
    {   
        return false;
    }
    return true;
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

    if(cycle(v, adj))
    {
        cout<<"Cycle is present\n"; 
    }
    else
    {
        cout<<"Cycle is not present\n";
    }
}