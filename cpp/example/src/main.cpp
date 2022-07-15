/*
 * main.cpp
 *
 *  Created on: Mar 23, 2022
 *      Author: ahmetemin
 */

#include <iostream>
#include "Employe.h"
using namespace std;

// **** Class Oluşturma Konusu **** //
//class Student {
//public:
//	string name;
//	int id;
//
//	void getName() {
//		cout << "My name is " << name << endl;
//	}
//};
//
int main() {
//	Student student1;
//	Student student2;
//	student1.name = "Ahmet";
//	student2.name = "Emin";
//
//	cout << "My name is " << student1.name << endl;
//	student2.getName();
//  *********************************************************** //
	Employe employe;

	//Belirleme Metodları
	employe.setName("Ahmet");
	employe.setId(31);
	employe.setSalary(5000);

	employe.showInfo();
	return 0;
}
