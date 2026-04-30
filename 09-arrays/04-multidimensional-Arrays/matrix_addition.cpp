#include <iostream>
using namespace std;

int main()
{
    int rows = 2, cols = 2;
    int A[2][2], B[2][2], sum[2][2];

    cout << "Enter elements of first matrix:\n";
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cin >> A[i][j];
        }
    }

    cout << "Enter elements of second matrix:\n";
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cin >> B[i][j];
        }
    }

    // Addition
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            sum[i][j] = A[i][j] + B[i][j];
        }
    }

    cout << "Resultant Matrix:\n";
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
