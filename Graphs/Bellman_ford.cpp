#include<bits/stdc++.h>
using namespace std;

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

int main()
{
	int n, m;	// n: Vertices;	m: Edges
	cin>>n>>m;

	vector<node> edges;	// Create a vector of structure node.

	for(int i=0;i<m;i++)
	{
		int u, v, wt;
		cin>>u>>v>>wt;

		edges.push_back(node(u, v, wt));	// Push the u, v, wt in the edge using node.
	}

	int src;	// Source from where we want to find the distance to each node.
	cin>>src;
	int inf = 1e9;
	vector<int> dist(n, inf);	// Initially the distance to every node is Infinity
	dist[src] = 0;	// Distance of source node is 0.

	for(int i=0;i<n-1;i++)
	{	// Iterate on all the nodes n-1 time to relax every node n-1 times.
		for(auto it: edges)
		{	
			// If the distance to node v from u after adding the weight wt is less than infinity then update it in the distance vector.
			if(dist[it.u] + it.wt < dist[it.v])
			{
				dist[it.v] = dist[it.u] + it.wt;
			}
		}
	}

	bool fl = false;
	// Iterate once again to find whether there is any negative cycle in the graph.
	for(auto it: edges)
	{
		if(dist[it.u] + it.wt < dist[it.v])
		{
			fl = true;
			cout<<"Negative Cycle\n";
			break;
		}
	}

	// If there is no negative cycle the print the distance vector.
	if(!fl)
	{
		for(int i=0;i<n;i++)
		{
			if(dist[i] > 1e5)	// If the distance is inf or close to inf then print it as "inf".
			{
				cout<<i<<" "<<"inf"<<endl;
			}
			else
			cout<<i<<" "<<dist[i]<<endl;
		}
	}
}