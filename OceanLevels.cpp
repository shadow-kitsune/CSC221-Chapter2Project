// OceanLevels.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
/*
CSC 221 - Chapter 2 Project: Distance per Tank of Gas

Pseudocode:

1.Set tankSize = 20 gallons
2.Set mpgTown = 23.5 miles per gallon
3.Set mpgHighway = 28.9 miles per gallon
4.Calculate distanceTown = tankSize * mpgTown
5.Calculate distanceHighway = tankSize * mpgHighway
6.Display distanceTown
7.Display distanceHighway
*/
int main()
{
// Program: Distance per Tank of Gas
// This program calculates the distance a car can travel
// on one tank of gas in town and on the highway.

// Variables
	double tankSize = 20.0;    // Size of the gas tank in gallons
	double mpgTown = 23.5;     // Miles per gallon in town
	double mpgHighway = 28.9;  // Miles per gallon on highway
//Calculations
	double distanceTown = tankSize * mpgTown;
	double distanceHighway = tankSize * mpgHighway;
//Output results
	cout << "The distance the car can travel in town is "
		<< distanceTown << " miles. " << endl;
	cout << "The distance the car can travel on the highway is "
		<< distanceHighway << " miles. " << endl;
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
