#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    vector<int> ch(n);
    vector<int> st(m);

    map<int, int>mp;

    for(int i=0;i<n;i++)
    {
        cin>>ch[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>st[i];
    }

    for(int i=0;i<n;i++)
    {
        mp[ch[i]]++;
    }
    for(int i=0;i<m;i++)
    {
        mp[st[i]]++;
    }

    vector<int> ans;

    for(auto it: mp)
    {
        if(it.second>1)
        {
            ans.push_back(it.first);
        }
    }

    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
}