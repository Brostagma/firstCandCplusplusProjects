/*
 * main.c
 *
 *  Created on: Apr 27, 2022
 *      Author: ahmetemin
 */

#include <stdio.h>

int main() {
	printf("Hello World!\n");
	//int value;
	//Kullanıcıdan veri alma
//	scanf("%d",&value);
	//Kullanıcı verisini yazdırma
//	printf("%d",value,);

	int number = 5; //4 byte
	double doubleNumber = 7.2; //8 byte
	char character = 'C'; //1 byte
	char characterArray[15] = "Character Test"; //15 byte
	float fractionalNumber = 9.2; //4 byte

	printf("%d\n",number);
	printf("%.1f\n",doubleNumber);
	printf("%c\n",character);
	printf("%s\n",characterArray);
	printf("%.2f\n",fractionalNumber);

	return 0;
}

