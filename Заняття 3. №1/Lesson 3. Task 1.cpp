/*
1) Ввести 2 цілих числа(змінні типу int). Знайти та вивести
суму та добуток чисел.
*/

#include <iostream>

void main() {
	int x,y;
	std::cout << "Enter the first number" << std::endl;
	std::cin >> x;
	std::cout << "Enter the second number" << std::endl;
	std::cin >> y;
	std::cout << "Entered nums: x = " << x << ", y = " << y << ".\nAddition: x + y = " << (x + y) << ".\nMultiplication: " << (x * y) << std::endl;
}
