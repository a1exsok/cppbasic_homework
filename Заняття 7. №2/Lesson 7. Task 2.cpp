/*
Lesson 7 | 2) 3 динамічних змінних різного типу.
Заповнити їх деякими значеннями. Вивести значення динамічних змінних на екран,
обчислити добуток та середнє арифметичне. Звільнити пам’ять.
*/

#include <iostream>
using namespace std;

int main() {

	try {
		int* _varA = new int;
		long* _varB = new long;
		double* _varC = new double;

		*_varA = 10;
		*_varB = 20;
		*_varC = 30;

		cout << "_varA = " << *_varA << endl;
		cout << "_varB = " << *_varB << endl;
		cout << "_varC = " << *_varC << endl;

		cout << "_varA * _varB * _varC = " << *_varA * *_varB * *_varC << endl;
		cout << "The arithmetic mean of _varA, _varB, _varC = " << (*_varA + *_varB + *_varC) / 3 << endl;

		delete[] _varA;
		delete[] _varB;
		delete[] _varC;
	}
	catch (bad_alloc) {
		cout << "Memory allocation was failed." << endl;
	}


	return 0;
}