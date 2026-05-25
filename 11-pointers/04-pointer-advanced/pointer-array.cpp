#include <iostream>
using namespace std;

int main() {
    int array[5] = {10, 20, 30, 40, 50};
    int *ptr = array; // pointer to first element

    cout << "Array elements using pointer:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << *(ptr + i) << " ";
    }
    cout << endl;

    cout << "Array elements using array name:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
