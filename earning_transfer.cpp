#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	int m;
	cin>>m;

	vector<int> parent(n);
	vector<int> earning(m);


	for(int i=0;i<n;i++)
	{
		cin>>parent[i];
	}

	for(int i=0;i<m;i++)
	{
		cin>>earning[i];
	}

	vector<bool> sal_rcvd(n, false);
	vector<int> ans;
	for(int i=0;i<m;i++)
	{
		if(earning[i] == 0)
		{
			ans.push_back(0);
			sal_rcvd[0] = true;
		}
		else
		{
			if(!sal_rcvd[parent[earning[i]]])
			{
				sal_rcvd[parent[earning[i]]] = true;
				ans.push_back(parent[earning[i]]);
			}
			else
			{
				ans.push_back(earning[i]);
			}
		}
	}

	for(auto it: ans)
	{
		cout<<it<<" ";
	}cout<<endl;
}