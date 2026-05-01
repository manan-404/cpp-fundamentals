#include <iostream>
using namespace std;

float calculateAverage(int arr[], int size);

int main()
{
    int arr[5] = {2, 4, 6, 8, 10};

    cout << "Average is: " << calculateAverage(arr, 5);

    return 0;
}

float calculateAverage(int arr[], int size)
{
    int sum = 0;

    for(int i = 0; i < size; i++){
        sum += arr[i];
    }

    return (float)sum / size;
}
