#include<bits/stdc++.h>
using namespace std;


class A{
    private:
    int a = 10;
    int b = 20;
    
    friend class B;

};

class B{
    public:

    void display(A temp)
    {
        cout<<temp.a<<" "<<temp.b<<endl;
    }
};
int main()
{
    A flag;
    B flag2;

    flag2.display(flag);
}