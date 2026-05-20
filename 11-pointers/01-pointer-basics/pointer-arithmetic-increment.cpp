#include <iostream>
using namespace std;

int main()
{
    int array[4] = {2, 6, 3, 8};

    int *ptr = array;

    cout << "Array values using pointer increment: ";

    for(int i = 0; i < 4; ++i)
    {
        cout << *ptr++ << " ";
    }

    return 0;
}
