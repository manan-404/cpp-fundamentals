#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int size = 5;
    int arr[size];

    cout << "Enter elements:\n";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    int largest = INT_MIN, second = INT_MIN;

    for(int i = 0; i < size; i++){
        if(arr[i] > largest){
            second = largest;
            largest = arr[i];
        }
        else if(arr[i] > second && arr[i] != largest){
            second = arr[i];
        }
    }

    cout << "Second largest is: " << second;

    return 0;
}
