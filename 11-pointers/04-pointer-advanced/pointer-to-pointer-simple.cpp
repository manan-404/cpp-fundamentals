#include <iostream>
using namespace std;

int main() {
    int value = 42;
    int *ptr = &value;      // pointer to value
    int **ptr2 = &ptr;      // pointer to pointer

    cout << "Value: " << value << endl;
    cout << "Pointer *ptr: " << *ptr << endl;
    cout << "Pointer to pointer **ptr2: " << **ptr2 << endl;

    cout << "Address of value: " << &value << endl;
    cout << "Address stored in ptr: " << ptr << endl;
    cout << "Address stored in ptr2: " << ptr2 << endl;

    return 0;
}
