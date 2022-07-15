/*
 * main.cpp
 *
 *  Created on: Mar 31, 2022
 *      Author: ahmetemin
 */


#include <iostream>
using namespace std;

int main() {
	//Example for variable
	int x{};
	int y{13};
	string z{"Test"};

	cout << x << '\n';
	cout << y << '\n';
	cout << z << '\n';

	//Example users input

	//Enter first number
	cout << "Enter first number: ";
	int firstNumber{};
	cin >> firstNumber;

	//Enter second number
	cout << "Enter second number: ";
	int secondNumber{};
	cin >> secondNumber;

	//Sum and extraction output
	//Sum
	cout << "Sum: " << firstNumber + secondNumber << '\n';
	//extraction
	cout << "Extraction: " << firstNumber - secondNumber << '\n';

	return 0;
}

