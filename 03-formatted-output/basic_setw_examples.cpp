// Lab: 3
// Topic: Formatted Output (setw, alignment)
// Description: Demonstrates basic usage of setw and alignment

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << setw(10) << "Hello" << endl;
    cout << left << setw(20) << "HelloHi" << "Text starts after space\n";

    cout << left << setw(30) << "Example Text"
         << "This starts after 30 spaces" << endl;

    return 0;
}
