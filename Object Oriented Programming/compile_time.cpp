#include<bits/stdc++.h>
using namespace std;
// Function Overloading
class A{
    public:
    void add(int a, int b)
    {
        cout<<a+b<<endl;
    }

    void add(int a, int b, int c)
    {
        cout<<a+b+c<<endl;
    }
};

// Operator overlaoding
class complexx{
    private:
    int real, imag;
    public:
    complexx(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

    complexx operator+(complexx const &obj)
    {
        complexx result;
        result.real = obj.real + real;
        result.imag = obj.imag + imag;
        return result;
    }

    complexx operator*(complexx const &obj)
    {
        complexx result;
        result.real = obj.real*real;
        result.imag = obj.imag*imag;
        return result;
    }

    void print()
    {
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
};

int main()
{
    A temp;
    temp.add(10, 20);
    temp.add(10, 20, 30);

    complexx c1(10, 20), c2(30, 40);
    complexx c3 = c1+c2;
    complexx c4 = c1*c2;
    c3.print();
    c4.print();
}