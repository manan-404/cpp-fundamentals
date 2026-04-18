// Lab: 4
// Topic: Data Types and Limits
// Description: Displays limits and memory size of different data types

#include <iostream>
#include <climits>
#include <cfloat>
using namespace std;

int main()
{
    cout << "\n=== Data Type Limits ===\n";

    cout << "INT_MAX: " << INT_MAX << endl;
    cout << "INT_MIN: " << INT_MIN << endl;
    cout << "UINT_MAX: " << UINT_MAX << endl;

    cout << "LLONG_MAX: " << LLONG_MAX << endl;
    cout << "LLONG_MIN: " << LLONG_MIN << endl;
    cout << "ULLONG_MAX: " << ULLONG_MAX << endl;

    cout << "SHRT_MIN: " << SHRT_MIN << endl;
    cout << "SHRT_MAX: " << SHRT_MAX << endl;

    cout << "FLT_MIN: " << FLT_MIN << endl;
    cout << "FLT_MAX: " << FLT_MAX << endl;

    cout << "DBL_MIN: " << DBL_MIN << endl;
    cout << "DBL_MAX: " << DBL_MAX << endl;

    cout << "LDBL_MIN: " << LDBL_MIN << endl;
    cout << "LDBL_MAX: " << LDBL_MAX << endl;

    cout << "\n=== Memory Size ===\n";

    cout << "int: " << sizeof(int) << " bytes\n";
    cout << "short: " << sizeof(short) << " bytes\n";
    cout << "long: " << sizeof(long) << " bytes\n";
    cout << "long long: " << sizeof(long long) << " bytes\n";

    cout << "float: " << sizeof(float) << " bytes\n";
    cout << "double: " << sizeof(double) << " bytes\n";
    cout << "long double: " << sizeof(long double) << " bytes\n";

    return 0;
}
