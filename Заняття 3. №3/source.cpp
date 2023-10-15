/*
3) Дано ціна 1 хвилини та кількість хвилин. Обчислити вартість дзвінка.
*/

#include <iostream>
using namespace std;

int main() {

	// Currency in USD
	int priceForOneMinute = 2;
	int minutes = 50;

	std::cout << "The price of one minute was " << priceForOneMinute << " USD." << std::endl;
	std::cout << "The overall call time was " << minutes << " minutes." << std::endl;
	std::cout << "The price for that call was " << priceForOneMinute * minutes << " USD." << std::endl;

	return 0;
}