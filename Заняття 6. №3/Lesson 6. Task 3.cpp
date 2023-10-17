/*
Lesson 6 | 3) Оголосити, проініціалізувати початковими значеннями та
вивести одновимірний масив з 7 елементів типу long.
Визначити суму парних елементів масиву
*/

#include <iostream>
#include <random>
using namespace std;

int main() {

	const int size = 7;
	long* _array = new long[size];
	std::random_device rd; // obtain a random number from hardware
	std::mt19937 gen(rd()); // seed the generator
	std::uniform_int_distribution<> distr(-12, 50); // define the range
	long sum_of_even_elements = 0;

	for (int i = 0; i < size; i++) {
		_array[i] = distr(gen);
	}

	for (int i = 0; i < size; i++) {
		cout << _array[i] << " ";
		if (_array[i] % 2 == 0) sum_of_even_elements += _array[i];
	}

	cout << "\nThe sum of the even elements of the array = " << sum_of_even_elements << endl;

	delete[] _array;
	return 0;
}