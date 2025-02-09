/*
Concept: We have to find the top k most frequent elements of the array.
Approach: Create an unordered map and store the value and its frequency in it. Create a min heap and push the values of the map in it
          in such a way the pq.top.first = mp.second.
          If size of the heap is greater than k then pop from the heap.
          Until the heap gets empty push the value at the second in the vector answer and return it.

Dry Run : Arr: 1 1 1 2 2 3
        Map: <1 3, 2 2, 3 1>
        Heap = <3 1, 2 2>
        Ans = <1, 2>
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> mostfreq(vector<int> &v, int &n, int k)
{
    unordered_map<int, int> mp;

    for(int i = 0;i<v.size();i++)
    {
        mp[v[i]]++;
    }

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    for(auto i: mp)
    {
        pq.push({i.second, i.first});
        if(pq.size() > k)
        {
            pq.pop();
        }
    }

    vector<int> ans;

    while(!pq.empty())
    {
        pair<int, int> temp = pq.top();
        ans.push_back(temp.second);
        pq.pop();
    }

    return ans;
}
int main()
{
    int n, k;
    cin>>n>>k;

    vector<int> v(n);

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

   vector<int> res = mostfreq(v, n, k);

   for(auto i: res)
   {
    cout<<i<<" ";
   }cout<<endl;
}