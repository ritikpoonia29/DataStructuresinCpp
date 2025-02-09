#include<iostream>
using namespace std;

int main()
{
    int m,n,a;

    cout<<"Enter the value of m: "<<endl;
    cin>>m;

    cout<<"Enter the value of n: "<<endl;
    cin>>n;

    cout<<"Enter the no to check the divisibiltiy of: "<<endl;
    cin>>a;

    if(m<n)
    {
        for(int i=m;i<=n;i++)
        {
            if(i%a==0)
            {
                cout<<i<<endl;
            }
        }
    }
    else if(m>n)
    {
        for(int i=n;i<=m;i++)
        {
            if(i%a==0)
            {
                cout<<i<<endl;
            }
        }
    }
    
    
}