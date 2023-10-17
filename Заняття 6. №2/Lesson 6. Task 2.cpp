/*
Lesson 6 | 2) Оголосити одновимірний масив з 7 елементів типу int.
Заповнити його випадковими значеннями в діапазоні [-12..+50] та вивести
на екран. Підрахувати кількість відємних та додатніх елементів масиву.
*/

#include <iostream>
#include <random>
using namespace std;

int main() {

	const int size = 7;
	int* _array = new int[size];
	std::random_device rd; // obtain a random number from hardware
	std::mt19937 gen(rd()); // seed the generator
	std::uniform_int_distribution<> distr(-12, 50); // define the range
	int positiveNumbers = 0, negativeNumbers = 0;

	srand(time(NULL));
	for (int i = 0; i < size; i++) {
		_array[i] = distr(gen);
	}

	for (int i = 0; i < size; i++) {
		cout << _array[i] << " ";
		(_array[i] >= 0 ? positiveNumbers++ : negativeNumbers++);
	}

	cout << "\nArray contains " << positiveNumbers << " positive and " << negativeNumbers << " negative numbers." << endl;

	delete[] _array;
	return 0;
}