// Description: Sum of first N natural numbers

#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0, i = 1;

    cout << "Enter N: ";
    cin >> n;

    while(i <= n)
    {
        sum += i;
        i++;
    }

    cout << "Sum = " << sum;

    return 0;
}
