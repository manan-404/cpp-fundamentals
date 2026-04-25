#include <iostream>
using namespace std;

// Function Declaration
int add(int a, int b);

// Main Function
int main() {
    cout << "Addition = " << add(4, 5);
    return 0;
}

// Function Definition
int add(int a, int b) {
    return a + b;
}
