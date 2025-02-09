#include <iostream>
#include <exception>
using namespace std;


// Custom exception class
class NegativeValueException : public exception {
public:
    const char* what() const noexcept override {
        return "Error: Negative value entered!";
    }
};

// Class that validates input value
class Number {
private:
    int value;

public:
    // Constructor to initialize the value


    
    Number(int val) {
        if (val < 0) 
        {
            throw NegativeValueException(); // Throwing exception if value < 0
        }
        value = val;
    }

    void display() {
        cout << "Valid Number: " << value << endl;
    }
};

int main() {
    try {
        Number num1(10);  // Valid input
        num1.display();

        Number num2(-5);  // Invalid input (throws exception)
        num2.display();
    }
    catch (const exception& e) //This is preset syntax
    {
        cout << e.what() << endl;  // Handling the exception
    }

    return 0;
}
