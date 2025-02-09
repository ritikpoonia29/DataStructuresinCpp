#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    
    void display(int x)
    {
        cout<<"Display 1 "<<x<<endl;
    }
    
    void display(string y)
    {
        cout<<"Display 2 "<<y<<endl;
    }
    
    void display(int a, int b)
    {
        cout<<"Display 3 "<<a<<" "<<b<<endl;
    }
    
    
};
int main()
{
    A temp;
    temp.display(10, 20);
    temp.display("ABC");
    temp.display(10);
}