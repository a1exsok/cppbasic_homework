/*
Lesson 4 | 7) Дано трьохцифрове число.
Визначити чи число має однакові першу і останню цифри(131, 272 і т.д.)
*/

#include <iostream>
using namespace std;

int main() {

	int n = 252;

	cout << "The number = " << n << endl;
	cout << "The first and the last digits of this number are " << (n / 100 == n % 10 ? "the same." : "different.");

	return 0;
}