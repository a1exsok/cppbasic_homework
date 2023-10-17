/*
Lesson 6 | 5) Дано одновимірний масив. Замінити всі від’ємні елементи їх модулями.
*/

#include <iostream>
#include <math.h>
#include <random>
using namespace std;

int main() {

	const int size = 10;
	long* _array = new long[size];
	std::random_device rd; // obtain a random number from hardware
	std::mt19937 gen(rd()); // seed the generator
	std::uniform_int_distribution<> distr(-50, 50); // define the range

	for (int i = 0; i < size; i++) {
		_array[i] = distr(gen);
	}

	cout << "==== Printing the original array elements" << endl;
	for (int i = 0; i < size; i++) {
		cout << _array[i] << " ";
		if (_array[i] < 0) _array[i] = abs(_array[i]);
	}
	cout << "\n==== Printing the modified array elements" << endl;
	for (int i = 0; i < size; i++) {
		cout << _array[i] << " ";
	}


	delete[] _array;
	return 0;
}