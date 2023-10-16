/*
2) Напишіть програму, яка переводить кілометри в метри. Кілометри вводяться з клавіатури.
*/

#include <iostream>
using namespace std;

int main() {
	int km = 0;
	std::cout << "Please enter kilometers" << std::endl;
	std::cin >> km; 
	std::cout << km * 1000 << " meters." << std::endl;
	
	return 0;
}