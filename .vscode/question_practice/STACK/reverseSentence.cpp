#include <iostream>
#include <stack>
using namespace std;

void reverseString(string& input) {
    stack<char> charStack;

    // Push each character onto the stack
    for (char c : input) {
        charStack.push(c);
    }

    // Pop characters from the stack to reverse the string
    for (size_t i = 0; i < input.length(); ++i) {
        input[i] = charStack.top();
        charStack.pop();
    }
}

int main() {
    string myString = "my  name is Manu Singh";
    
    cout << "Original string: " << myString << std::endl;

    // Reverse the string using a stack
    reverseString(myString);

    cout << "Reversed string: " << myString << std::endl;

    return 0;
}
