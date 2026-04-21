// Lab: 5
// Topic: Loop Patterns
// Description: Prints even and odd numbers

#include <iostream>
using namespace std;

int main()
{
    int even = 0;
    int odd = 1;

    cout << "Even Numbers:\n";
    while(even <= 10)
    {
        cout << even << endl;
        even += 2;
    }

    cout << "\nOdd Numbers:\n";
    while(odd <= 10)
    {
        cout << odd << endl;
        odd += 2;
    }

    return 0;
}
