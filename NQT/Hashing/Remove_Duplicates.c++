#include <bits/stdc++.h>
using namespace std;

vector<int> RemoveDuplicates(vector<int> arr, int n) {
    unordered_map<int, int> mapp;
    vector<int> result;


    for (int num : arr) {
        mapp[num]++;
    }
    for (auto ele : mapp) {
        result.push_back(ele.first);
    }

    return result;
}

int main() {
    vector<int> arr = {1, 1, 2, 2, 3, 3};
    int n = arr.size();
    vector<int> newresult = RemoveDuplicates(arr, n);

    for (int i = 0; i < newresult.size(); i++) {
        cout << newresult[i] << " ";
    }

    return 0;
}
