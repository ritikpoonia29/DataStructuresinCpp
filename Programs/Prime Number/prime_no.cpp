#include<iostream>
using namespace std;

int main()
{
    int n;
    int z;
    int count=0;
    cout<<"Enter the Number: \n";
    cin>>n;

    for(int i=2;i<n;i++)
    {
        
        z = n%i;
        if(z==0)
        {
            count = count+1;
                break;
        }
    }

    if(count<=0)
    {
        cout<<"PRIME"<<endl;
    }
    else
    {
        cout<<"NON PRIME"<<endl;
    }
}
