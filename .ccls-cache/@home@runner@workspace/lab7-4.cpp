//Lab7-4.cpp - displays the average electric bill
//Created/revised by <Darius Haywood> on <3/9/25>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
		int months = 0;
		double totalBill = 0.0;
		double averageBill = 0.0;
		double bill = 0.0;

		while (true) {
				cout << "Enter the electric bill for month " << months + 1 << " (-1 to stop): ";
				cin >> bill;
				if (bill == -1) {
						break; // Stop when sentinel value is entered
				}
				if (bill >= 0.0) {
						totalBill += bill;
						months += 1;
				} else {
						cout << "Invalid bill amount. Please enter a positive number or -1 to stop.\n";
				}
		}
		if (months > 0) {
				averageBill = totalBill / months;
				cout << fixed << setprecision(2);
				cout << "Average electric bill: $" << averageBill << endl;
		} else {
				cout << "No electric bills entered." << endl;
		}
		return 0;
}