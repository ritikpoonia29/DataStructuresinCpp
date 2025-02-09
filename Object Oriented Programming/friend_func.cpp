#include<bits/stdc++.h>
using namespace std;

class A{
    int a = 2;
    int b = 3;
    private:
    friend int mul(A &flag);
    
};

    int mul(A &flag)
    {
        return flag.a*flag.b;
    }

int main()
{
    A temp;
    int res = mul(temp);

    cout<<res<<endl;
}   