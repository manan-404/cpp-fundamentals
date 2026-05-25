#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter size for dynamic array: ";
    cin >> size;

    int *arr = new int[size];  // dynamically allocate array

    cout << "Enter " << size << " numbers: ";
    for(int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    cout << "Array values are: ";
    for(int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;  // free allocated memory
    return 0;
}
