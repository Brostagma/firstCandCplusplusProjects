//============================================================================
// Name        : three.cpp
// Author      : emin
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
#include <string>
using namespace std;

int main() {
	int age = 10;
	string result = (age >= 18) ? "Open" : "Close";
	cout << result << "\n";

	int myNumbers[5] = {10, 20, 30, 40, 50};
	cout << sizeof(myNumbers) << "\n";
	cout << sizeof(myNumbers) / sizeof(int) << "\n";

	string letters[4][4] = {
	  { "A", "B", "C", "D" },
	  { "E", "F", "G", "H" },
	  { "I", "K", "L", "O" },
	  { "P", "Q", "R", "S" }
	};
	int space = 0;
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < space; j++) {
			cout << " ";
		}
		cout << letters[i][i] << endl;
		space++;
	}
	space = 0;
	for(int i = 3; i >= 0; i--) {
		for(int j = 3; j > space; j--) {
			cout << " ";
		}
		space++;
		cout << letters[i][i] << endl;
	} //16 satır

//	int a = 0;
//	for(int i = 0; i < 4; i++) {
//		for(int j = 0; j < 4; j++) {
//			if(j == a) {
//				cout << letters[i][j] << endl;
//				break;
//		  }
//			cout << " ";
//	  }
//		a++;
//	}
//	a = 3;
//	for(int i = 3; i >= 0; i--) {
//		for(int j = 0; j < 4; j++) {
//			if(j == a) {
//				cout << letters[i][j] << endl;
//				break;
//			}
//			cout << " ";
//		}
//		a--;
//	} //22 satır

	return 0;
}
