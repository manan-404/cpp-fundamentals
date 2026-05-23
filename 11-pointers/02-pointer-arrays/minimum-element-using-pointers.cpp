#include <iostream>
using namespace std;

int main()
{
    int numbers[5] = {12, 45, 7, 89, 34};

    int *ptr = numbers;

    int minimum = *ptr;

    for(int i = 1; i < 5; ++i)
    {
        if(*(ptr + i) < minimum)
        {
            minimum = *(ptr + i);
        }
    }

    cout << "Minimum element: " << minimum;

    return 0;
}