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

    cout << "Even numbers are: ";
    for(int i = 0; i < size; i++){
        if(array[i] % 2 == 0){
            cout << array[i] << " ";
        }
    }

    return 0;
}
