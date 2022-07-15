/*
 * main.cpp
 *
 *  Created on: Apr 20, 2022
 *      Author: ahmetemin
 */

#include <iostream>

int main() {

	/*
	int array[5];

	for(int i(0); i < 5; i++) {
		std::cout << i+1 << ".Enter number: ";
		std::cin >> array[i];
	}

	int largestNumber = array[0];
	int smallestNumber = array[0];
	int total = array[0];

	for(int i(1); i < 5; i++) {
		total += array[i];
		if(array[i] > largestNumber)
			largestNumber = array[i];
		if(array[i] < smallestNumber)
			smallestNumber = array[i];
	}
	std::cout << "Total: " << total << "\n";
	std::cout << "Max: " << (total - smallestNumber) << '\n';
	std::cout << "Min: " << (total - largestNumber) << '\n';
	std::cout << "Average: " << ((double)total / 5) << '\n';

	std::cout << "--------------------------------\n";
	*/
	/*
	int a[4] = {1,5,2,3};
	int b[10] = {3,2,1,5,2,3,8,1,2,3};

	int aSize(4);
	int bSize(10);

	for(int i(0); i < bSize; i++) {
		bool check = true;
		for(int j(0); j < aSize; j++) {
			if(a[j] != b[j+i]) {
				check = false;
				break;
			}
		}
		if(check)
			std::cout << "Equals: " << i << '\n';
	}
	*/

	int numberofDice;
	std::cout << "Enter number of dice: ";
	std::cin >> numberofDice;

	std::srand(time(NULL));

	int numbersofPlayerOne[numberofDice];
	int scoreofPlayerOne(0);
	std::cout << "Player 1: ";
	for(int i(0); i < numberofDice; i++) {
		numbersofPlayerOne[i] = rand()%6+1;
		std::cout << numbersofPlayerOne[i] << " ";
	}

	std::cout << '\n';

	int numbersofPlayerTwo[numberofDice];
	int scoreofPlayerTwo(0);
	std::cout << "Player 2: " ;
	for(int i(0); i < numberofDice; i++){
		numbersofPlayerTwo[i] = rand()%6+1;
		std::cout << numbersofPlayerTwo[i] << " ";
	}

	std::cout << '\n';

	for(int i(0); i < numberofDice; i++) {
		if(numbersofPlayerOne[i] > numbersofPlayerTwo[i])
			scoreofPlayerOne++;
		else if(numbersofPlayerTwo[i] > numbersofPlayerOne[i])
			scoreofPlayerTwo++;
	}

	std::cout << "Player 1 Total Score: " << scoreofPlayerOne << '\n';
	std::cout << "Player 2 Total Score: " << scoreofPlayerTwo << '\n';

	if(scoreofPlayerOne > scoreofPlayerTwo)
		std::cout << "Winner Player 1 \n";
	else if(scoreofPlayerTwo > scoreofPlayerOne)
		std::cout << "Winner Player 2 \n";
	else
		std::cout << "Scoreless \n";

	return 0;
}


