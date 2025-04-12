#include <bits/stdc++.h>
using namespace std;

int largestElement(vector<int>& nums,int n){
    int maxi = 0;
    for(int i=0;i<nums.size();i++){
        maxi = max(maxi,nums[i]);
    }
    return maxi;
}
int main(){
    int n;
    cout<<"Enter the number of elements:";
    cin>>n;

    vector<int>nums(n);   // Declare a vector of size n

    cout<<"Enter the element of array:";
    for(int i=0;i<nums.size();i++){
        cin>>nums[i];               // Take array elements as input
    }

    int result = largestElement(nums,n);  //call the function
    cout<<"the largest element of this array is:"<<result<<endl;
    return 0;

}