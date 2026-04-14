// Lab: 2
// Topic: Basic Formula
// Program: Resistance Calculation
// Description: Calculates resistance using Ohm's Law (R = V / I)

#include <iostream>
using namespace std;

int main()
{
    float voltage, current, resistance;

    cout << "Enter voltage (V) and current (I): ";
    cin >> voltage >> current;

    resistance = voltage / current;

    cout << "Resistance = " << resistance << endl;

    return 0;
}
