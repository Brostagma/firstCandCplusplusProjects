/*
 * four.cpp
 *
 *  Created on: 14 Mar 2022
 *      Author: e
 */

#include <iostream>
using namespace std;
string sizeTypes[6] = {"Bit","Byte","Kilobyte","Megabyte","Gigabyte","Terabyte"};
int size;
int selection;
void getSizeTypes() {
	for(int i = 0; i < 6; i++) {
		cout << "[" << i+1 << "]" << sizeTypes[i] << " ";
	}
	cout << "-";
}
void bitCalculation(int size) {
	cout << sizeTypes[1] << ":" << size / 8 << endl;
	cout << sizeTypes[2] << ":" << (double) size / 1024 << endl;
	cout << sizeTypes[3] << ":" << (double) size / (1024 * 2) << endl;
	cout << sizeTypes[4] << ":" << (double) size / (1024 * 3) << endl;
	cout << sizeTypes[5] << ":" << (double) size / (1024 * 4) << endl;
}
void byteCalculation(int size) {
	cout << sizeTypes[0] << ":" << size * 8 << endl;
	cout << sizeTypes[2] << ":" << (double) size / 1024 << endl;
	cout << sizeTypes[3] << ":" << (double) size / (1024 * 2) << endl;
	cout << sizeTypes[4] << ":" << (double) size / (1024 * 3) << endl;
	cout << sizeTypes[5] << ":" << (double) size / (1024 * 4) << endl;
}
void kilobyteCalculation(int size) {
	cout << sizeTypes[0] << ":" << size * (8 * (1024 * 2)) << endl;
	cout << sizeTypes[1] << ":" << size * 1024 << endl;
	cout << sizeTypes[3] << ":" << size / 1024 << endl;
	cout << sizeTypes[4] << ":" << (double) size / (1024 * 2) << endl;
	cout << sizeTypes[5] << ":" << (double) size / (1024 * 3) << endl;
}
void megabyteCalculation(int size) {
	cout << sizeTypes[0] << ":" << size * (8 * (1024 * 3)) << endl;
	cout << sizeTypes[1] << ":" << size * (1024 * 2) << endl;
	cout << sizeTypes[2] << ":" << size * 1024 << endl;
	cout << sizeTypes[4] << ":" << (double) size / 1024 << endl;
	cout << sizeTypes[5] << ":" << (double) size / (1024 * 2) << endl;
}
void gigabyteCalculation(int size) {
	cout << sizeTypes[0] << ":" << size * (8 * (1024 * 4)) << endl;
	cout << sizeTypes[1] << ":" << size * (1024 * 3) << endl;
	cout << sizeTypes[2] << ":" << size * (1024 * 2) << endl;
	cout << sizeTypes[3] << ":" << size * 1024 << endl;
	cout << sizeTypes[5] << ":" << (double) size / 1024 << endl;
}
void terabyteCalculation(int size) {
	cout << sizeTypes[0] << ":" << size * (8 * (1024 * 5)) << endl;
	cout << sizeTypes[1] << ":" << size * (1024 * 4) << endl;
	cout << sizeTypes[2] << ":" << size * (1024 * 3) << endl;
	cout << sizeTypes[3] << ":" << size * (1024 * 2)<< endl;
	cout << sizeTypes[4] << ":" << size * 1024 << endl;
}
string getSelectionSizeType(int selection) {
	return sizeTypes[selection - 1];
}
void getSizeCalculation(int size) {
	switch(selection) {
	case 1:
		bitCalculation(size);
		break;
	case 2:
		byteCalculation(size);
		break;
	case 3:
		kilobyteCalculation(size);
		break;
	case 4:
		megabyteCalculation(size);
		break;
	case 5:
		gigabyteCalculation(size);
		break;
	case 6:
		terabyteCalculation(size);
		break;
	default:
		break;
	}
}

int main() {
	cout << "Welcome to size calculation" << endl;
	cout << "Please choose (Example:1 or 3) size type:" << endl;
	getSizeTypes();
	cin >> selection;
	cout << "Enter the " << getSelectionSizeType(selection) << " size: ";
	cin >> size;
	getSizeCalculation(size);
	return 0;
}



