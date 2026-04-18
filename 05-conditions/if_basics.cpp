// Lab: 5
// Topic: If Basics
// Description: Demonstrates how non-zero values act as true

#include <iostream>
using namespace std;

int main()
{
    int i = 1;

    if(i)
        cout << "Condition is TRUE (non-zero value)";
    else
        cout << "Condition is FALSE";

    return 0;
}
