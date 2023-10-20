/*3.Написати функцію SumParni(N), яка повертає суму
парних серед цілих чисел N, які були аргументами
функції.*/
#include <iostream>
#include "mylibrary.h"

using namespace std;
void main()
{
	const int size = 4;
	int arrayA[size] = { 2,1,5,0 };

	cout << SumParni(arrayA, size) << endl;
}