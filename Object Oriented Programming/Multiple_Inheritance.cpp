#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    int a;

    void displayA()
    {
        cout<<"A: "<<a<<endl;
    }
};
class B{
    public:
    int b;

    void displayB()
    {
        cout<<"B: "<<b<<endl;
    }
};

class C : public A, public B{
    public: 
    int c;

    void displayC()
    {
        cout<<"C: "<<c<<endl;
        displayA();
        displayB();
    }
};
int main()
{
    C temp;
    temp.a = 10;
    temp.b = 20;
    temp.c = 30;
    temp.displayC();
}