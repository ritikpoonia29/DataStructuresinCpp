#include<iostream>
using namespace std;

int hcf(int n, int m)
{
    while(m!=0)
    {
        int rem = n%m;
        n = m;
       m = rem;
    }

    return n;
}

int main()
{
    int n, m;
    cin>>n>>m;

    cout<<hcf(n,m)<<endl;
}