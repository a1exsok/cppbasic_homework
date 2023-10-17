/*
Lesson 6 | 4) Утворити одновимірний масив розміром 30.
Заповнити його числами, які є степенями 2: (1, 2, 4, 8, 16, ... ).
Вивести елементи масиву на екран у прямому і оберненому порядку.
*/

#include <iostream>
#include <math.h>
using namespace std;

int main() {

	const int size = 30;
	long* _array = new long[size];
	long sum_of_even_elements = 0;

	for (int i = 0; i < size; i++) {
		_array[i] = pow(2, i);
	}

	cout << "==== Printing the array elements in the straight order" << endl;
	for (int i = 0; i < size; i++) {
		cout << _array[i] << " ";
		if ((i == 15) || (i == 23)) cout << endl;
	}
	cout << "\n==== Printing the array elements in the reverse order" << endl;
	for (int i = size - 1; i >= 0; i--) {
		cout << _array[i] << " ";
		if ((i == 15) || (i == 23)) cout << endl;
	}

	delete[] _array;
	return 0;
}