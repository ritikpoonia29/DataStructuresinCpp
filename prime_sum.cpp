#include<bits/stdc++.h>
using namespace std;

bool prime(int a)
{
    for(int i=2;i<=a/2;i++)
    {
        if(a%i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n, m;
    cin>>n>>m;

    int sum = 0;
    for(int i=n;i<=m;i++)
    {
        if(prime(i) == true)
        {
            sum+=i;
        }
    }
    cout<<sum<<endl;
}