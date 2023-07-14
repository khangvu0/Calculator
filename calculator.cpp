/*  
    *This program is an executable calculator written in C++ that features addition, subtraction, multiplication and division.
    *Accounts for dividing by zero.

    *Author: Khang Vu
*/

#include <iostream>
using namespace std;

int main() {
    double num1, num2, result;
    char op;
    bool isValid = true;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter the second number: ";
    cin >> num2;

    switch (op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Error: Division by zero is not allowed.\n";
                isValid = false;
            }
            break;
        default:
            cout << "Error: Invalid operator.\n";
            isValid = false;
            break;
    }

    if (isValid) {
        cout << "Result: " << result << endl;
    }

    return 0;
}