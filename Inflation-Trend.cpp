// Inflation-Trend.cpp : a program that outputs the inflation rates for two successive years and whether the inflation trend is increasing or decreasing


#include <iostream>
using namespace std;

// functions
double getPrices(int year);
double calcInflation(double price0, double price1);
void results(string trend);

int main()
{
	// variables
	double priceYear0, priceYearMinus1, priceYearMinus2, inflation01, inflation12;
	string trend;

	// get current prices and prices for the two previous years
	priceYear0 = getPrices(0);
	priceYearMinus1 = getPrices(1);
	priceYearMinus2 = getPrices(2);

	// calculate inflation rates
	inflation01 = calcInflation(priceYear0, priceYearMinus1);
	inflation12 = calcInflation(priceYearMinus1, priceYearMinus2);
	if (inflation01 > inflation12)
		trend = "increasing";
	else if (inflation01 < inflation12)
		trend = "decreasing";
	else
		trend = "flat";

	// display results
	results(trend);
}

double getPrices(int year)
{
	// get the price for a year

	//variables
	double price;

	// get the price
	if (year == 0)
	{
		cout << "Enter the price of an item for the current year    ";
		cin >> price;
	}
	else if (year == 1)
	{
		cout << "Enter the price of the same item for last year     ";
		cin >> price;
	}
	else
	{
		cout << "Enter the price of the same item for two years ago ";
		cin >> price;
	}
	return price;
}


double calcInflation(double price0, double price1)
{
	// input two prices

	// calculate inflation rate
	return (price0 - price1) / price1;
}

void results(string trend)
{
	// input the trend


	// display the results
	cout << "The rate of inflation is " << trend;
}