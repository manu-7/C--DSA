#include <iostream>
#include <vector>

using namespace std;

void moveNegative(vector<int>& arr) {
    vector<int> positive;
    vector<int> negative;

    // Separate positive and negative elements
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] >= 0)
            positive.push_back(arr[i]);
        else
            negative.push_back(arr[i]);
    }

    // Modify the original array in place
    int index = 0;

    // Add all positive elements first
    for (int i = 0; i < positive.size(); i++) {
        arr[index] = positive[i];
        index++;  // Increment after assigning
    }

    // Add all negative elements after the positive ones
    for (int i = 0; i < negative.size(); i++) {
        arr[index] = negative[i];
        index++;  // Increment after assigning
    }
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> arr(n);

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    moveNegative(arr);

    cout << "Array after moving negative elements to the end: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
