#include<bits/stdc++.h>
using namespace std;

class temp{
    public:
    int a, b;

    public:
    temp(int x = 0, int y = 0)
    {
        a = x;
        b = y;
    }

    temp operator+(temp const& obj)
    {
        temp tp;
        tp.a = a + obj.a;
        tp.b = b + obj.b;
        return tp;
    }

    temp operator*(temp const& obj)
    {
        temp tp;
        tp.a = a * obj.a;
        tp.b = b * obj.b;
        return tp;
    }

    temp operator-(temp const& obj)
    {
        temp tp;
        tp.a = abs(a-obj.a);
        tp.b = abs(b - obj.b);
        return tp;
    }

    temp operator/(temp const& obj)
    {
        temp tp;
        tp.a = a/obj.a;
        tp.b = b/obj.b;
        return tp;
    }

    void print()
    {
        cout<<a<<" "<<b<<endl;
    }
};

int main()
{
    temp t1(10,20), t2(30, 40);

    temp t3 = t1+t2;
    temp t4 = t1*t2;
    temp t5 = t1-t2;
    temp t6 = t2/t1;

    t3.print();
    t4.print();
    t5.print();
    t6.print();
}