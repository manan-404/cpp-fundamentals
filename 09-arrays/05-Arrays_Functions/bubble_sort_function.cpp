#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size);

int main()
{
    int arr[5] = {5, 3, 8, 1, 2};

    bubbleSort(arr, 5);

    cout << "Sorted array: ";
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }

    return 0;
}

void bubbleSort(int arr[], int size)
{
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - 1 - i; j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
