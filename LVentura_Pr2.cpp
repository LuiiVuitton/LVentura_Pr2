//* Header to include in source code:
  //*Class: CMSC140 CRN 34203
  //*Instructor: Rabiha J. Kayed
  //*Classwork/Homework/<4>
  //*Description: creating a program to calculate total ticket expenses with discounts
  //*Due Date: 3/7/2022
  //*I pledge that I have completed the programming assignment independently.
  //* I have not copied the code from a student or any source.
  //* I have not given my code to any student.
  //* Print your Name here: Luis E. Ventura Perez
//* 


//* PseudoCode below ***********************
//* 1. ask for country
//*	2. load converter tool title
//*	3. user enters choice
//*	4. calculate total based on user answers
//*5. 
//*6.output the results
//*


#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	
	//PseudoCode
	//*Converter Toolkit
		//--------------------
		//1. Temperature Converter
		//2. Distance Converter
		//3. Weight Converter
		//4. Quit
	//then run and calculate tool with info input
	
	// variables used below
	string countryName;
	int menuChoice, temperatureConverter, temperatureInCelsius, distanceConverter, kilogramsInPounds;
	double distanceInKilometer;
	temperatureConverter = 1;
	distanceConverter = 2;
	kilogramsInPounds = 3;

	
	// Ask for users country name
	cout << "enter a country name: ";
	getline(cin,countryName);
	cout << endl;

	// CONVERTER TOOLKIT TITLE
	cout << "\n" << "converter Toolkit" << "\n";
	cout << "------------------------" << endl;

	// Display for Menu options!!!!//

	cout << "1. Temperature Converter" << "\n";
	cout << "2. Distance Converter " << "\n";
	cout << "3. Weight Converter" << "\n";
	cout << "4. Quit";
	cout << endl;

	//User enters tool converter choice
	cout << "\n" << "Enter your choice (1-4): ";
	cin >> menuChoice;
	cout << endl;

	// Menu choices below

	switch (menuChoice) 
	{
		// Temperature Converter Settings// 	DONE DONE
		// The formula for converting Celsius degree to Fahrenheit is:
		//F = (9 / 5) * C + 32 where F is the temperature in Fahrenheit and C is the temperature in Celsius

	case 1: cout << "Please enter temperature in Celsius (such as 24): ";
		cin >> temperatureInCelsius;
		cout << "\n" << "It is " << (temperatureInCelsius * 1.8) + 32 << " in Fahrenheit.";
		cout << endl;
		cout << "\n" << countryName << " sounds fun!" << endl;
		cout << "\n" << "Thank you for testing my program!!" << endl;
		cout << "PROGRAMMER: Luis E. Ventura Perez" << endl;
		cout << "CMSC140 Common Project 2" << endl;
		cout << "Due Date: 3/7/2022" << endl;
		break;

		//Distance Converter Settings// distance to two positions after decimal point (for example 84.56)  DONE but check
	case 2: cout << "Please enter distance in Kilometer (such as 18.54): ";
		cin >> distanceInKilometer;
		if (distanceInKilometer <= 0) {
			cout << "!!! Program does not convert negative distance !!!" << endl;
			cout << "\n" << countryName << " sounds fun!" << endl;
			cout << "\n" << "Thank you for testing my program!!" << endl;
			cout << "PROGRAMMER: Luis E. Ventura Perez" << endl;
			cout << "CMSC140 Common Project 2" << endl;
			cout << "Due Date: 3/7/2022" << endl;
			cout << "program ended with exit code 0" << endl;
		}

		else if (distanceInKilometer > 0) {
			cout << "\n" << setprecision(2) << fixed << showpoint << "It is " << distanceInKilometer / 1.6 << " in miles.";
			cout << endl;
			cout << "\n" << countryName << " sounds fun!" << endl;
			cout << "\n" << "Thank you for testing my program!!" << endl;
			cout << "PROGRAMMER: Luis E. Ventura Perez" << endl;
			cout << "CMSC140 Common Project 2" << endl;
			cout << "Due Date: 3/7/2022" << endl;
		}
		break;

		//weight Converter Settings// DONE but check
	case 3: cout << "Please enter weight in Kilograms (such as 121.6): ";
		cin >> kilogramsInPounds;
		cout << "\n" << setprecision(1) << fixed << showpoint << "It is " << kilogramsInPounds * 2.2 << " in pounds.";
		cout << endl;
		cout << "\n" << countryName << " sounds fun!" << endl;
		cout << "\n" << "Thank you for testing my program!!" << endl;
		cout << "PROGRAMMER: Luis E. Ventura Perez" << endl;
		cout << "CMSC140 Common Project 2" << endl;
		cout << "Due Date: 3/7/2022" << endl;
		break;

		//Quit Program settings// DONE DONE
	case 4: cout << "\n" << countryName << " sounds fun!" << endl;
			cout << "\n" << "Thank you for testing my program!!" << endl;
			cout << "PROGRAMMER: Luis E. Ventura Perez" << endl;
			cout << "CMSC140 Common Project 2" << endl;
			cout << "Due Date: 3/7/2022" << endl;

	}

	system("pause");
	return 0;
}