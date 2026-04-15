// Lab: 3
// Topic: Arithmetic Operations
// Description: Performs basic arithmetic operations on two numbers

#include <iostream>
using namespace std;

int main()
{
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Addition: " << num1 + num2 << endl;
    cout << "Subtraction: " << num1 - num2 << endl;
    cout << "Multiplication: " << num1 * num2 << endl;
    cout << "Division: " << num1 / num2 << endl;

    return 0;
}
