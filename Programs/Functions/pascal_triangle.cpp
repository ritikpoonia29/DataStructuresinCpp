#include<iostream>
#include<math.h>

using namespace std;

int fact(int n)
{
    int f=1;
    for(int i=1;i<=n;i++)
    {
       f*=i; 
    }
    return f;
}

int main()
{
    int n;
    
    cout<<"Enter the value of n: ";
    cin>>n;

    for(int i=0;i<=n-1;i++)
    {
        for(int j=0;j<=i;j++)
        {
            int tri = fact(i)/(fact(j)*fact(i-j));
            cout<<tri;
        }
        cout<<endl;

    }

    return 0;
}
