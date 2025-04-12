#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {4, 6, 3, 1, 2};  
    int n = sizeof(arr) / sizeof(arr[0]); 
    int date;
    cout << "Enter the last digit of the date (0-9): ";
    cin >> date;

    int fine = 0;  
    int finePerVehicle = 20;

    
    for (int i = 0; i < n; i++) {
        
        if ((date % 2 == 0 && arr[i] % 2 != 0) || (date % 2 != 0 && arr[i] % 2 == 0)) {
            fine += finePerVehicle; 
        }
    }

    
    cout << "Total fine collected: Rs. " << fine << endl;
    return 0;
}
