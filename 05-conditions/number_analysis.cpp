// Lab: 5
// Topic: Multiple Conditions
// Description: Analyzes number properties

#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    // Positive / Negative
    if(num > 0)
        cout << "Positive\n";
    else if(num < 0)
        cout << "Negative\n";
    else
        cout << "Zero\n";

    // Even / Odd
    if(num % 2 == 0)
        cout << "Even\n";
    else
        cout << "Odd\n";

    // Greatest of 3
    int a, b, c;
    cout << "\nEnter three numbers: ";
    cin >> a >> b >> c;

    if(a > b && a > c)
        cout << "Greatest: " << a;
    else if(b > c)
        cout << "Greatest: " << b;
    else
        cout << "Greatest: " << c;

    return 0;
}
