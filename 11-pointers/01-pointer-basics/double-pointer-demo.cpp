#include <iostream>
using namespace std;

int main()
{
    int number = 100;

    int *ptr = &number;
    int **doublePtr = &ptr;

    cout << "Value of number: " << number << endl;
    cout << "Using pointer: " << *ptr << endl;
    cout << "Using double pointer: " << **doublePtr << endl;

    return 0;
}
