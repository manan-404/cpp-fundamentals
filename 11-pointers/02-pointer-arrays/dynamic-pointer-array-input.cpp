#include <iostream>
using namespace std;

int main()
{
    int size;

    cout << "Enter size for array: ";
    cin >> size;

    int array[size];

    int *ptr = array;

    cout << "Enter " << size << " values:" << endl;

    for(int i = 0; i < size; ++i)
    {
        cin >> *(ptr + i);
    }

    cout << "\nArray elements are:" << endl;

    for(int i = 0; i < size; ++i)
    {
        cout << "Value: " << *(ptr + i)
             << " Address: " << (ptr + i)
             << endl;
    }

    return 0;
}
