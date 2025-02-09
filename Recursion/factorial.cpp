#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    if(n<=0)
    {
        return -1;
    }
    else{
        int prevfact = factorial(n-1);
        return n*prevfact;
    }
}

int main()
{
    int n;
    cin>>n;

    int res = factorial(n);

    if(res == -1)
    {
        cout<<"Factorial does not exist for negative numbers\n";
    }
    else{
    cout<<"The factorial of "<<n<<" is "<<factorial(n)<<endl;
    }
}