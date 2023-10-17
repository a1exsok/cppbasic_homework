/*
Lesson 5 | 8) Написати програму яка обчислює суму семи чисел,
які вводяться з клавіатури. - do..while
*/

#include <iostream>
using namespace std;

int main() {

	int number = 0, sumOfNumbers = 0, i = 0;
	cout << "Please enter 7 numbers, separated by ENTER (enter first number, press ENTER, etc...)" << endl;
	do {
		cin >> number;
		sumOfNumbers += number;
		i++;
	} while (i <= 6);
	cout << "The sum of the 7 numbers entered = " << sumOfNumbers;

	return 0;
}