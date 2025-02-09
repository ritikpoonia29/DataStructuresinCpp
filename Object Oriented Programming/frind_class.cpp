#include<bits/stdc++.h>
using namespace std;

class A{
    private:
    int a = 10;

    public:
    A(){}
    friend class B;
};

class B{
    public:
    void display(A &t)
    {
        cout<<t.a<<endl;
    }
};
int main()
{
    A x;
    B y;
    y.display(x);
}