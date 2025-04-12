#include <bits/stdc++.h>
using namespace std;

pair<int, int> linearSearch(int matrixrix[][3], int row, int col, int key) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (matrixrix[i][j] == key) {
                return {i, j}; 
            }
        }
    }
    return {-1, -1}; 
}

int main() {
    int matrixrix[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int row = 4;
    int col = 3;
    int key = 9;

    pair<int, int> result = linearSearch(matrixrix, row, col, key);
    if (result.first != -1) {
        cout << "Key found at: (" << result.first << ", " << result.second << ")" << endl;
    } else {
        cout << "Key not found" << endl;
    }

    return 0;
}
