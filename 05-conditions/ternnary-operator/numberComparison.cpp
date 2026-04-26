#include <iostream>
using namespace std;
int main()
{
	int n1, n2;
	cout<<"Enter first number "; 	cin>>n1;
	cout<<"Enter second number ";	cin>>n2;
	string max;
	
	max = (n1==n2)? "Both are equal" : 
	(n1>n2)? "First is greater than other ": (n1<n2)? "Second is greater than other ":
	"invalid input"; 

	cout<<max;
return 0;
}

