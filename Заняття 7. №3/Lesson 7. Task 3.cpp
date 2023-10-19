/*
Lesson 7 | 3) Дано цілочислові масиви А і В. Додати у
кінець масиву А елементи з масиву В, кратні 3 або 7.
*/

#include <iostream>
#include <random>
using namespace std;

int main() {
	int size = 0, count = 0, counter = 0; // count the number of elements divisible by 3 or 7
	// If we know the number of elements, we can make a new array with that size

	try {

		cout << "Enter the size of the array to inialize" << endl;
		cin >> size;
		int* _arrayA = new int[size] {0};
		int* _arrayB = new int[size] {0};

		cout << "_arrayA  _arrayB" << endl;
		for (int i = 0; i < size; i++) {
			_arrayA[i] = rand() % 20;
			_arrayB[i] = rand() % 50;
			if ((_arrayB[i] % 3 == 0) || (_arrayB[i] % 7 == 0)) count++;
			cout << _arrayA[i] << "        ";
			cout << _arrayB[i] << endl;
		}
		cout << "count = " << count << endl;

		int* _arrayC = new int[size + count] {0};

		cout << "\nNew _arrayA:" << endl;
		for (int i = 0; i < size; i++) {
			_arrayC[i] = _arrayA[i];
			if ((_arrayB[i] % 3 == 0) || (_arrayB[i] % 7 == 0)) {
				_arrayC[counter + size] = _arrayB[i];
				counter++;
			}
		}

		for (int i = 0; i < size + count; i++) {
			cout << _arrayC[i] << " ";
		}

		delete[] _arrayA;
		delete[] _arrayB;
		delete[] _arrayC;
		_arrayA = nullptr;
		_arrayB = nullptr;
		_arrayC = nullptr;
	}
	catch (bad_alloc) {
		cout << "Memory allocation was failed." << endl;
	}

	return 0;
}