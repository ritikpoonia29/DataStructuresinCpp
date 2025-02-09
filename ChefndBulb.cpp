#include<iostream>
using namespace std;

int chef(long long int gas, long long int res, long long int mod)
{
    long long int n =0, d=0, r=0;

    n = res%mod;
    n--;

    d = ((gas-1)/mod)*mod;
    d = gas - 1 - d;

    if(n>d)
    {
        r = r + ((gas-1)/mod+1) + (n-d) * ((gas-1)/mod);
    }
    else
    {
        r = r + ((gas-1)/mod + 1) * (n+1); 
    }

    for(int i=n+1; i<gas; i = i + mod)
    {
        r++;
        if(i==res)
        {
            return r;

        }
    }
    return 0;
}
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long int gas, res, mod;

        cin>>gas>>res>>mod;

        cout<<chef(gas, res, mod) << endl;
    }
}