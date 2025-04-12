#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {0, 1, 2, 0, 1, 2, 0, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int start = 0;  
    int mid = 0;    
    int end = n - 1; 

    
    while (mid <= end) {
        if (arr[mid] == 0) {
            swap(arr[start], arr[mid]); // Place 0 at the start
            start++;
            mid++;
        } else if (arr[mid] == 1) {
            mid++; // Skip 1
        } else {
            swap(arr[mid], arr[end]); // place 2 at the end
            end--;
        }
    }

 
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
