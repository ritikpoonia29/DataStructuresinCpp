#include <bits/stdc++.h>
using namespace std;

// Function to find the `
int dijkstra(int v, int e, int src, int dest, vector<pair<int, int>> adj[])
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    vector<int> distto(v + 1, 1e9);
    distto[src] = 0;
    pq.push(make_pair(0, src));

    while (!pq.empty())
    {
        int dist = pq.top().first;
        int prev = pq.top().second;
        pq.pop();

        vector<pair<int, int>>::iterator it;
        for (it = adj[prev].begin(); it != adj[prev].end(); it++)
        {
            int next = it->first;
            int nextDist = it->second;

            if (distto[next] > (distto[prev] + nextDist))
            {
                distto[next] = distto[prev] + nextDist;
                pq.push(make_pair(distto[next], next));
            }
        }
    }

    return distto[dest];
}
int main()
{
    int v, e;
    cin >> v >> e;

    vector<pair<int, int>> adj[v + 1];
    int src, dest;
    cin >> src >> dest;

    for (int i = 0; i < e; i++)
    {
        int a, b, wt;
        cin >> a >> b >> wt;

        adj[a].push_back(make_pair(b, wt));
        adj[b].push_back(make_pair(a, wt));
    }

    cout << dijkstra(v, e, src, dest, adj) << endl;
}