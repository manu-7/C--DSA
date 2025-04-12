#include<bits/stdc++.h>
using namespace std;

int MaxColSum(int matrixrix[][3],int row,int col){
    int maxSum = INT_MIN;
    for(int i=0;i<row;i++){
        int colSum = 0;
        for(int j=0;j<col;j++){
            colSum += matrixrix[j][i];
        }
        maxSum = max(maxSum,colSum);
    }
    return maxSum;
}
int main(){
    int matrixrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int row = 3;
    int col = 3;
    cout<<MaxColSum(matrixrix,row,col);
}

