// marathon-runners-with-parallel-arrays.cpp : a file to calculate 5 runners total and average miles run over 7 days
//

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

// functions
void getData(string names[], double miles[][9]);
void calcSumAvg(double miles[][9]);
void results(string name[], double miles[][9]);

int main()
{
	// variables
	string runnerName[5];
	double milesPerDay[5][9];

	// fetch data from file into the arrays
	getData(runnerName, milesPerDay);

	// calculate the totals and averages
	calcSumAvg(milesPerDay);

	// display the output headers
	cout << "               <-                               Miles                               ->\n";
	cout << left;
	cout << setw(15) << "Runners Name   Day 1  Day 2  Day 3  Day 4  Day 5  Day 6  Day 7  Total  Average per Day\n";

	// display the results
	results(runnerName, milesPerDay);

	return 0;
}

void getData(string name[], double miles[][9])
{
	// variables
	int i, j;
	ifstream runnersFile;

	runnersFile.open("runners.txt");
	for (i = 0; i < 5; i++)
	{
		runnersFile >> name[i];
		for (j = 0; j < 7; j++)
			runnersFile >> miles[i][j];
	}

	runnersFile.close();
}

void calcSumAvg(double miles[][9])
{
	// variables
	int i, j;
	double sum;

	for (i = 0; i <= 4; i++)
	{
		sum = 0;
		for (j = 0; j <= 6; j++)
			sum = sum + miles[i][j];
		miles[i][7] = sum;
		miles[i][8] = sum / 7;
	}
}

void results(string name[], double miles[][9])
{
	// variables
	int i, j;

	for (i = 0; i <= 4; i++)
	{
		cout << setw(15) << name[i];
		for (j = 0; j <= 8; j++)
		{
			cout << setprecision(1)  << fixed;
			cout << setw(7) << miles[i][j];
		}
		cout << endl;
	}
}