#include <iostream>
using namespace std;

void inputArray(int arr[], int size);

int main()
{
    int size = 5;
    int arr[size];

    cout << "Enter elements:\n";
    inputArray(arr, size);

    cout << "Array elements are: ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }

    return 0;
}

void inputArray(int arr[], int size)
{
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
}
