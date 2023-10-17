/*
Lesson 5 | 5.)
Вивести на екран цілі числа від 1 до 100. - while
*/

#include <iostream>
using namespace std;

int main() {

	int n = 0;
	do {
		n += 1;
		cout << n << endl;
	} while (n < 100);

	return 0;
}