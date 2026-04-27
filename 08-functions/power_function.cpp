#include <iostream>
using namespace std;

double power(double base, int exp);

int main() {
    double base;
    int exp;

    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exp;

    cout << "Result = " << power(base, exp);

    return 0;
}

double power(double base, int exp) {
    double result = 1;

    for (int i = 0; i < exp; i++) {
        result *= base;
    }

    return result;
}
