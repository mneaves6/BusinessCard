/*
 * Name: Maximiliano Neaves
 * Section: COSC/ITSE 1307
 * Homework: BusinessCard
 * This program lets the user input their name & phone number and
 * the program displays them.
 */

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


int main()
{
	string strFirstName = "";
	string strLastName = "";
	string strPhoneNumber = "";

	cout << "Enter your first name: ";
	cin >> strFirstName;

	cout << "Enter your last name: ";
	cin >> strLastName;

	cout << "Enter your phone number: ";
	cin >> strPhoneNumber;

	cout << "Your name is " << strFirstName << " " << strLastName
		<< " and your phone number is " << strPhoneNumber << endl;

    return 0;
}

