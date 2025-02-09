#include<bits/stdc++.h>
using namespace std;

class A{
    private:
    int a, b;
    public:
    A()
    {
        a = 10;
        b = 20;
    }
    friend class B;
};

class B{
    public:
    void hell(A &x)
    {
        cout<<x.a<<" "<<x.b;
    }
};
int main()
{
    A ap;
    B bp;

    bp.hell(ap);
}