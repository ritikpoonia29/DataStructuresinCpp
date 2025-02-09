#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int i = 1;
    while (t--)
    {
        long long int a, b, c;
        cin>>a>>b>>c;

        if(a > c && b > c)
        {
            cout<<"Case #"<<i<<": "<<0<<endl;
        }
        else if((a==1 && b==1) || (b==1 && a!=1))
        {
            cout<<"Case #"<<i<<": "<<2*c - 1<<endl;
        }
        else if(a==1 && b!=1)
        {
            cout<<"Case #"<<i<<": "<<c<<endl;
        }
        else
        {
            cout<<"Case #"<<i<<": "<<b<<endl;
        }
        i++;
    }
}