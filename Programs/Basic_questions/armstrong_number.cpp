#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;

    cout<<"Enter the number: ";
    cin>>n;

    int dig=0;
    int arm=0;
    int orig = n;
    while(n>0)
    {
        dig = n%10;
        arm += pow(dig, 3);
        n=n/10;
    }

    if(arm == orig)
    {
        cout<<"The number is Armstrong Number."<<endl;
    }
    
}