#include <iostream>
using namespace std;

int main()
{
    int rows = 2, cols = 3;
    int matrix[2][3], transpose[3][2];

    cout << "Enter elements of matrix:\n";
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cin >> matrix[i][j];
        }
    }

    // Transpose logic
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            transpose[j][i] = matrix[i][j];
        }
    }

    cout << "Transpose Matrix:\n";
    for(int i = 0; i < cols; i++){
        for(int j = 0; j < rows; j++){
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
