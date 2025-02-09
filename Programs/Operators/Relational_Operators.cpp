#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;

    if(n>10)
    {
        cout<<"Greater than 10"<<endl;
    }
    else if(n<10)
    {
        cout<<"Less than 10"<<endl;
    }
    else{
        cout<<"Equal to 10"<<endl; 
    }

    return 0;
}