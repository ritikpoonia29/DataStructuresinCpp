#include<iostream>
using namespace std;

int main()
{
    int n1, n2, n3;

    cin>>n1;
    cin>>n2;
    cin>>n3;

    if(n1>n2)
    {
        if(n2>n3)
        {
            cout<< "Largest No is \n";
            cout <<n1;
        }
        else if (n1<n3)
        {
            cout <<n3;
        }
    }
    
    else if(n2>n3)
    {
        cout<<n2<<endl;
    }
    else 
    {
        cout<<n3;
    }
    return 0;
}