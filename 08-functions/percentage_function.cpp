#include <iostream>
using namespace std;

float calculatePercentage(float obtained, float total);

int main() {
    float obtained, total;

    cout << "Enter obtained marks: ";
    cin >> obtained;
    cout << "Enter total marks: ";
    cin >> total;

    cout << "Percentage = " << calculatePercentage(obtained, total) << "%";

    return 0;
}

float calculatePercentage(float obtained, float total) {
    return (obtained / total) * 100;
}
