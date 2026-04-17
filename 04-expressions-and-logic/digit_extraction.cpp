// Lab: 4
// Topic: Arithmetic Operations
// Description: Extracts digits from a number using division and modulus

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int number;

    cout << "Enter a six-digit number: ";
    cin >> number;

    cout << setw(10) << number % 10 << endl;
    cout << setw(10) << number / 10 % 10 << endl;
    cout << setw(10) << number / 100 % 10 << endl;
    cout << setw(10) << number / 1000 % 10 << endl;
    cout << setw(10) << number / 10000 % 10 << endl;
    cout << setw(10) << number / 100000 % 10 << endl;

    return 0;
}
