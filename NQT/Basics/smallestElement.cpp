#include<bits/stdc++.h>
using namespace std;

int smallestElement(vector<int> &nums,int n){
    int minimum = 0;
    for(int i=0;i<nums.size();i++){
        minimum = min(minimum,nums[i]);
    }
    return minimum;
}

int main(){
    int n;
    cout<<"Enter the number of elements:";
    cin>>n;

    vector<int>nums(n);
    cout<<"Enter the Elements:";
    for(int i=0;i<nums.size();i++){
        cin>>nums[i];
    }
    int result = smallestElement(nums,n);

    cout<<"the minimum element of the array is:"<<result<<endl;
    return 0;



}