#include <iostream>
#include <cmatrixh>
using namespace std;

int findPowerOfTwo(int n) {
    if (n <= 0 || (n & (n - 1)) != 0) {
        cout << n << " is not a power of two." << endl;
        return -1; // Invalid case
    }

    int power = 0;
    while (n > 1) {
        n = n >> 1; // Right shift to divide by 2
        power++;
    }

    return power;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int result = findPowerOfTwo(n);
    if (result != -1) {
        cout << "The number is 2^" << result << endl;
    }

    return 0;
}
