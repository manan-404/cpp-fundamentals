#include <iostream>
using namespace std;

int main()
{
    int numbers[5] = {12, 45, 7, 89, 34};

    int *ptr = numbers;

    int maximum = *ptr;

    for(int i = 1; i < 5; ++i)
    {
        if(*(ptr + i) > maximum)
        {
            maximum = *(ptr + i);
        }
    }

    cout << "Maximum element: " << maximum;

    return 0;
}