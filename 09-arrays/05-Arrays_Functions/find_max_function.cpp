#include <iostream>
#include <climits>
using namespace std;

int findMax(int arr[], int size);

int main()
{
    int arr[5] = {10, 45, 2, 99, 23};

    cout << "Maximum value is: " << findMax(arr, 5);

    return 0;
}

int findMax(int arr[], int size)
{
    int max = INT_MIN;

    for(int i = 0; i < size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    return max;
}
