/*
Concept:
        Create two vectors: 1. Prefix       2.  Suffix
        Store the heights from left to right in the vector prefix in such a way that it satisfies the following condition:
                int m = INT_MIN;
                m = max(m, heights[i]);
        Store the heights from right to left in the vector suffix in such a way that it satisfies the following condition:
                int m' = INT_MIN;
                m' = max(m', heights[i]);
        Reverse the vector m'.

        create a vector common to store the minimum of prefix and suffix at every index.
        Iterate over the vectors prefix and suffix and store the values in such a way that it satisfies the following condition:
            int x = min(prefix[i], suffix[i]);
            common.push_back(x);

        create a variable res to store the result.
        Iterate over the vector common and increse the result in the undergiven way for every index.
            res+=(common[i] - heights[i]);

Dry Run:

    Heights: 3 1 2 4 0 1 3 2

    Prefix: 3 3 3 4 4 4 4 4
    Suffix  4 4 4 4 3 3 3 2

    Common: 3 3 3 4 3 3 3 2

    Res :   0 2 3 0 6 8 0 0

*/

#include<bits/stdc++.h>
using namespace std;

void trappingRainwater(vector<int> a)
{
    vector<int> pre;
    vector<int> suff;
    int res = 0;
    int x = INT_MIN;
    int y = INT_MIN;
    for(int i=0;i<a.size();i++)
    {
        x = max(x, a[i]);
        pre.push_back(x);
    }

    for(int i=a.size() - 1;i>=0;i--)
    {
        y = max(y, a[i]);
        suff.push_back(y);
    }

    reverse(suff.begin() , suff.end());
   
    cout<<endl;
    int z = INT_MAX;
    vector<int> common;
    for(int i=0;i<pre.size();i++)
    {
        z = min(pre[i], suff[i]);
        common.push_back(z);
    }


    for(int i=0;i<common.size();i++)
    {
        res+=(common[i] - a[i]);
    }

    cout<<res<<endl;


}
int main()
{
    vector<int> a;

    for(int i=0;i<7;i++)
    {
        int x;
        cin>>x;
        a.push_back(x);
    }

    trappingRainwater(a);
}