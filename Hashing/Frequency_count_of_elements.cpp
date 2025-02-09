/*
Concept: We haven to find the the frequency of every element in the array.
Approach: Create a map and store the value and its frequency in it.
Dry Run: Arr: 2 2 2 1 5 3 2 3 5 1
Map: <>
After all the iterations;
map: 
<1 2
2 4
3 2
5 2>
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int> v;

    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    map<int, int> mp;

    for(int i=0;i<n;i++)
    {
        mp[v[i]]++;
    }

    for(auto i: mp)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
}