/*
Lesson 4 | 1) Написати програму, яка знаходить та виводить в дійсному вигляді
середнє арифметичне трьох введених ЦІЛИХ чисел. Запропонувати декілька варіантів розвязку.
*/

#include <iostream>
using namespace std;

int main() {

	int a = 0, b = 0, c = 0;
	double arithmetic_mean = 0;

	cout << "Enter three Integer numbers, separated with ENTER button" << endl;
	cin >> a;
	cin >> b;
	cin >> c;

	// Solution #1 : 
	cout << "Solution 1: " << (a + b + c) / 3 << endl;

	return 0;
}