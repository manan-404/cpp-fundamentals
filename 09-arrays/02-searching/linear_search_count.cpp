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

    int target;
    cout << "Enter element to count: ";
    cin >> target;

    int count = 0;

    for(int i = 0; i < size; i++){
        if(array[i] == target){
            count++;
        }
    }

    cout << "Element appears " << count << " times";

    return 0;
}
