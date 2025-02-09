#include<iostream>
#include<math.h>
using namespace std;

int fact(int n)
{ int f=1;
    for(int i=2;i<=n;i++)
    {
        f*=i;
    }

    return f;
}

int main()
{
    int n,r;

    cout<<"Enter the value of n: ";
    cin>>n;

    cout<<"ENter the value of r: ";
    cin>>r;

    int factorial = fact(n) / (fact(r) * fact(n-r));

    cout<<"The value of the factorial of the given number is: "<<factorial<<endl;

    return 0;
    
}