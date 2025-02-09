#include<bits/stdc++.h>
using namespace std;

// First the compiler will go to this class
class temp{
    public:
    // Defining a static data member
    static int x;
    // Defining a normal data member
    int y;

    void display()
    {
        cout<<x<<" "<<y<<endl;
    }
};


int main()
{
    temp t;
    t.display();
}