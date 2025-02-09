/*
COncept: We have the maximum number of consecutive 1s after converting k zeroes as 1s in the array.

Pseudo Code: 

    Initiate i, ans, zero_count  = 0;
    iterate from j = 0 to j = arr.size() - 1;
    if(arr[j] == 0)
    {
        zero_count++;
    }
    while(zero_count > k)
    {
        if(arr[i] == 0)
        {
            zero count--;
        }
        i++
    }
    ans = max(ans, i-j+1);
    return ans;

    Dry Run:
    array : 1 1 1 0 1 1 1 0 1 1 0
    k = 2;

    if we convert zero at i = 3 and i  = 7
    the ans = 10;
    
*/

#include<bits/stdc++.h>
using namespace std;

void maxConsecutive(vector<int> a, int k)
{
    int zerocount = 0;
    int ans = 0;
    int i = 0;
    for(int j=0;j<a.size();j++)
    {
        if(a[j] == 0)
        {
            zerocount++;
        }
            while(zerocount>k)
            {
                if(a[i] == 0)
                zerocount--;

                i++;
            }
        ans = max(ans, j-i+1);
    }

    cout<<ans<<endl;
}
int main()
{
    vector<int> a;
    int n, k;
    cin>>n>>k;
    
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a.push_back(x);
    }

    maxConsecutive(a, k);
}