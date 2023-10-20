/*
4. Написати функцію Count(N), яка повертає кількість одноцифрових цілих чисел N, 
які були аргументами функції.
*/

#include <iostream>
#include "mylibrary.h"

using namespace std;
void main()
{
	const int size = 3;
	int arrayA[size] = { 2,342,10 };
	cout << Count(arrayA, size) << endl;
}