#include<bits/stdc++.h>
using namespace std;

class base{
    public:

    void display()
    {
        cout<<"Base class\n";
    }
    
    virtual void display()
    {
        cout<<"Base class\n";
    }
};

class derived: public base
{
    public:
    void display()
    {
        cout<<"Derived Class\n";
    }
};

int main()
{
    base *bptr;
    derived d;
    bptr = &d;

    bptr->display();

    // When it is void dispaly then base class's function is called and when it is virtual void diaply then derived calss function is
    // called.
}