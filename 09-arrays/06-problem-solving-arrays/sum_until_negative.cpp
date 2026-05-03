#include <iostream>
using namespace std;

int main()
{
    int arr[50];
    int sum = 0;
    int i = 0, input;

    do {
        cout << "Enter number: ";
        cin >> input;

        if(input >= 0){
            arr[i++] = input;
            sum += input;
        }

    } while(input >= 0);

    cout << "Sum of positive numbers: " << sum;

    return 0;
}
