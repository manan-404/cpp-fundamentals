#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    int maxNum = (num1 > num2) ? num1 : num2;

    cout << "Maximum = " << maxNum;

    return 0;
}
