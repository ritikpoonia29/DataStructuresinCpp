#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    int a;
    int b;
    public:
    A()
    {
        // Default Constructor     
    }

    A(int x, int y)
    {
        a = x;
        b = y;
        // Parameterized constructor;
    }

    A(A &i)
    {
        a = i.a;
        b = i.b;
    }
};

int main()
{
    A temp(10, 20);
    A flag(temp);
    cout<<flag.a<<" "<<flag.b<<endl;
}