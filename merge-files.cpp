// merge-files.cpp : This program merges two files in alphabetical order
//

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	// set varaibles
	ifstream file1, file2;
	ofstream file3;
	string lastName1, firstInitial1, lastName2, firstInitial2;

	// open files
	file1.open("file1.txt");
	file2.open("file2.txt");
	file3.open("file3.txt");
	
	file1 >> lastName1;
	file1 >> firstInitial1;
	file2 >> lastName2;
	file2 >> firstInitial2;

	while (file1.eof() == 0)
	{
		while (file2.eof() == 0)
			if (lastName1 < lastName2)
			{
				file3 << lastName1 << " " << firstInitial1 << endl;
				file1 >> lastName1;
				file1 >> firstInitial1;
			}
			else
			{
				file3 << lastName2 << " " << firstInitial2 << endl;
				file2 >> lastName2;
				file2 >> firstInitial2;
			}
		file3 << lastName1 << " " << firstInitial1 << endl;
		file1 >> lastName1;
		file1 >> firstInitial1;
	}

	while (file2.eof() == 0)
	{
		file3 << lastName2 << " " << firstInitial2 << endl;
		file2 >> lastName2;
		file2 >> firstInitial2;
	}


	//close files and exit
	file1.close();
	file2.close();
	file3.close();
	return 0;
}
