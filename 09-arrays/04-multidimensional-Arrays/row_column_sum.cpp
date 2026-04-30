#include <iostream>
using namespace std;

int main()
{
    int matrix[2][3];

    cout << "Enter elements:\n";
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            cin >> matrix[i][j];
        }
    }

    // Row sum
    for(int i = 0; i < 2; i++){
        int rowSum = 0;
        for(int j = 0; j < 3; j++){
            rowSum += matrix[i][j];
        }
        cout << "Sum of row " << i << " = " << rowSum << endl;
    }

    // Column sum
    for(int j = 0; j < 3; j++){
        int colSum = 0;
        for(int i = 0; i < 2; i++){
            colSum += matrix[i][j];
        }
        cout << "Sum of column " << j << " = " << colSum << endl;
    }

    return 0;
}
