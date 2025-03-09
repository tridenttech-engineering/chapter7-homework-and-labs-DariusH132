//Lab7-6.cpp - calculates and displays the average price
//Created/revised by <Darius Haywood> on <3/9/25>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double price = 0.0;
	double totalPrice = 0.0;
	double averagePrice = 0.0;
	int numPrices = 0;
	cout << "Enter price (-1 to stop): ";
	cin >> price;
	while (price != -1)
		{
			totalPrice += price;
			numPrices += 1;
			cout << "Enter price (-1 to stop): ";
			cin >> price;
		
		}
	if (numPrices > 0)
	{
		averagePrice = totalPrice / numPrices;
		cout << fixed << setprecision(2);
		cout << "Average price: $" << averagePrice << endl;
		
	}
	else{
		cout << "No prices entered." << endl;
	}
	
	return 0;
}	//end of main function