#include<iostream>
using namespace std;

int main()
{
    int n;

    cout<<"Enter the number: ";
    cin>>n;

    int count = 0;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i == 0)
        {
            count++;
        }
    }
    
    if(count>=1)
    {
        cout<<"Non Prime"<<endl;
    }
    else{
        cout<<"Prime"<<endl;
    }
}