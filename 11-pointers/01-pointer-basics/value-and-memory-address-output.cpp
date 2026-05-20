#include <iostream>
using namespace std;

int main()
{
    float array[4] = {5, 3, 9, 1};

    float *ptr;
    ptr = array;

    for(int i = 0; i < 4; ++i)
    {
        cout << "Value at index " << i
             << " is: " << *(ptr + i)
             << " at address: " << (ptr + i)
             << endl;
    }

    return 0;
}
