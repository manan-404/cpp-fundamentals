#include <iostream>
using namespace std;

int main()
{
    int size = 5;
    int arr[size];

    cout << "Enter elements:\n";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    cout << "Duplicate elements are:\n";

    for(int i = 0; i < size; i++){
        for(int j = i + 1; j < size; j++){
            if(arr[i] == arr[j]){
                cout << arr[i] << " ";
                break;
            }
        }
    }

    return 0;
}
