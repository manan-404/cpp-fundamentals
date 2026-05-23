#include <iostream>
using namespace std;

int main()
{
    int array[5] = {1, 2, 3, 4, 5};

    int *start = array;
    int *end = array + 4;

    while(start < end)
    {
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    cout << "Reversed Array: ";

    for(int i = 0; i < 5; ++i)
    {
        cout << array[i] << " ";
    }

    return 0;
}