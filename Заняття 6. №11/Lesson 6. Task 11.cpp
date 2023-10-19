/*
Lesson 6 | 11) Дано масив А. Утворити реверс масиву А у масиві В
(тобто перший елемент масиву А записати на місце останнього елемента масиву В,
другий елемент масиву А записати на місце передостаннього елемента масиву В і т. д.).
Вивести обидва масиви та індекси елементів на екран у вигляді 3-х стовпців.
*/

#include <iostream>
using namespace std;

int main() {

	const int size = 10;
	long* _arrayA = new long [size] {3, 4, -1, 0, -3, -5, 8, 2, 9, -7};
	long* _arrayB = new long [size] {0};
	int j = 0;

	for (int i = size - 1; i >= 0; i--) {
		_arrayB[j] = _arrayA[i];
		j++;
	}

	for (int i = 0; i < size; i++) {
		cout << i << " ";
		cout << _arrayA[i] << " ";
		cout << _arrayB[i] << endl;
	}

	delete[] _arrayA;
	delete[] _arrayB;
	return 0;
}