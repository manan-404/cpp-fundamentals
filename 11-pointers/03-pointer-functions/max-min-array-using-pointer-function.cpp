#include <iostream>
using namespace std;

void findMaxMin(int *arr, int size, int &max, int &min);

int main()
{
    int array[5] = {12, 45, 7, 89, 34};
    int max, min;

    findMaxMin(array, 5, max, min);

    cout << "Maximum: " << max << ", Minimum: " << min;

    return 0;
}

void findMaxMin(int *arr, int size, int &max, int &min)
{
    max = min = *arr;

    for(int i = 1; i < size; ++i)
    {
        if(*(arr + i) > max) max = *(arr + i);
        if(*(arr + i) < min) min = *(arr + i);
    }
}