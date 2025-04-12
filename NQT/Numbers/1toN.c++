#include <iostream>
using namespace std;

void printNumbers(int N) {
    for (int i = 1; i <= N; i++) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    int N;
    cout << "Enter a positive number: ";
    cin >> N;

    if (N > 0) {
        printNumbers(N);
    } else {
        cout << "Please enter a positive number." << endl;
    }

    return 0;
}
