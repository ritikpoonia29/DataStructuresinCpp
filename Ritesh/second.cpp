#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k;
    cin>>n>>k;

    if(n<k)
    {
        return -1;
    }
    vector<int> v;

    while(k!=0)
    {
        int dig = k%10;
        v.push_back(dig);
        k = k/10;
    }

   int f = v.size();
    vector<int> vp;
   while(n!=0)
   {
    int dig = n%10;
    vp.push_back(dig);
    n=n/10;
   }

   reverse(vp.begin(), vp.end());
   reverse(v.begin(), v.end());

   for(int i=0;i<n;i++)
   {
    
   }
}