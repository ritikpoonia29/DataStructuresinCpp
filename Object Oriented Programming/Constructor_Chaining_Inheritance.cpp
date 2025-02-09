#include <iostream>
using namespace std;

class Animal {
public:
// This constructor's value is passed from the derived class.
    Animal(string type) {
        cout << type << " constructor called." << endl;
    }
};

class Dog : public Animal {
public:
// Here Dog() is a default constructor of the dervied class along with it we are chaining the parameterized cosntructor Animal and
// passing the string "Animal" directly to it.
    Dog() : Animal("Dog") {  // Calls the base class constructor explicitly
        cout << "Dog-specific constructor called." << endl;
    }
};

int main() {
    Dog d;  // Calls both constructors
    return 0;
}
