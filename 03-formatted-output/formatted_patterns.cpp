// Lab: 3
// Topic: Pattern Formatting
// Description: Displays multiple patterns using setw

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << left << setw(12) << "# # # # # #" << endl;
    cout << setw(12) << "# # # # #" << endl;
    cout << setw(12) << "# # # #" << endl;

    cout << "\nDiamond Pattern:\n";
    cout << right << setw(11) << "# # #" << endl;
    cout << setw(6) << "#" << setw(6) << "#" << endl;

    return 0;
}
