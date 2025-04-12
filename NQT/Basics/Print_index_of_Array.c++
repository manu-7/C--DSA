#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {5, 4, 3, 2, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Index\tElement" << endl; // Header for better readability
    for (int i = 0; i < n; i++) {
        cout << i << "\t" << arr[i] << endl;
    }

    return 0;
}
