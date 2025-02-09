#include<iostream>
using namespace std;

int main()
{
    int n;

    cout<<"Enter the number: ";
    cin>>n;

    int dig=0, rev=0;
    while(n>0)
    {
    dig = n%10;
    rev = rev * 10 + dig;
    n=n/10;
    dig=0;
    }

    cout<<"Reversed Number is: "<<rev<<endl;
}