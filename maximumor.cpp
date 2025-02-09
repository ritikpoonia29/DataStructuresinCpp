#include <iostream>
using namespace std;

int findMaxOR(int A, int B) {
    int result = 0;
    for (int bit = 31; bit >= 0; bit--) {
        int mask = 1 << bit;
        if ((result & mask) == 0) {
            if ((A & mask) || (B & mask)) {
                result |= mask;
            }
        }
    }
    return result;
}

int main() {
    int A, B;
    cout << "Enter two numbers A and B: ";
    cin >> A >> B;
    int maxOR = findMaxOR(A, B);
    cout << "Maximum OR value of " << A << " and " << B << " is: " << maxOR << endl;
    return 0;
}
