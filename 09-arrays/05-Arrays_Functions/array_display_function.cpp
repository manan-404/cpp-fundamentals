#include <iostream>
using namespace std;

void displayArray(int arr[], int size);

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    displayArray(arr, 5);

    return 0;
}

void displayArray(int arr[], int size)
{
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}
