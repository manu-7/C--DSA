#include <iostream>

int countWays(int n) {
    if (n <= 1) {
        // If there is only one stair or no stairs, there is only one way (base case).
        return 1;
    } else {
        // Recursively calculate the number of ways by considering the two possibilities:
        // 1. Take a single step from n-1 stairs.
        // 2. Take a double step from n-2 stairs.
        return countWays(n - 1) + countWays(n - 2);
    }
}

int main() {
    int n;
    std::cout << "Enter the number of stairs: ";
    std::cin >> n;

    int ways = countWays(n);
    std::cout << "Number of ways to reach the " << n << "th stair: " << ways << std::endl;

    return 0;
}
