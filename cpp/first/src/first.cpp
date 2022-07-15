//============================================================================
// Name        : first.cpp
// Author      : Emin
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

struct Adress {
	int postCode;
	string country;
};
struct Student {
	int studentNo;
	string studentName;
	string studentClass;
	Adress adress;
};
void studentInfo(Student* student) {
	cout << "No: " << student->studentNo << endl;
	cout << "Name: " << student->studentName << endl;
	cout << "Class: " << student->studentClass << endl;
	cout << "Post Code: " << student->adress.postCode << endl;
	cout << "Country: " << student->adress.country << endl;
	cout << "--------------------------------" << endl;
}
void studentInfo(Student student) {
	cout << "No: " << student.studentNo << endl;
	cout << "Name: " << student.studentName << endl;
	cout << "Class: " << student.studentClass << endl;
	cout << "Post Code: " << student.adress.postCode << endl;
	cout << "Country: " << student.adress.country << endl;
	cout << "--------------------------------" << endl;
}

struct playerInfo {
	int playerHealth;
	int playerDamage;
	string playerName;
	string playerClass;
};

struct enemyInfo {
	int enemyHealth;
	int enemyNamage;
	string enemyName;
	string enemyClass;
};

void yasAtlat(playerInfo damage) {
	damage.playerDamage += 10;
}

int main() {

	playerInfo weerrtzu = {100,10,"Sezer","Archer"};
	enemyInfo goblin = {30,2,"Jack","Warrior"};
	enemyInfo goblin2 = {30,2,"Mustafa","Warrior"};

	yasAtlat(weerrtzu);

	cout << weerrtzu.playerDamage << endl;



	Student student1 = {1,"Jack","12-B",{35,"America"}};

	studentInfo(student1);

	Student student2;
	student2.studentNo = 2;
	student2.studentName = "John";
	student2.studentClass = "10-A";
	student2.adress.postCode = 82;
	student2.adress.country = "Germany";

	studentInfo(student2);

	Student student3 = {3,"Linda","12-A",{44,"Italy"}};
	Student* studentPoint = &student3;

	studentInfo(studentPoint);

	return 0;
}
