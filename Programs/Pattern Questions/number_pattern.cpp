#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the alue of n: "<<endl;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        int k =i;
        for(int j=k;j>=i;j++)
        {
            cout<<j<<" ";
        }

        for(int j=2;j<=i;j++)
        {
            cout<<j<<" ";
        }

        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}