// Connect n ropes with minimal cost

#include <bits/stdc++.h>
using namespace std;

long long minCost(vector<long long>& arr) {
    priority_queue<long long, vector<long long>, greater<long long>> minheap;
    
    
    for (int i = 0; i < arr.size(); i++) {
        minheap.push(arr[i]);
    }
    
    long long ans = 0;
    
    while (minheap.size() > 1) {
        long long first = minheap.top();
        minheap.pop();
        long long second = minheap.top();
        minheap.pop();
        
        ans += first + second;
        minheap.push(first + second);
    }
    
    return ans;
}

int main() {
    int n;
    cout << "Enter the number of ropes: ";
    cin >> n;

    vector<long long> len(n);
    cout << "Enter the lengths of the ropes: ";
    for (int i = 0; i < n; i++) {
        cin >> len[i];
    }

    cout << "Total cost for connecting ropes is " << minCost(len) << endl;
    return 0;
}
