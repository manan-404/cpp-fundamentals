// Lab: 3
// Topic: setfill and setw
// Description: Demonstrates filling characters with width

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    char ch = 'M';

    cout << setfill('$') << setw(20) << ch << endl;
    cout << setfill('^') << setw(50) << ch << endl;

    return 0;
}
