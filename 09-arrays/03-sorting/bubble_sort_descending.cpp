#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter size: ";
    cin >> size;

    int array[size];

    for(int i = 0; i < size; i++){
        cin >> array[i];
    }

    // Bubble Sort (Descending)
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - 1 - i; j++){
            if(array[j] < array[j + 1]){
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    cout << "Descending order: ";
    for(int i = 0; i < size; i++){
        cout << array[i] << " ";
    }

    return 0;
}
