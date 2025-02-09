#include<bits/stdc++.h>
using namespace std;

bool poweroftwo(int n)
{
    if((n&(n-1)) == 0)
    {
        return true;
    }
    else
    return false;
}
int main()
{
    int n;
    cin>>n;

    if(poweroftwo(n))
    {
        cout<<"YES\n";
    }
    else
    cout<<"NO\n";
}