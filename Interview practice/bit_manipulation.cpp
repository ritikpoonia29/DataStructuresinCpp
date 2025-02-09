#include<bits/stdc++.h>
using namespace std;

int getbit(int n, int i)
{
     if((n&(1<<i)) == 0)
     {
        return 0;
     }
     else
     return 1;
}

int setbit(int n, int i)
{
    return (n|(1<<i));
}

int clearbit(int n, int i)
{
    return (n&(~(1<<i)));
}

int updatebit(int n, int i)
{
    int x = (n&(~(1<<i)));
    return (x|(1<<i));
}

int main()
{
    int n, pos;
    cin>>n>>pos;

    // cout<<getbit(n, pos)<<endl;
    // cout<<setbit(n, pos)<<endl;
    // cout<<clearbit(n, pos)<<endl;
    cout<<updatebit(n, pos)<<endl;
}