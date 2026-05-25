#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of dynamic array: ";
    cin >> size;

    int *ptr = new int[size]; // dynamically allocated array

    cout << "Enter " << size << " values: ";
    for(int i = 0; i < size; i++) {
        cin >> *(ptr + i); // storing values using pointer arithmetic
    }

    cout << "Values in the array are: ";
    for(int i = 0; i < size; i++) {
        cout << *(ptr + i) << " ";
    }
    cout << endl;

    delete[] ptr; // freeing allocated memory
    return 0;
}
