#include <iostream>
using namespace std;

int main()
{
    int size = 5;
    int arr[size];

    int even = 0, odd = 0;

    cout << "Enter elements:\n";
    for(int i = 0; i < size; i++){
        cin >> arr[i];

        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    cout << "Even count: " << even << endl;
    cout << "Odd count: " << odd << endl;

    return 0;
}
