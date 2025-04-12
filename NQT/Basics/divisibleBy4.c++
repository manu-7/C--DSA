#include <iostream>
#include <vector>
using namespace std;

vector<int> findSeries(int X) {
    vector<int> result;
    int count = 0;                                  // To track the number of valid terms

    for (int N = 1; count < X; N++) { 
        int term = 3 * N + 2; 
        if (term % 4 != 0) { 
            result.push_back(term); 
            count++;                           // Increment the count of valid terms
        }
    }

    return result;
}

int main() {
    int X;
    cout << "Enter the number of terms: ";
    cin >> X;

    vector<int> series = findSeries(X);

    cout << "The series is: ";
    for (int num : series) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
