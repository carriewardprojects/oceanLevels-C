// OceanLevels.cpp : A simple C++ program that estimates the rise of ocean levels in the next 10 years
// Carrie Ward 08/18/2017

#include <iostream>
using namespace std;


int main()
{
	double risingLevel = 1.8, currentLevel = 3.4;
	double year5, year7, year10;
	
	cout << "\nIn 2017 the global mean ocean level was recorded by NASA to be 3.4 millimeters/year.\n";
	cout << "\nAssuming the ocean level rises about 1.8 millimeters per year, the ocean should reach the following levels: \n";

	//calculate rising ocean levels
	year5 = currentLevel + (risingLevel * 5);
	year7 = currentLevel + (risingLevel * 7);
	year10 = currentLevel + (risingLevel * 10);
	
	// Display the results
	cout << "In 5 years:  " << year5 << " mm/year." << endl;
	cout << "In 7 years:  " << year7 << " mm/year." << endl;
	cout << "In 10 years: " << year10 << " mm/year.\n" << endl;

	return 0;
}

