// Lab: 3
// Topic: Formatted Output
// Description: Displays a complete formatted marksheet

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double pf, ict, oop, math, eng;

    cout << "Enter marks (PF ICT OOP Math Eng): ";
    cin >> pf >> ict >> oop >> math >> eng;

    double total = pf + ict + oop + math + eng;
    double avg = total / 5;
    double perc = (total / 500) * 100;

    cout << setfill('*') << setw(50) << " " << endl;
    cout << setfill(' ') << setw(25) << "MARKSHEET\n";
    cout << setfill('*') << setw(50) << " " << endl;

    cout << "Total: " << total << endl;
    cout << "Average: " << avg << endl;
    cout << "Percentage: " << perc << "%" << endl;

    return 0;
}
