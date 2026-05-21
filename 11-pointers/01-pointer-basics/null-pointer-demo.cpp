#include <iostream>
using namespace std;

int main()
{
    int *ptr = nullptr;

    if(ptr == nullptr)
    {
        cout << "Pointer is currently NULL." << endl;
    }

    int value = 25;
    ptr = &value;

    cout << "Value: " << *ptr << endl;
    cout << "Address: " << ptr << endl;

    return 0;
}
