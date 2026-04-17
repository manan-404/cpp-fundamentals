// Lab: 4
// Topic: Arithmetic Expressions
// Description: Calculates area and perimeter of rectangle

#include <iostream>
using namespace std;

int main()
{
    int length = 6, breadth = 8;

    int area = length * breadth;
    int perimeter = 2 * (length + breadth);

    cout << "Area of rectangle: " << area << endl;
    cout << "Perimeter of rectangle: " << perimeter << endl;

    return 0;
}
