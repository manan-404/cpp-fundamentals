#include <iostream>
using namespace std;

bool isPrime(int num);

int main() {
    int num;

    cout << "Enter number: ";
    cin >> num;

    if (isPrime(num))
        cout << "Prime";
    else
        cout << "Not Prime";

    return 0;
}

bool isPrime(int num) {
    if (num <= 1) return false;

    for (int i = 2; i < num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}
