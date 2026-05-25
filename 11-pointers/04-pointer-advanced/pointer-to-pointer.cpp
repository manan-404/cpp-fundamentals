#include <iostream>
using namespace std;

int main() {
    int value = 42;          // normal integer
    int *ptr = &value;       // pointer to integer
    int **ptr2ptr = &ptr;    // pointer to pointer

    cout << "Value of variable: " << value << endl;
    cout << "Value using single pointer: " << *ptr << endl;
    cout << "Value using pointer to pointer: " << **ptr2ptr << endl;

    cout << "Address of variable: " << &value << endl;
    cout << "Address stored in single pointer: " << ptr << endl;
    cout << "Address stored in pointer to pointer: " << ptr2ptr << endl;

    return 0;
}
