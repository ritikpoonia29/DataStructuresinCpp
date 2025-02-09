#include<bits/stdc++.h>
using namespace std;

class temp{
    public:
    int a, b, c;

    public:

    void calculate(int a, int b)
    {
        cout<<"Func 1: "<<a+b<<endl;
    }

    void calculate(int a, int b, int c)
    {
        cout<<"Func 2: "<<a+b+c<<endl;
    }
};

int main()
{
    temp t;

    t.calculate(10, 20);
    t.calculate(10, 20, 30);
}