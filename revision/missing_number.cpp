#include<iostream>
#include<vector>
using namespace std;

/*int missingNumber(vector<int> &arr,int N){
    for(int i =1;i<N;i++){
        int flag = 0;

        for(int j=0;j<N-1;j++){
            if(arr[j]==i){
                flag = 1;
                break;
            }
        }
        if(flag == 0) return i;
    }
    return -1; 
}*/
int missingNumber(vector<int> &arr,int N){
    int sum = (N*(N+1)/2);
    int s2 = 0;

    for(int i = 0;i<N-1;i++){
        s2 += arr[i];
    }
    int missingnum = sum - s2;
    return missingnum;
}
int main()
{
    int N = 5;
    vector<int> arr = {1, 2, 4, 5};
    int ans = missingNumber(arr, N);
    cout << "The missing number is: " << ans << endl;
    return 0;
}
