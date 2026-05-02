#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target);

int main()
{
    int arr[5] = {5, 10, 15, 20, 25};
    int target = 15;

    int index = linearSearch(arr, 5, target);

    if(index != -1)
        cout << "Element found at index: " << index;
    else
        cout << "Element not found";

    return 0;
}

int linearSearch(int arr[], int size, int target)
{
    for(int i = 0; i < size; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}
