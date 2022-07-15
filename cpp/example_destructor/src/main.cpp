/*
 * main.cpp
 *
 *  Created on: Apr 7, 2022
 *      Author: ahmetemin
 */
#include <iostream>

class Destructor {
	int *iPtr;
	std::string *sPtr;
public:
	Destructor(int number, std::string name) {
		iPtr = new int;
		sPtr = new std::string;

		*iPtr = number;
		*sPtr = name;
	}

	~Destructor() {
		std::cout << "delete...\n";
	}

	void deleteVariable() {
		delete iPtr;
		delete sPtr;
		std::cout << "Deleted variable\n";
	}

	void deleteString() {
		delete sPtr;
		std::cout << "Deleted string\n";
	}

	void deleteInt() {
		delete iPtr;
		std::cout << "Deleted int\n";
	}

	void info() {
		std::cout << "number: " << *iPtr << "\n";
		std::cout << "Name: " << *sPtr << "\n";
	}

	void setString() {
		std::cout << "Enter new name: ";
		std::string name;
		std::cin >> name;
		*sPtr = name;
		std::cout << "New Name: " << *sPtr << "\n";
	}

	void setInt() {
		std::cout << "Enter new number: ";
		int number;
		std::cin >> number;
		*iPtr = number;
		std::cout << "New Number: " << *iPtr << "\n";
	}
};

int main() {
	Destructor *des = new Destructor(13,"aa");

	while(true) {
		std::cout << "--> ";
		int value;
		std::cin >> value;

		switch(value) {//Class silindikten sonra class işlemi çağrılırsa program çöker.
		case 1:
			des->info();
			break;
		case 2:
			delete des;
			break;
		case 3:// int ya da string tekil olarak silindiyse 3 çağırıldığında program çöker.
			des->deleteVariable();
			break;
		case 4:
			des->deleteString();
			break;
		case 5:
			des->deleteInt();
			break;
		case 6:
			des->setString();
			break;
		case 7:
			des->setInt();
			break;
		default:
			std::cout << "default\n";
			break;
		}
	}

	return 0;
}



