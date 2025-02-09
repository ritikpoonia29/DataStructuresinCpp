#include<bits/stdc++.h>
using namespace std;

int catalan(int n)
{
    if(n<=1)
    {
        return 1;
    }
    int res = 0;

    for(int i=0;i<=n-1;i++)
    {
        res+=catalan(i) * catalan(n-1-i);
    }

    return res;

}
int main()
{

    int n;
    cin>>n;

    for(int i=0;i<=n-1;i++)
    {
    cout<<catalan(i)<<endl;
    }

}