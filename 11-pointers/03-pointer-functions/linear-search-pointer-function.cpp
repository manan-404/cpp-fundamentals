#include <iostream>
using namespace std;

int linearSearch(int *arr, int size, int target);

int main()
{
    int array[5] = {10, 20, 30, 40, 50};

    int target;
    cout << "Enter value to search: ";
    cin >> target;

    int index = linearSearch(array, 5, target);

    if(index != -1)
        cout << "Element found at index " << index;
    else
        cout << "Element not found";

    return 0;
}

int linearSearch(int *arr, int size, int target)
{
    for(int i = 0; i < size; ++i)
        if(*(arr + i) == target)
            return i;
    return -1;
}