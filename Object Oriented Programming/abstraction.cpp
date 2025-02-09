#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    int a = 10;
    int b = 20, c = 30;

    public:
    void calculate()
    {
        cout<<a+b+c<<endl; 
    }
};

class B: public A{
    public:
    int d = 40;

    public:

    void  cal()
    {
        cout<<b+d<<endl;
    }
};
int main()
{
    B at;
    at.cal();
}