#include <iostream>
using namespace std;

int main() {
    int num1 = 36, num2 = 60;

    // Ensure the numbers are positive
    if (num1 <= 0 || num2 <= 0) {
        cout << "Numbers must be positive." << endl;
        return 0;
    }

    // Implementing the Euclidean algorithm
    while (num1 != 0 && num2 != 0) {
        if (num1 > num2) {
            num1 = num1 % num2;
        } else {
            num2 = num2 % num1;
        }
    }

    int gcd = (num1 == 0) ? num2 : num1;

    // Display the result
    cout << "GCD of 36 and 60 is " << gcd << endl;

    return 0;
}
