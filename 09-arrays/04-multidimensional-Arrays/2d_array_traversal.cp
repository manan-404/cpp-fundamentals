#include <iostream>
using namespace std;

int main()
{
    int rows = 2, cols = 5;

    int array[rows][cols] = {
        {2, 3, 4, 5, 6},
        {7, 8, 9, 10, 11}
    };

    cout << "2D Array elements:\n";

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
