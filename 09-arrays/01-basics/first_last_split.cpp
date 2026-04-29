#include <iostream>
using namespace std;

int main()
{
    int size = 10;
    int array[size];

    cout << "Enter 10 numbers: ";
    for(int i = 0; i < size; i++){
        cin >> array[i];
    }

    cout << "First half: ";
    for(int i = 0; i < size/2; i++){
        cout << array[i] << " ";
    }

    cout << "\nSecond half: ";
    for(int i = size/2; i < size; i++){
        cout << array[i] << " ";
    }

    return 0;
}
