#include<iostream>
using namespace std;

// Function Overloading
// class student{
//     public:

//     void fun()
//     {
//         cout<<"Ashmit"<<endl;
//     }
//     void fun(int x)
//     {
//         cout<<"Rishav"<<endl;
//     }
//     void fun(double x)
//     {
//         cout<<"Gurkirat"<<endl;
//     }
// };

// int main()
// {
//     student a;
//     a. fun();
//     a.fun(5);
//     a.fun(2.3);
// }

// Operator Overloading

// class complex{
//     private:
//     int real, imag;

//     public:
//     complex(int r = 0, int i = 0)
//     {
//         real = r;
//         imag = i;
//     }

//     complex operator  + (complex const &obj)
//     {
//         complex result;
//         result.imag = imag + obj.imag;
//         result.real = real + obj.real;
//         return result;
//     }

//     void display()
//     {
//         cout<<real<<" + "<<imag<<"i"<<endl;
//     }
// };

// int main()
// {
//     complex c1(12, 20);
//     complex c2(20, 12);
//     complex c3 = c1 + c2;

//     c3.display();
// }

// Runtime Polymorphism

class base{
    public:
    virtual void print()
    {
        cout<<"base"<<endl;
    }

    void display()
    {
        cout<<"base"<<endl;
    }
};

class derived: public base{
    public: 
    void print()
    {
        cout<<"derived"<<endl;
    }

    void display()
    {
        cout<<"derived"<<endl;
    }
};

int main()
{
    base *bsptr;
    derived d;
    bsptr = &d;

    bsptr->print();
    bsptr->display();
}