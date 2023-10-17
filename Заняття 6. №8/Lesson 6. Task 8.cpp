/*
Lesson 6 | 8) Дано одновимірний масив.
Знайти скільки елементів знаходиться між першим і останнім відємним елементом.
*/

#include <iostream>
#include <math.h>
using namespace std;

int main() {

	const int size = 10;
	long* _array = new long [size] {3, 3, -1, 0, -3, -5, 8, 2, 9, -7};
	int firstNegIndex = 0, lastNegIndex = 0;

	for (int i = 0; i < size; i++) {
		if (_array[i] < 0) {
			firstNegIndex = i;
			break;
		}
	}
	for (int i = size - 1; i >= 0; i--) {
		if (_array[i] < 0) {
			lastNegIndex = i;
			break;
		}
	}
	cout << "There are " << lastNegIndex - firstNegIndex - 1 << " elements between the first and the last negative elements of the array" << endl;

	delete[] _array;
	return 0;
}