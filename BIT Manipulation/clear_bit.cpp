#include<iostream>
using namespace std;

int clearbit(int n, int pos)
{
    int mask = ~(1<<pos);
    return (n & mask);
}

int main()
{
    int n, pos;
    cin>>n>>pos;

    cout<<clearbit(n,pos)<<endl;
}