// OceanLevels.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
/*
Pseudocode:
1.Set ocean rise rate = 1.5 mm/year
2.Calculate ocean rise in 5 years: rise5 = rate * 5
3.Calculate ocean rise in 7 years: rise7 = rate * 7
4.Calculate ocean rise in 10 years: rise10 = rate * 10
5.Display all results
*/
int main()
{
	// Ocean Levels Program - CSC 221 Chapter 2

	// Constants
	const double mmPerYear = 1.5;

	// Calculations
	double rise5 = mmPerYear * 5;
	double rise7 = mmPerYear * 7;
	double rise10 = mmPerYear * 10;

	// Output
	cout << "Ocean Levels Projection:" << endl;
	cout << "In 5 years, the ocean will be " << rise5 << "mm higher than current level." << endl;
	cout << "In 7 years, the ocean will be " << rise7 << "mm higher than current level." << endl;
	cout << "In 10 years, the ocean will be " << rise10 << "mm higher than current level." << endl;

	return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
