#include <iostream>
using namespace std;

// class B; // Not using forward declaration

class B {
public:
    void showAData(const class A& a); // Declare function before A
};

class A {
private:
    int dataA;

public:
    A(int value) : dataA(value) {}

    // Member function of B declared as friend
    friend void B::showAData(const A& a);
};

// Now define the function outside B
void B::showAData(const A& a) {
    cout << "Value in A: " << a.dataA << endl; // Accessing private data of A
}

int main() {
    A objA(42);
    B objB;
    
    objB.showAData(objA); // Accessing private member of A
    return 0;
}
