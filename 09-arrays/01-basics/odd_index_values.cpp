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

    cout << "Values at odd indices: ";
    for(int i = 1; i < size; i += 2){
        cout << array[i] << " ";
    }

    return 0;
}
