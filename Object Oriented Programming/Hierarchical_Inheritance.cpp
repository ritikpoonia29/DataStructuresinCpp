#include <bits/stdc++.h>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "This animal eats food." << endl;
    }
};

// Derived class 1
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks!" << endl;
    }
};

// Derived class 2
class Cat{
public:
    void meow() {
        cout << "Cat meows!" << endl;
    }
};

class Cow: public Cat, public Dog{
    public:
    void func(){
        cout<<"Cow: "<<endl;
    }
};

int main() {
    Dog d;
    d.eat();  // Inherited from Animal
    d.bark(); // Specific to Dog

    Cat c;
    // c.eat();  // Inherited from Animal
    c.meow(); // Specific to Cat

    Cow f;
    f.func();
    f.meow();
    f.eat();

    return 0;
}
