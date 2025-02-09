#include<bits./stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;

    vector<long long> v(n);
    vector<long long>v1(n-1);
    vector<long long> v2(n-2);

    for(long long i=0;i<n;i++)
    {
        cin>>v[i];
    }

    for(long long i=0;i<n-1;i++)
    {
        cin>>v1[i];
    }

    for(long long i=0;i<n-2;i++)
    {
        cin>>v2[i];
    }

    unordered_map<long long, long long> mp;
    unordered_map<long long, long long> mp2;

    for(long long i=0;i<n;i++)
    {
        mp[v[i]]++;
    }

    for(long long i=0;i<n-1;i++)
    {
        mp[v1[i]]++;
        mp2[v1[i]]++;
    }

    for(long long i=0;i<n-2;i++)
    {
        mp2[v2[i]]++;

    }

    for(auto it: mp)
    {
        if(it.second == 1)
        {
            cout<<it.first<<endl;;
        }
    }

    for(auto it: mp2)
    {
        if(it.second == 1)
        {
            cout<<it.first<<endl;
        }
    }
}