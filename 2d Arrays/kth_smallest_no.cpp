#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, k;
    cin>>n>>m>>k;

    vector<vector<int>> v(n, vector<int> (m));

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>v[i][j];
        }
    }

    vector<int> temp;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            temp.push_back(v[i][j]);
        }
    }

    sort(temp.begin(), temp.end());

    cout<<temp[k-1]<<endl;
}