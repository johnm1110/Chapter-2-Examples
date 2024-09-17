// A program to disply the number of customers who purchase certain energy drinks

#include <iostream>
using namespace std;

int main()
{
	// set variables
	int customers = 16500;
	float surveyPercent = 0.15, citrisPercent = 0.58;

	// calculate customer purchases
	float oneOrMore = customers * surveyPercent;
	float preferCitris = customers * citrisPercent;

	// Display the results
	cout << "The number of customers who buy one or more energy drinks per week is " << oneOrMore << " \n";
	cout << "The number of customers who prefer citris flaovered energy drinks is " << preferCitris << " \n";
	return 0;
}