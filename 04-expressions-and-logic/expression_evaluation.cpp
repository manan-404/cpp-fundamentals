// Lab: 4
// Topic: Expressions
// Description: Evaluates mathematical expression

#include <iostream>
using namespace std;

int main()
{
    int a, b, result;

    cout << "Enter values for a and b: ";
    cin >> a >> b;

    result = 6 * a * b * (a + b) - 4 * a * b;

    cout << "Result: " << result;

    return 0;
}
