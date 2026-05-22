#include <iostream>
using namespace std;

int main()
{
    int numbers[5] = {10, 20, 30, 40, 50};

    int *ptr = numbers;

    int sum = 0;

    for(int i = 0; i < 5; ++i)
    {
        sum += *(ptr + i);
    }

    cout << "Sum of array elements: " << sum;

    return 0;
}
