#include <iostream>
using namespace std;

int main()
{
    int size = 5;
    int array[size];

    cout << "Enter 5 elements: ";
    for(int i = 0; i < size; i++){
        cin >> array[i];
    }

    // Ascending Sort
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - 1 - i; j++){
            if(array[j] > array[j + 1]){
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    cout << "\nAscending: ";
    for(int i = 0; i < size; i++){
        cout << array[i] << " ";
    }

    // Descending Sort
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - 1 - i; j++){
            if(array[j] < array[j + 1]){
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    cout << "\nDescending: ";
    for(int i = 0; i < size; i++){
        cout << array[i] << " ";
    }

    return 0;
}
