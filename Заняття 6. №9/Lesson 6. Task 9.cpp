/*
Lesson 6 | 9) Дано одновимірний масив. Поміняти місцями перший елемент з другим,
третій з четвертим, і т.д. Вивести змінений масив на екран.
*/

#include <iostream>
using namespace std;

int main() {

	const int size = 10;
	long* _array = new long [size] {3, 4, -1, 0, -3, -5, 8, 2, 9, -7};
	long tmp = 0;

	cout << "Original array:" << endl;
	for (int i = 0; i < size; i++) {
		cout << _array[i] << " ";
	}

	for (int i = 0; i < size; i++) {
		if (_array[i + 1] != size) {
			tmp = _array[i + 1];
			_array[i + 1] = _array[i];
			_array[i] = tmp;
			i++;
		}
		else {
			break;
		}
	}

	cout << "\nModified array:" << endl;
	for (int i = 0; i < size; i++) {
		cout << _array[i] << " ";
	}

	delete[] _array;
	return 0;
}