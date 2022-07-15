/*
 * main.cpp
 *
 *  Created on: Apr 18, 2022
 *      Author: ahmetemin
 */

#include <iostream>

int main() {

	int randomNumber;
	srand (time(NULL));
	randomNumber = rand() %6 +1;
	std::cout << randomNumber << '\n';

	return 0;
}


