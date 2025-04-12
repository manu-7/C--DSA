/*#include <iostream>
using namespace std;

int binary_search(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    int mid = 0;

    while (start <= end) {
        mid = start + (end - start) / 2;

        if (arr[mid] == key) {
            return mid;
        }
        
        if (key < arr[mid]) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    
    return -1;
}

int main() {
    int data[6] = {4, 6, 8, 10, 12, 16};
    
    int index = binary_search(data, 6, 12);
    cout << "Index of key is " << index << endl;

    return 0;
}*/

#include <bits/stdc++.h>
using namespace std;

int findMin(vector<int>& arr) {
    int low = 0, high = arr.size() - 1;
    int ans = INT_MAX;
    while (low <= high) {
        int mid = (low + high) / 2;

        //if left part is sorted:
        if (arr[low] <= arr[mid]) {
            // keep the minimum:
            ans = min(ans, arr[low]);

            // Eliminate left half:
            low = mid + 1;
        }
        else { //if right part is sorted:

            // keep the minimum:
            ans = min(ans, arr[mid]);

            // Eliminate right half:
            high = mid - 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2, 3};
    int ans = findMin(arr);
    cout << "The minimum element is: " << ans << "\n";
    return 0;
}


