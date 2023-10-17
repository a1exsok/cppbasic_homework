/*
Lesson 5 | 7.) Скласти програму обчислення суми квадратів перших n-непарних чисел.
Вивести на екран, крім суми квадратів і самі непарні числа і їх квадрати. - do..while
*/

#include <iostream>
#include <string>
using namespace std;

int main() {

	int i = 0, n = 0, count = 0, sumOfOddNumberSquares = 0;
	string oddNumberSquaresList = "";

	cout << "Please enter the count of the odd numbers to output:" << endl;
	cin >> count;
	cout << "A) All the odd numbers up until/including the number " << count << ": " << endl;
	do {
		if (n % 2 != 0) {
			cout << n << " ";
			oddNumberSquaresList.append(to_string(n * n) + " ");
			sumOfOddNumberSquares += n * n;
		}
		n++;
	} while (n <= count);
	cout << "\nB) The squares of all the odd numbers up until/including the number " << count << ": " << endl;
	cout << oddNumberSquaresList << endl;

	cout << "\nB) The sum of the squares of all the odd numbers up until/including the number " << count << ": " << endl;
	cout << sumOfOddNumberSquares << endl;

	return 0;
}