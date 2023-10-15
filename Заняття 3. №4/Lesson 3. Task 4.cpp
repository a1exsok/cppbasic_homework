/*
4)Ви купили в магазині 4 різні товари.
Дані ціни кожного товару (константні значення) та кількість товару, який був придбаний.
Обрахувати та вивести вартість покупки. Забазпечити вивід у вигляді чеку.
*/

#include <iostream>
using namespace std;

int main() {

	// Prices are in UAH
	const float priceForOneItem1 = 50.5;
	const float priceForOneItem2 = 25;
	const float priceForOneItem3 = 110;
	const float priceForOneItem4 = 32.2;

	int numberOfItem1 = 1;
	int numberOfItem2 = 1;
	int numberOfItem3 = 1;
	int numberOfItem4 = 1;

	double totalOrderPrice = 0;
	totalOrderPrice = numberOfItem1 * priceForOneItem1 + numberOfItem1 * priceForOneItem1 + numberOfItem1 * priceForOneItem1 + numberOfItem1 * priceForOneItem1;

	std::cout << "==== This is your check ====" << endl;
	std::cout << "Your order:" << std::endl;
	std::cout << "item1: " << numberOfItem1 << ". Price per item, for item2 = " << priceForOneItem1 << std::endl;
	std::cout << "item2: " << numberOfItem2 << ". Price per item, for item3 = " << priceForOneItem2 << std::endl;
	std::cout << "item3: " << numberOfItem3 << ". Price per item, for item4 = " << priceForOneItem3 << std::endl;
	std::cout << "item4: " << numberOfItem4 << ". Price per item, for item5 = " << priceForOneItem4 << std::endl;
	totalOrderPrice = priceForOneItem1 * numberOfItem1 + priceForOneItem2 * numberOfItem2 + priceForOneItem3 * numberOfItem3 + priceForOneItem4 * numberOfItem4;
	std::cout << "Total order price: " << totalOrderPrice << " UAH. " << endl;
	std::cout << "==== End of the check ====" << endl;

	return 0;
}