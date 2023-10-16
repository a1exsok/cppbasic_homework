/*
Lesson 4 | 6) Дано двоцифрове число.
Визначити чи число має однакові цифри(11, 22 і т.д.)
*/

#include <iostream>
using namespace std;

int main() {

	int n = 23;

	cout << "The number = " << n << endl;
	cout << "Digits of this number are " << (n / 10 == n % 10 ? "the same." : "different.");

	return 0;
}