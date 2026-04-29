#include <iostream>
using namespace std;

int main()
{
    int size = 6;
    int array1[size] = {3, 41, 88, 11, 12, 69};
    int array2[size];

    cout << "Original array: ";
    for(int i = 0; i < size; i++){
        cout << array1[i] << " ";
        array2[i] = array1[i]; // copying elements
    }

    cout << "\nCopied array: ";
    for(int i = 0; i < size; i++){
        cout << array2[i] << " ";
    }

    return 0;
}
