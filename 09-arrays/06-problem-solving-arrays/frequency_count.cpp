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

    for(int i = 0; i < size; i++){
        int count = 0;
        bool alreadyCounted = false;

        for(int k = 0; k < i; k++){
            if(arr[i] == arr[k]){
                alreadyCounted = true;
                break;
            }
        }

        if(alreadyCounted) continue;

        for(int j = 0; j < size; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }

        cout << arr[i] << " occurs " << count << " times\n";
    }

    return 0;
}
