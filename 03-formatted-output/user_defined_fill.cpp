// Lab: 3
// Topic: Dynamic Formatting
// Description: User defines fill character and width

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int num, width;
    char symbol;

    cout << "Enter number: ";
    cin >> num;

    cout << "Enter symbol: ";
    cin >> symbol;

    cout << "Enter width: ";
    cin >> width;

    cout << setfill(symbol) << setw(width) << num;

    return 0;
}
