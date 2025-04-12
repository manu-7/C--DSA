#include<iostream>
#include<vector>
using namespace std;

vector<int> movezeros(int n, vector<int>& arr) {
    vector<int> temp;
    
    for(int i = 0; i < n; i++) {
        if(arr[i] != 0) {
            temp.push_back(arr[i]);
        }
    }

    // Copy the elements from temp to the original array
    int nz = temp.size();
    for(int i = 0; i < nz; i++) {
        arr[i] = temp[i];
    }

    // Fill the remaining elements with zeros
    for(int i = nz; i < n; i++) {
        arr[i] = 0;
    }

    return arr;
}

int main() {
    vector<int> arr = {1, 0, 5, 0, 6, 3, 0};
    int n = 7;
    vector<int> ans = movezeros(n, arr);

    cout << "Array after moving zeros is -> ";
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << '\n';

    return 0;
}
