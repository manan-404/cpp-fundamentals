#include <iostream>
using namespace std;

int main()
{
    int A[2][2], B[2][2], result[2][2] = {0};

    cout << "Enter elements of first matrix:\n";
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            cin >> A[i][j];
        }
    }

    cout << "Enter elements of second matrix:\n";
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            cin >> B[i][j];
        }
    }

    // Multiplication
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            for(int k = 0; k < 2; k++){
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << "Resultant Matrix:\n";
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
