// Description: Checks prime number

#include <iostream>
using namespace std;

int main()
{
    int num, i = 2;
    bool isPrime = true;

    cout << "Enter number: ";
    cin >> num;

    if(num <= 1)
        isPrime = false;

    while(i <= num / 2)
    {
        if(num % i == 0)
        {
            isPrime = false;
            break;
        }
        i++;
    }

    if(isPrime)
        cout << "Prime Number";
    else
        cout << "Not Prime";

    return 0;
}
