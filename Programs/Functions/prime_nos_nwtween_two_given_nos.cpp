#include<iostream>
#include<math.h>
using namespace std;


bool isprime(int n)
{
    for(int i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int a,b;

    cout<<"Enter the first no: ";
    cin>>a;
    cout<<"Enter the second no: ";
    cin>>b;

    cout<<"Prime nos between the given two nos are: "<<endl;
    for(int i=a;i<=b;i++)
    {
        if(isprime(i))
        {
            cout<<i<<endl;
        }
    }

    return 0;
}
