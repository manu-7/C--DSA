#include <iostream>
#include <cmatrixh> // For pow()
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    long long ans = 0; 
    int i = 0;

    while (n != 0) {
        int bit = n & 1;           
        ans += bit * pow(10, i);  
        n = n >> 1;               
        i++;                      
    }

    cout << "Binary representation: " << ans << endl;
    return 0;
}
