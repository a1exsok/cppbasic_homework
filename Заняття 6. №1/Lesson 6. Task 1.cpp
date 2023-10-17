/*
Lesson 6 | 1) Оголосити одновимірний масив з 10 елементів типу int. Заповнити його
значеннями з клавіатури, вивести на екран та підрахувати добуток елементів масиву
*/

#include <iostream>
using namespace std;

int main() {

	const int size = 10;
	int _array[size] = { 0 };
	int productOfArrayElements = 1;

	cout << "Enter 10 numbers, separated by ENTER button" << endl;
	for (int i = 0; i < size; i++) {
		cin >> _array[i];
	}

	for (int i = 0; i < size; i++) {
		cout << _array[i] << " ";
		productOfArrayElements *= _array[i];
	}

	cout << "\nThe product of the elements of the array = " << productOfArrayElements << endl;

	return 0;
}