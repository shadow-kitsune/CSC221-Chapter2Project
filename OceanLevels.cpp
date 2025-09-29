// OceanLevels.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
/*
CSC 221- Chapter 2 Project: Energy Drink Consumption

Pseudocode:

1.Set totalCustomers = 16500
2.Set percentEnergyDrinkers = 15 // percentage of customers buying energy drinks
3.Set percentCitrus = 58         // percentage of energy drinkers preferring citrus
4.Calculate energyDrinkers = totalCustomers * percentEnergyDrinkers / 100
5.Calculate citrusDrinkers = energyDrinkers * percentCitrus / 100
6.Display energyDrinkers
7.Display citrusDrinkers
*/

int main()
{
// Total customers surveyed
	int totalCustomers = 16500;

// Percentages
	double percentEnergyDrinkers = 15.0;  // 15%
	double percentCitrus = 58.0;  // 58% of energy drinkers

// Calculations
	double energyDrinkers = totalCustomers * percentEnergyDrinkers / 100;
	double citrusDrinkers = energyDrinkers * percentCitrus / 100.0;

//Output
	cout << "Approximate number of customers who purchase one or more energy drinks per week: "
		<< static_cast<int>(energyDrinkers) << endl;
	cout << "Approximate number of customers who prefer citrus-flavored energy drinks: "
		<< static_cast<int>(citrusDrinkers) << endl;

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
