/*
Concept: We have to find the shortest path to the destination node from the source 
		 node in the given Acyclic Directed Graph.

Dry Run: 
6 7
0 6
0 1 2
0 4 1
1 2 3
2 3 6
4 2 2
4 5 4
5 3 1

Dist Array: 0 2 3 6 1 5
*/

#include <bits/stdc++.h>
using namespace std;

// Function to find the toposort.
void findtoposort(int i, vector<int> vis, vector<pair<int, int>> adj[], stack<int> &st)
{
	vis[i] = 1;

	for (auto it : adj[i])
	{
		if (!vis[it.first])
		{
			findtoposort(it.first, vis, adj, st);
		}
	}
	st.push(i);
}

void shortest_path(int src, int dest, int v, vector<pair<int, int>> adj[])
{
	vector<int> vis(v, 0);
	stack<int> st;

	for (int i = 0; i < v; i++)
	{
		if (!vis[i])
		{
			findtoposort(i, vis, adj, st);
		}
	}
	// Create an array to store the distance of every node form the dource node.

	int dis[v];

	for(int i=0;i<v;i++)
	{
		dis[i] = 1e9;	// Initially the distance of every node from the source node is 
	}
	dis[src] = 0;	// Mark the distance source node as 0.

	while (!st.empty())
	{
		int node = st.top();
		st.pop();

		if (dis[node] != 1e9)
		{
			// If the dist of the node from the source node is INF then move ahead to its adjacent nodes.
			for (auto it : adj[node])
			{
				if (dis[node] + it.second < dis[it.first])
				{
					dis[it.first] = dis[node] + it.second;
				}
			}
		}
	}

	for (int i = src; i < dest; i++)
	{
		if (dis[i] == 1e9)
		{
			cout << "INF" << " ";
		}
		else
		{
			cout << dis[i] << " ";
		}
	}
	cout << endl;
}

int main()
{
	int v, e;
	cin >> v >> e;

	int src, dest;
	cin >> src >> dest;

	vector<pair<int, int>> adj[v];

	for (int i = 0; i < e; i++)
	{
		int a, b, wt;
		cin >> a >> b >> wt;

		adj[a].push_back({b, wt});
	}

	shortest_path(src, dest, v, adj);
}