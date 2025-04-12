#include<iostream>
#include<vector>
using namespace std;

void moveZeros(vector<int> &nums){
    int left = 0;

    for(int right=0;right<nums.size();right++){
        if(nums[right]!=0){
            swap(nums[right],nums[left]);
            left++;
        }
    }
}

int main(){
    int n;
    cout<<"Enter number of element:";
    cin>>n;

    vector<int>nums(n);
    cout<<"Enter the elements: ";
    for(int i=0;i<nums.size();i++){
        cin>>nums[i];
    }

    moveZeros(nums);
    cout<<"Array after moving zeroes to the end:";
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    return 0;
}
