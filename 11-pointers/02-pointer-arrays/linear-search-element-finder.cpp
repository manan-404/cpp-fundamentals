#include <iostream>
using namespace std;

const int SIZE = 10;

int main()
{
    int array[SIZE];

    int *ptr = array;

    cout << "Enter 10 numbers:" << endl;

    for(int i = 0; i < SIZE; ++i)
    {
        cin >> *(ptr + i);
    }

    int target;
    bool found = false;

    cout << "Enter number to search: ";
    cin >> target;

    for(int i = 0; i < SIZE; ++i)
    {
        if(target == *(ptr + i))
        {
            cout << "Element found at index: " << i << endl;
            found = true;
        }
    }

    if(!found)
    {
        cout << "Element not found." << endl;
    }

    return 0;
}
