#include <iostream>
using namespace std;

int sumAll(int range);

int main()
{
    int range;

    cout << "Enter the range: ";
    cin >> range;

    while(range < 0)
    {
        cout << "Please enter positive integers: ";
        cin >> range;
    }

    cout << "The sum of all " << range
         << " positive integers is "
         << sumAll(range);

    return 0;
}

int sumAll(int range)
{
    int sum = 0;

    for(int i = 1; i <= range; i++)
    {
        sum += i;
    }

    return sum;
}
