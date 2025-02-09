#include<bits/stdc++.h>
using namespace std;
//Function overriding
class A{
    public:
    virtual void show()
    {
        cout<<"Base Class  A\n";
    }
};

class B: public A
{
    public:
    void show()
    {
        cout<<"Derived Class B\n";
    }
};

int main()
{
    A *temp;
    B flag;
    temp = &flag;
    temp->show();
    
}