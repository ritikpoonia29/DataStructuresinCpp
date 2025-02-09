// Public
// Private
// Protected

// Public

#include<bits/stdc++.h>
using namespace std;

class A{
    
    // Even if we are not specifying the data memeber as private by default it is private only.
    int y;
    public:
    int x; // random value
    

    void display()
    {
        cout<<x<<" "<<y<<endl;
    }
};

int main()
{
    // Here default constructor is called.
    A a;
    a.x = 10; // we are able to accesss the data memebers outside the class because they are defined as public.
    a.y = 20; // We are not able to access the data member y because it is defined as private.
    a.display();
}