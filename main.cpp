#include <iostream>
using namespace std;

int main() {
    // Declared variables
    char op;
    double num1, num2, result;

    // Start of Program
    cout << "************ CALCULATOR ************" << endl;

    cout << "Enter either (+ - * /): ";
    cin >> op;

    cout << "Enter #1: ";
    cin >> num1;

    cout << "Enter #2: ";
    cin >> num2;

    // Switch statement used to make decisions depending on the value of 'op'
    switch (op) {
        case '+':
            result = num1 + num2;
            cout << "Result: " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "Result: " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "Result: " << result << endl;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Result: " << result << endl;
            } else {
                cout << "Error: Division by zero!" << endl;
            }
            break;
        default:
            cout << "Invalid Response" << endl;
    }

    return 0;
}