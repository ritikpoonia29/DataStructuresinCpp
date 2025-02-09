#include<bits/stdc++.h>
using namespace std;

class class1
{
    private:
    int a, b;

    public:
    class1()
    {
        a = 10;
        b = 20;
    }
    // frind class B;
    friend void func(class1 obj);
};
// Global function. It does not belong to any class
void func(class1 obj)
{
    cout<<obj.a<<" "<<obj.b<<endl;
} 
int main()
{
    class1 c;
    func(c);
}