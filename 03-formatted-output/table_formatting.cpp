// Lab: 3
// Topic: Table Formatting
// Description: Displays a formatted product table

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << setfill('=') << setw(50) << " " << endl;
    cout << setfill(' ') << setw(30) << "STORE ITEMS" << endl;
    cout << setfill('=') << setw(50) << " " << endl;

    cout << "Item" << setw(15) << "Price\n";
    cout << "Mouse" << setw(12) << "150.28\n";
    cout << "Keyboard" << setw(9) << "320.54\n";

    return 0;
}
