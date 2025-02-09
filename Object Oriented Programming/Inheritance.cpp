#include<iostream>
using namespace std;

// Single Inheritance
// class A{
//     public:

//     int a;
//     void funcA()
//     {
//         cout<<"Function A"<<endl;
//     }
// };

// class B : public A{
// };

// int main()
// {
//     B b;
//      b.funcA();
// }

// Multiple Inheritance

// class A{
//     public:

//     void funcA()
//     {
//         cout<<"A"<<endl;
//     }

// };

// class B{
//     public:
//     void funcB()
//     {
//         cout<<"B"<<endl;
//     }
// };

// class C: public A, public B{
//     public:
// };

// int main()
// {
//     C b;
//     b.funcA();
//     b.funcB();
// }

// MUlti Level Inheritance

class A{
    public:
    void funca()
    {
        cout<<"A"<<endl;
    }
};
class B: public A{
    public:
    void funcb()
    {
        cout<<"B"<<endl;
    }
};

class C: public B{
    public:
};

int main()
{
    C c;

    c.funca();
    c.funcb();
}