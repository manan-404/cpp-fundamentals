// Description: Checks palindrome number

#include <iostream>
using namespace std;

int main()
{
    int num, temp, rev = 0;

    cout << "Enter number: ";
    cin >> num;

    temp = num;

    while(num != 0)
    {
        rev = rev * 10 + num % 10;
        num /= 10;
    }

    if(temp == rev)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}
