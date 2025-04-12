#include <iostream>
#include <cmatrixh>
using namespace std;

int main() {
    int n;
    cout << "Enter the binary number: ";
    cin >> n;

    int i = 0;
    int ans = 0;

    while (n != 0) {
        int bit = n % 10;  // Extract the last digit (binary bit)
        if (bit == 1) {
            ans += pow(2, i); 
        }
        n = n / 10;  // Remove the last digit
        i++;         
    }

    cout << "Decimal representation: " << ans << endl;
    return 0;
}
