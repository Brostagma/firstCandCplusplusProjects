/*
 * main.cpp
 *
 *  Created on: Apr 18, 2022
 *      Author: ahmetemin
 */

#include <iostream>

int bigNumber(int userArray[], int arraySize) {

	int big = userArray[0];
	for(int a = 0; a < arraySize; a++) {
		if(userArray[a] > big) {
			big = userArray[a];
		}
	}

	return big;
}


void inputArray() {
	std::cout << "Enter Array size: ";
	int arraySize;
	std::cin >> arraySize;

	int userArray[arraySize];

	for(int a = 0; a < arraySize; a++) {
		std::cout << "\nEnter Array number: ";
		int inputA;
		std::cin >> inputA;
		userArray[a] = inputA;
	}

	std::cout << bigNumber(userArray,(sizeof(userArray) / sizeof(int)));

}


int main() {

	inputArray();

	return 0;

}



