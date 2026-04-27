#include <iostream>
using namespace std;

int factorial(int n);

int main() {
    int num;

    cout << "Enter number: ";
    cin >> num;

    cout << "Factorial = " << factorial(num);

    return 0;
}

int factorial(int n) {
    int result = 1;

    for (int i = 1; i <= n; i++) {
        result *= i;
    }

    return result;
}
