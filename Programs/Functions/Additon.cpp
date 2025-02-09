#include<iostream>
using namespace std;

int add(int n1, int n2)
{
    int sum = n1+n2;
    return sum;
}

int main()
{
    int a,b;
    cout<<"Enter the value of a: "<<endl;
    cin>>a;

    cout<<"Enter the value of b: "<<endl;
    cin>>b;

    cout<<"Sum: "<<add(a,b)<<endl;
    return 0;
}