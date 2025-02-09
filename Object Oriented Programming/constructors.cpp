#include<bits/stdc++.h>
using namespace std;

class temp{
    public: 
    // Data Members
    int x;
    string y;

    // Parameterized Constructor
    temp(int a, string b)
    {
        x = a;
        y = b;
    }

    // Function to perform some operation
    void addition()
    {
        // x = x+10;
        x+=10; // It is same as x = x+10;
    }

    // One more function to display the results
    void display()
    {
        cout<<"Value of x is: "<<x<<endl;
        cout<<"Value of y is: "<<y<<endl;
    }
};


int main()
{
    // Creation of object
    temp t(30, "ABC"); // it will call paramterized constructor.

    // update the data member

    t.x = 50;

    t.addition();
    t.display();
}
