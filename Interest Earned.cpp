// Interest Earned.cpp : a program to calcualte the amount of savings
//

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{

	// setup variables
	double principal, interestRatePercent, interestRate, period, interest, amount;

	// get information from the user
	cout << "Enter the current balance of your savings account: ";
	cin >> principal;
	cout << "Enter the interest rate without the as a percent but without the % sign: ";
	cin >> interestRatePercent;
	cout << "Enter the number of compounding periods in a year: ";
	cin >> period;

	// calculate the amount
	interestRate = interestRatePercent / 100;
	amount = principal * pow(1 + interestRate / period, period);
	interest = amount - principal;

	// display the report
	cout << "Interest Rate:          " << interestRatePercent << "%\n";
	cout << "Time Compounded:         " << setw(4) << right << period << "\n";
	cout << setprecision(2) << fixed;
	cout << setw(22) << left << "Principal:          $ " << right << principal << "\n";
	cout << setw(24) << left << "Interest:           $ " << right << interest << "\n";
	cout << setw(22) << left << "Amount in Savings:  $ " << right << amount << "\n";
	return 0;
}

