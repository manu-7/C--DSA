#include<iostream>
using namespace std;

int lastocc(int arr[], int key, int n) {
    int low = 0;
    int high = n - 1;
    int ans = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            ans = mid;
            low = mid + 1;  // Move left to find the first occurrence.
        } else if (arr[mid] > key) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return ans;
}

int main() {
    int even[5] = {1, 2, 6, 6, 9};
    cout << "First occurrence of 6 is at index: " << lastocc(even, 6, 5) << endl;
    return 0; // Don't forget to return an integer from main.
}
