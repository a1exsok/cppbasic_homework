/*
Lesson 6 | 10) Дано масив А. Скопіювати елементи масиву А у масив В.
*/

#include <iostream>
using namespace std;

int main() {

	const int size = 10;
	long* _arrayA = new long [size] {3, 4, -1, 0, -3, -5, 8, 2, 9, -7};
	long* _arrayB = new long [size] {0};
	long tmp = 0;

	cout << "The array A" << endl;
	for (int i = 0; i < size; i++) {
		cout << _arrayA[i] << " ";
		_arrayB[i] = _arrayA[i];
	}

	cout << "\nThe array B:" << endl;
	for (int i = 0; i < size; i++) {
		cout << _arrayB[i] << " ";
	}

	delete[] _arrayA;
	delete[] _arrayB;
	return 0;
}