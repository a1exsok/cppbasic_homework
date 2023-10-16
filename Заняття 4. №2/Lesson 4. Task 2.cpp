/*
Lesson 4 | 2) Дано 2-цифрове число. Вивести кожну цифру числа окремо та
знайти суму його цифр (скоритсайтеся операцією % для обчислення останньої,
другої, цифри).
*/

#include <iostream>
using namespace std;

int main() {

	int n = 57;

	cout << "First digit: " << n / 10 << ", Second digit: " << n % 10 << endl;
	cout << "Summ of digits of the number " << n << ": " << (n / 10 + n % 10);

	return 0;
}