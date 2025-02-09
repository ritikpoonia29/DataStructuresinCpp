#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<string> v(n);

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    unordered_map<string, int> mp;

    for(int i=0;i<n;i++)
    {
        if(mp[v[i]] == 0)
        {
            cout<<v[i]<<endl;
        }
        else
        {
            cout<<v[i]<<mp[v[i]]<<endl;
        }

        mp[v[i]]++;
    }
}