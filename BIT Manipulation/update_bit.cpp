#include<bits/stdc++.h>
using namespace std;

int updatebit(int n, int pos, int value)
{
    int mask;
    mask = ~(1<<pos);
    n = n&mask;

    return((n | (value<<pos)));
}

int main()
{
    int n, pos, value;
    cin>>n>>pos>>value;

    cout<<updatebit(n, pos, value)<<endl;
}