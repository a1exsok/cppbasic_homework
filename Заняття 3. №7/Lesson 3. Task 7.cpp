/*
7)Напишіть програму, яка обраховує квадрат та куб довільного введеного числа
*/

#include <iostream>
using namespace std;


int main() {

	float inputNumber;
	cout << "Enter the number" << endl;
	cin >> inputNumber;
	cout << "Entered: " << inputNumber << endl;
	cout << "The Square of the " << inputNumber << " = " << inputNumber * inputNumber << endl;
	cout << "The Cube of the " << inputNumber << " = " << inputNumber * inputNumber * inputNumber << endl;

	return 0;
}