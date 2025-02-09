#include<bits/stdc++.h>
using namespace std;

class temp {
    public:
    int x; // Data Members of the class
};

int main()
{
    temp t; // t is an object
    t.x = 20; // value is assigned to x using t object
    // . is used to access any data member of the class.

    //Copy constructor means copying one object to another object ans passing it as a parameter. Here any value assigned to object 1 is also copied to object 2
    //Copy Constructor
    temp y(t);
    cout<<y.x<<endl;
}