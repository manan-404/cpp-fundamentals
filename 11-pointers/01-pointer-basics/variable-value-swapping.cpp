#include <iostream>
using namespace std;

void swapValues(int *ptr1, int *ptr2);

int main()
{
    int value1 = 10;
    int value2 = 50;

    cout << "Before swapping:" << endl;
    cout << "Value1 = " << value1 << endl;
    cout << "Value2 = " << value2 << endl;

    swapValues(&value1, &value2);

    cout << "\nAfter swapping:" << endl;
    cout << "Value1 = " << value1 << endl;
    cout << "Value2 = " << value2 << endl;

    return 0;
}

void swapValues(int *ptr1, int *ptr2)
{
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}
