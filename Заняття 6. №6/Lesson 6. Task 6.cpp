/*
Lesson 6 | 6) Дано одновимірний масив. Знайти найбільший та найменший елементи
масиву та поміняти їх у масиві місцями.
*/

#include <iostream>
using namespace std;

int main() {

	const int size = 10;
	long* _array = new long [size] {-1, 3, 7, 0, -3, -5, 8, 2, 9, -7};
	long min = 0, max = 0;

	cout << "==== Printing the original array elements" << endl;
	min = _array[0];
	max = _array[0];
	for (int i = 1; i < size; i++) {
		cout << _array[i] << " ";
		if (_array[i] < min) min = _array[i];
		if (_array[i] > max) max = _array[i];
	}
	cout << "\nThe smallest element of the array = " << min << endl;
	cout << "The biggest element of the array = " << max << endl;

	delete[] _array;
	return 0;
}