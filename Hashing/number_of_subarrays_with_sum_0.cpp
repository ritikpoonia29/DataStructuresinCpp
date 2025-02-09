/*
Concept: We have to find the number of subarrays whose sum is zero.
Approach: Make a variable names prefix sum and store the sum of the previous elements at every index in it.
          Create a map which contains the sum and its count(how many times it has repeated), now if same sum is found at two indices then
          in the map its count increses by 1.
        Case 1: If at any time we find that the sum is equal at two points 
                then there exist a subarray whose sum is zero.
                To identify that we will having any value of count greater than 1 in our map.
                If it is there then we can find the number of subarrays by performing the following operation:
                answer = m(m-1)/2;
        Case 2: If at any time the sum of zero then the subarray from index 0->i is the subarray with sum 0;
Dry Run:  arr: 1 3 -3 -1 5 6
It 1:
prefixsum = 1
map:<1,1>
ans = 0;
It2: 
prefixsum = 4
map: <1,1
      4,1>
      ans = 0
It 3:
prefixsum = 1
map : <1,2
       4,1>
       ans = 1
It4: 
prefixsum = 0
map : <0,1
       1,2
       4,1>
       ans = 2
it 5:
prefixsum = 5
map : <0,1
       1,2
       4,1
       5,1>
       ans = 2
it 6:
prefixsum = 11
map: <0,1
       1,2
       4,1
       5,1
       11,1>
       ans = 2;

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int> v(n);

    for(int i = 0;i<n;i++)
    {
        cin>>v[i];
    }

    map<int, int> mp;

    int prefixsum = 0;

    for(int i=0;i<n;i++)
    {
        prefixsum+=v[i];
        mp[prefixsum]++;
    }
    int ans = 0;

    map<int, int> :: iterator it;
    for(it = mp.begin();it!=mp.end();it++)
    {
        int c = it->second;
        ans += (c*(c-1))/2;

        if(it->first == 0)
        {
            ans+=it->second;
        }
    }

    cout<<ans<<endl;
}