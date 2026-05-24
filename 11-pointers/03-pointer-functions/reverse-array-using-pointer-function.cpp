#include <iostream>
using namespace std;

void reverseArray(int *arr, int size);

int main()
{
    int array[5] = {1, 2, 3, 4, 5};

    reverseArray(array, 5);

    cout << "Reversed Array: ";
    for(int i = 0; i < 5; ++i)
        cout << array[i] << " ";

    return 0;
}

void reverseArray(int *arr, int size)
{
    int *start = arr;
    int *end = arr + size - 1;

    while(start < end)
    {
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}