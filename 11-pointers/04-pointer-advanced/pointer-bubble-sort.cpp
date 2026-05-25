#include <iostream>
using namespace std;

const int size = 5;

void bubbleSort(int *arr, int n) {
    for(int i = 0; i < n-1; ++i) {
        for(int j = 0; j < n-i-1; ++j) {
            if(*(arr + j) > *(arr + j + 1)) {
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

int main() {
    int array[size] = {12, 5, 7, 1, 9};
    cout << "Original array: ";
    for(int i = 0; i < size; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;

    bubbleSort(array, size);

    cout << "Sorted array: ";
    for(int i = 0; i < size; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
