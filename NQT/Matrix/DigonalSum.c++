#include<bits/stdc++.h>
using namespace std;

int DiagonalSum(int matrixrix[][4],int n){
    int DSum = 0;
    for(int i=0;i<n;i++){
        DSum+=matrixrix[i][i];
        if(i!=n-i-1){
            DSum+=matrixrix[i][n-i-1];
        }
    }
    return DSum;
}

int main(){
    int matrixrix[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int n = 4;
    cout<<DiagonalSum(matrixrix,n);
    return 0;
}