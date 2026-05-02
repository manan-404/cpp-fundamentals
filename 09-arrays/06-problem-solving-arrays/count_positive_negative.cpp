#include <iostream>
using namespace std;

int main()
{
    int size = 5;
    int arr[size];

    int positive = 0, negative = 0, zero = 0;

    cout << "Enter 5 numbers:\n";
    for(int i = 0; i < size; i++){
        cin >> arr[i];

        if(arr[i] > 0) positive++;
        else if(arr[i] < 0) negative++;
        else zero++;
    }

    cout << "Positive: " << positive << endl;
    cout << "Negative: " << negative << endl;
    cout << "Zero: " << zero << endl;

    return 0;
}
