#include <bits/stdc++.h>
using namespace std;

int main() {
    float diesel, distance;

    cout << "Enter the quantity of diesel to fill up the tank (in liters): ";
    cin >> diesel;
    cout << "Enter the distance covered till the tank goes dry (in kilometers): ";
    cin >> distance;

    if (diesel <= 0 || distance <= 0) {
        cout << "Invalid Input" << endl;
        return 0;
    }

    float litersPer100Km = (diesel / distance) * 100;

    // Convert to miles per gallon (U.S.)
    float miles = distance * 0.6214; // Convert kilometers to miles
    float gallons = diesel * 0.2642; // Convert liters to gallons
    float milesPerGallon = miles / gallons;

    // Display the results with two decimal places
    cout << fixed << setprecision(2);
    cout << "Fuel consumption (liters per 100 kilometers): " << litersPer100Km << endl;
    cout << "Fuel consumption (miles per gallon): " << milesPerGallon << endl;

    return 0;
}


