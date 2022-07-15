//============================================================================
// Name        : second.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int test(int a) {
	int *ptr = &a;

	*ptr = 18;
	cout << "ptr " <<  *ptr << endl;
	return *ptr;
    delete ptr;
}


int main() {

	int b = 10;
	cout << "first b " << b << endl;
	b = test(b);
	cout << "new b " << b << endl;

	return 0;
}
