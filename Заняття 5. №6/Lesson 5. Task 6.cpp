/*
Lesson 5 | 6.) Вводяться 10 чисел.
Знайти суму та середнє арифметичне цих чисел. - while
*/

#include <iostream>
using namespace std;

int main() {


	int i = 0;
	double number = 0;
	int sumOfNumbers = 0;
	int arithmeticMean = 0;

	cout << "Enter 10 numbers, separate them with ENTER key (enter first number, press ENTER, etc..)" << endl;
	while (i < 10) {
		cin >> number;
		cout << number << " ";
		sumOfNumbers += number;
		i++;
	}
	cout << "\nThe sum of all the entered numbers equals to: " << sumOfNumbers / 10 << endl;
	cout << "The arithmetic mean of the entered numbers equals to: " << sumOfNumbers / 10 << endl;

	return 0;
}