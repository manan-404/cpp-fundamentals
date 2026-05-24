#include <iostream>
using namespace std;

int sumArray(int *arr, int size);

int main()
{
    int array[5] = {1, 2, 3, 4, 5};

    cout << "Sum of array elements: " << sumArray(array, 5);

    return 0;
}

int sumArray(int *arr, int size)
{
    int sum = 0;
    for(int i = 0; i < size; ++i)
    {
        sum += *(arr + i);
    }
    return sum;
}