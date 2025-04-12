#include<bits/stdc++.h>
using namespace std;


int getMaxSum(int matrixrix[][3],int row,int col){
    int MaxSum = INT_MIN;
    for(int i=0;i<row;i++){
        int RowSum = 0;
        for(int j=0;j<col;j++){
            RowSum += matrixrix[i][j];
        }
        MaxSum = max(RowSum,MaxSum);
    }
    return MaxSum;

}
int main(){
    int matrixrix[4][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int row = 3;
    int col = 3;
    cout<<getMaxSum(matrixrix,row,col);
    return 0;
    
 
}

