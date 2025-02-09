#include<iostream>
using namespace std;

void display(int a)
{
    cout<<a<<endl;
    return;
}

int main()
{
    int a;
    cout<<"Enter the value of a: ";
    cin>>a;

    display(a);
    return 0;
}