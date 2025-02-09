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

    friend void func(class1 &obj);

};

void func(class1 &obj)
{
    cout<<obj.a<<" "<<obj.b<<endl;
} 
int main()
{
    class1 c;
    func(c);
}


/*
1. Class and Function
2. Inheritance
3. Encapsulation
4. Abstraction
5. Polymorphism
6. Constructors and Deconstructors
7. Virtual class and function
8. this pointer
9. static function
10. Friend class and function
11. exception handling
*/