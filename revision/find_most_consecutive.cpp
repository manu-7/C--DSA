#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:

    int findmax(vector<int> &arr){
        int cnt = 0;
        int maxi = 0;

        for(int i = 0;i<arr.size();i++){
            if(arr[i]==1){
                cnt++;
            }
            else{
                cnt = 0;
            }
            maxi = max(maxi,cnt);
        }
        return maxi;
    }
};

int main(){
    vector<int>arr = {1,1,1,1,0,0};
    Solution obj;
    int ans = obj.findmax(arr);
    cout << "The maximum  consecutive 1's are " << ans;
    return 0;

}