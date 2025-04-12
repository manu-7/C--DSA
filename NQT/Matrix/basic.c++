#include<bits/stdc++.h>
using namespace std;


bool linearSerch(int matrixrix[][3],int row,int col,int key){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if( matrixrix[i][j]==key){
                return true;
            }
        }
    }
    return false;
}
int main(){
    int matrixrix[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int row = 4;
    int col = 3;
    int key = 9;
    cout<<linearSerch(matrixrix,row,col,key)<<endl;
    return 0; 
}
