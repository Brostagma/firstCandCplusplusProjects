/*
 * Employe.h
 *
 *  Created on: Mar 24, 2022
 *      Author: ahmetemin
 */

#ifndef EMPLOYE_H_
#define EMPLOYE_H_

#include <iostream>
using namespace std;

class Employe {

private:
	string name;
	int id;
	int salary;

public:
	void showInfo();

	void setName(string name) {this->name = name;}
	void setId(int id) {this->id = id;}
	void setSalary(int salary) {this->salary = salary;}
	string getName() {return name;}
	int getId() {return id;}
	int getSalary() {return salary;}
};

#endif /* EMPLOYE_H_ */
