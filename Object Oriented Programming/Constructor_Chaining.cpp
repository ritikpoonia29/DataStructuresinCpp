#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    int a;

    A():A(10){} // Constructor Chaining

    A(int x)
    {
        a = x;
    }

    void display()
    {
        cout<<a<<endl;
    }
}
int main()
{
    A a;
    a.display();
}