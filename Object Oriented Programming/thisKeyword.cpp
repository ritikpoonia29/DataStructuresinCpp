#include<bits/stdc++.h>
using namespace std;

int x; // Global data Member
class temp{
    public:
    int a; // local data member of the class.

    temp(int a /*a is a Parameter. This parameter is having the same name as of the local data member*/)
    {
        this->a = a;
    }

    void display()
    {
        cout<<a<<endl;
    }
}
int main()
{
    temp t(20);
    t.display();
}