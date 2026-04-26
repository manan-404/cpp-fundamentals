#include <iostream>
using namespace std;

int main() {
    int n1, n2;

    cout << "Enter first number: ";
    cin >> n1;

    cout << "Enter second number: ";
    cin >> n2;

    string result = (n1 == n2) ? "Both numbers are equal"
                    : (n1 > n2) ? "First number is greater"
                    : "Second number is greater";

    cout << result;

    return 0;
}
