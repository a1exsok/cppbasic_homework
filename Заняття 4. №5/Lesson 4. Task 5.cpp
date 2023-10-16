/*
Lesson 4 | 5) Дано 2 числа. Порівняти числа.
Вивести повідомлення виляду: ’перше число більше(менше, рівне) другому’.
*/

#include <iostream>
using namespace std;

int main() {

	int n1 = 2, n2 = 2;

	if (n1 > n2) {
		cout << "the first number is bigger than second" << endl;
	}
	else cout << ((n1 < n2) ? "first number is smaller than second" : "first number equals the second");

	return 0;
}