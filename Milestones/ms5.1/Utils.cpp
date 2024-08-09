/*
*****************************************************************************
                              milestone - 5
Full Name  : Aditya Mahesh Tambe
Student ID#: 171969223
Email      : amtambe@myseneca.ca

Authenticity Declaration:
 I have done all the coding by myself and only copied the code that my professor
 provided to complete my project milestones.
*****************************************************************************
*/

#include <iostream>
using namespace std;

#include "Utils.h"
namespace sdds {

	unsigned int getIntInRange(int minimumRange, int maximumRange) {
		int x;
		cin >> x;
		if (cin.fail() || x<minimumRange || x>maximumRange) {
			cin.clear();
			char charr;
			while (cin.get(charr) && charr != '\n') {
				;
			}
			cout << "Invalid Selection, try again: ";
			return getIntInRange(minimumRange, maximumRange);
		}
		else {
			return x;
		}
	}
}
