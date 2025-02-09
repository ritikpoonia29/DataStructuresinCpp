#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i+j == 6)
            {
               cout<<"*"; 
            }
            else{
            cout<<" ";}
        }
        for(int j=n+1;j<=2*n-1;j++)
        {
            
            if(i+j%2==0)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}