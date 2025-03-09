//hw7-16.cpp - displays three tip amounts
//Created/revised by <Darius Haywood> on <3/9/25>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double bill = 0.0;
	double tip = 0.0;
	double rate = 0.1;
	
	cout << "Bill amount: ";
	cin >> bill;

	cout << fixed;
	while (rate <= 0.2)
	{
		tip = bill * rate;
		cout << setprecision(0);
		cout << rate * 100 << "% tip: ";
		cout << setprecision(2);
		cout << "$" << tip << endl;
		rate += 0.05;
	}   // end for
	return 0;
}	//end of main function
