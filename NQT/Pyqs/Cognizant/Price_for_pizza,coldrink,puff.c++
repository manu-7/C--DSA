#include <bits/stdc++.h>
using namespace std;

int main() {
    int pizzas = 0;
    int puff = 0;
    int colddrink = 0;

  
    cout << "Enter the number of pizzas: ";
    cin >> pizzas;
    cout << "Enter the number of puffs: ";
    cin >> puff;
    cout << "Enter the number of colddrinks: ";
    cin >> colddrink;

  
    if (pizzas < 0 || puff < 0 || colddrink < 0) {
        cout << "Invalid Input: Quantities cannot be negative." << endl;
        return 0;
    }

  
    float pizzaPrice = pizzas * 100;
    float puffPrice = puff * 20;
    float colddrinkPrice = colddrink * 10;

   
    cout << "\nOrder Summary:" << endl;
    cout << "No of pizzas: " << pizzas << endl;
    cout << "No of puffs: " << puff << endl;
    cout << "No of colddrinks: " << colddrink << endl;

    float totalPrice = pizzaPrice + puffPrice + colddrinkPrice;
    cout << "Total price is: Rs." << totalPrice << endl;

    return 0;
}
