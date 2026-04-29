#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int array[size];

    cout << "Enter " << size << " elements:\n";
    for(int i = 0; i < size; i++){
        cin >> array[i];
    }

    int target;
    cout << "Enter element to search: ";
    cin >> target;

    int index = -1;

    for(int i = 0; i < size; i++){
        if(array[i] == target){
            index = i;
            break; // stop when found
        }
    }

    if(index != -1)
        cout << "Element found at index " << index;
    else
        cout << "Element not found";

    return 0;
}
