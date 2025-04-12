#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {4, 5, 8, 6, 7, 4, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    vector<int> OddArr;
    vector<int> EvenArr;

   
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            EvenArr.push_back(arr[i]);
        } else {
            OddArr.push_back(arr[i]);
        }
    }

    
    cout << "Odd elements: ";
    for (int x : OddArr) {
        cout << x << " ";
    }
    cout << endl;

    
    cout << "Even elements: ";
    for (int y : EvenArr) {
        cout << y << " ";
    }
    cout << endl;

    return 0;
}
