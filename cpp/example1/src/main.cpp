/*
 * main.cpp
 *
 *  Created on: Mar 31, 2022
 *      Author: ahmetemin
 */

#include <iostream>

#include "com.ahmetemin/.print/print.h"
#include "com.ahmetemin/.sum/sum.h"
#define TEST_OLA

int main() {

	printValue(sum(5,4));
	printValue(sum(3,4,5));
#ifdef TEST_OLA
	std::cout << std::endl << "Hello";
#endif

#ifndef TEST_OLA
	std::cout << std::endl << "By by";
#endif

	//GOTO TEST
	std::cout << "Check point1...\n";
	std::cout << "Check point2...\n";
	std::cout << "Check point3...\n";
	std::cout << "Check point4...\n";
	check5:
	std::cout << "Check point5...\n";
	std::cout << "Check point6...\n";
	std::cout << "Check point7...\n";

	goto check5;
	return 0;
}
