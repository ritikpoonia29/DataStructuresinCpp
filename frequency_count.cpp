#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int> v(n);

    unordered_map<int, int> mp;

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }


    for(int i=0;i<n;i++)
    {
        mp[v[i]]++;
    }

    for(auto it: mp)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
}