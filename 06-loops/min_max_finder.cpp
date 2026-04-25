#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n, num;
    int maxVal = INT_MIN;
    int minVal = INT_MAX;

    cout << "How many numbers? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> num;

        if (num > maxVal) maxVal = num;
        if (num < minVal) minVal = num;
    }

    cout << "Max = " << maxVal << endl;
    cout << "Min = " << minVal << endl;

    return 0;
}
