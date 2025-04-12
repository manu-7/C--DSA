#include<iostream>
#include<vector>
using namespace std;
int search(vector<int>& nums, int target){
 int left = 0;
 int right = nums.size()-1;


 while (left<=right){
  int  mid = left+(right-left)/2;

  
  if (nums[mid]==target){
    return mid;

  }

  //check if sorted or not

  if (nums[left]<=nums[mid]){
    if (nums[left]<=target && target<nums [mid])
    right = mid- 1;
  }
  else {
    left = mid+1;
  }
  
    if (target>nums[mid] && nums[right]>=target){
        left = mid+1;
  }else{
    right = mid-1;
  }
 }
 
return -1;
}


int main() {
    vector<int> rotatedArray = {4, 5, 6, 7, 0, 1, 2};
    int target = 4;

    int result = search(rotatedArray, target);

    if (result != -1) {
        cout << "Target " << target << " found at index " << result << endl;
    } else {
        cout << "Target " << target << " not found in the array" << endl;
    }

    return 0;
}
