#include<bits/stdc++.h>
using namespace std;

// First the compiler will go to this class
class temp{
    // Even if its private then also we can define it.
    static int x;
    public:
    // Defining a static data member
    // We cannot assign any value to static data member in the class unlike y.
    
    // Defining a normal data member
    int y = 10;

    void display()
    {
        cout<<x<<" "<<y<<endl;
    }
};

// We can only access the static data members this way
// We can only define it if its private but we cannot use it anywhere outside the class.
int temp::x = 70;

int main()
{
    temp t; // When first object is created then memory is allocated to x ad y both.
    t.y = 50;
    // t.x = 30; We cannot access it as it is private in the class.
    t.display();
    
    temp t2; // When another object is created then memory is only allocated... it will ignore x as it is static and already defined.
}