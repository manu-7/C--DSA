#include <iostream>
#include <vector>

using namespace std;

void findMissingAndRepeating(vector<int>& nums) {
    int n = nums.size();
    int expectedSum = n * (n + 1) / 2;
    int expectedSumOfSquares = n * (n + 1) * (2 * n + 1) / 6;

    int actualSum = 0;
    int actualSumOfSquares = 0;

     for(int i=0;i<num.size();i++){
        actualSum+=nums[i];
        actualSumOfSquares+=nums[i]*nums[i];
    }

