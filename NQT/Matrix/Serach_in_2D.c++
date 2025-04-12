#include <bits/stdc++.h>
using namespace std;

// Binary search to find the target in a specific row
bool SearchInRow(vector<vector<int>> &matrix, int target, int row) {
    int n = matrix[0].size();
    int strt = 0;
    int end = n - 1;

    while (strt <= end) {
        int mid = strt + (end - strt) / 2;
        if (matrix[row][mid] == target) {
            return true;
        } else if (target < matrix[row][mid]) {
            end = mid - 1;
        } else {
            strt = mid + 1;
        }
    }
    return false;
}

// Binary search on rows to find the row containing the target
bool Searchmatrix(vector<vector<int>> &matrix, int target) {
    int m = matrix.size();
    int n = matrix[0].size();

    int strtRow = 0;
    int endRow = m - 1;

    while (strtRow <= endRow) {
        int midRow = strtRow + (endRow - strtRow) / 2;

        // Check if the target lies within the current row
        if (target >= matrix[midRow][0] && target <= matrix[midRow][n - 1]) {
            return SearchInRow(matrix, target, midRow);
        } else if (target < matrix[midRow][0]) {
            endRow = midRow - 1;
        } else {
            strtRow = midRow + 1;
        }
    }
    return false;
}

int main() {
    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };

    int target = 3;

    if (Searchmatrix(matrix, target)) {
        cout << "Target " << target << " found in the matrix." << endl;
    } else {
        cout << "Target " << target << " not found in the matrix." << endl;
    }

    return 0;
}
