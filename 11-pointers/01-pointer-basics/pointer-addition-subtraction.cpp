#include <iostream>
using namespace std;

int main()
{
    int numbers[5] = {10, 20, 30, 40, 50};

    int *ptr = numbers;

    cout << "Original value: " << *ptr << endl;

    ptr = ptr + 2;

    cout << "After adding 2 positions: " << *ptr << endl;

    ptr = ptr - 1;

    cout << "After subtracting 1 position: " << *ptr << endl;

    return 0;
}
