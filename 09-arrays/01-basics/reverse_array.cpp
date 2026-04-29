#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter size: ";
    cin >> size;

    int array[size];

    for(int i = 0; i < size; i++){
        cout << "Enter value " << i+1 << ": ";
        cin >> array[i];
    }

    cout << "\nReversed array: ";
    for(int i = size - 1; i >= 0; i--){
        cout << array[i] << " ";
    }

    return 0;
}  
