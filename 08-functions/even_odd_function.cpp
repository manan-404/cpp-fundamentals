#include <iostream>
using namespace std;

string checkEvenOdd(int num);

int main() {
    int num;

    cout << "Enter number: ";
    cin >> num;

    cout << checkEvenOdd(num);

    return 0;
}

string checkEvenOdd(int num) {
    return (num % 2 == 0) ? "Even" : "Odd";
}
