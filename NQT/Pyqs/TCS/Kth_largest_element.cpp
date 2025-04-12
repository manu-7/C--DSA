#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int findKthLargest(vector<int>& nums, int k) {
    priority_queue<int,vector<int>,greater<int>>pqq;
    for(int num:nums){
        pqq.push(num);
        if(pqq.size()>k){
            pqq.pop();
        }
    }
    return pqq.top();
}
int main(){
    vector<int>nums = {2,5,4,6,7,8};
    int k = 3;
    cout << "The " << k << "th largest element is: " << findKthLargest(nums, k) << endl;
    return 0;
}
