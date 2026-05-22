#include <iostream>
using namespace std;

const int SIZE = 4;

void bubbleSort(int *ptr);

int main()
{
    int array[SIZE] = {8, 3, -2, 4};

    cout << "Unsorted Array: ";

    for(int i = 0; i < SIZE; ++i)
    {
        cout << array[i] << " ";
    }

    bubbleSort(array);

    cout << "\nSorted Array: ";

    for(int i = 0; i < SIZE; ++i)
    {
        cout << array[i] << " ";
    }

    return 0;
}

void bubbleSort(int *ptr)
{
    for(int i = 0; i < SIZE - 1; ++i)
    {
        for(int j = 0; j < SIZE - i - 1; ++j)
        {
            if(*(ptr + j) > *(ptr + j + 1))
            {
                int temp = *(ptr + j);
                *(ptr + j) = *(ptr + j + 1);
                *(ptr + j + 1) = temp;
            }
        }
    }
}
