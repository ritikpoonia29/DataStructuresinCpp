#include<iostream>

using namespace std;

int main()
{
    char op;
    float a,b;

    cout<<"enter the first number: \n";
    cin>>a;

    cout<<"Enter the second number: \n";
    cin>>b;

    cout<<"Enter the arithmetic operator: \n";
    cin>>op;

    switch(op)
    {
        case '+':
        cout<<"The sum is: "<<a+b<<endl;
        break;

        case '-':
        cout<<"The difference is "<<a-b<<endl;
        break;

        case '*':
        cout<<"The product is "<<a*b<<endl;
        break;

        case '/':
        cout<<"The quotient is: "<<a/b<<endl;
        break;

        default: cout<<"Enter the valid operator\n";
    }
}