#include<iostream>
#include<math.h>

using namespace std;

void fib(int n)
{
    int a=0, b=1;
    for(int i=1;i<=n;i++)
    {
        cout<<a<<endl;
        int sum = a + b;
        a=b;
        b=sum;
    }

    return;

    
}

int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    fib(n);

    return 0;
}