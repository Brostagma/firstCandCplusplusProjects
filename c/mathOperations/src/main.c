/*
 * main.c
 *
 *  Created on: May 13, 2022
 *      Author: ahmetemin
 */

#include <stdio.h>

int main() {

	int number1,number2,number3,number4,number5;

	number1 = 5;
	number1++;
	number1 += 1;
	number1 = number1 + 1;

	number2 = 5;
	number2--;
	number2 -= 1;
	number2 = number2 - 1;

	number3 = 5;
	number3 *= 5;
	number3 = number3 * 5;

	number4 = 50;
	number4 /= 2;
	number4 = number4 / 2;

	number5 = 50;
	number5 %= 5;
	number5 = number5 % 5;

	return 0;
}
