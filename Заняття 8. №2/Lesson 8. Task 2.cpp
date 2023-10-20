/*
2. Написати функцію Sum(N), яка повертає суму цілих чисел N,
які були аргументами функції у вигляді: 1·N1 + 2  N2+ 3·N3 + …,
де  N1 , N2, … - аргументи першого, другого і 
т.д. виклику функції.
*/

#include <iostream>
#include "mylibrary.h"
using namespace std;

int main() {


	int array[3] = { 1,2,3 };
	//int array[4] = { 1,2,3,4 };
	// 1*1 + 2*2 + 3*3 = 1 + 4 + 9 = 14
	// 1*1 + 2*2 + 3*3 + 4*4 = 1 + 4 + 9 + 16 = 30
	cout << Sum(array,3);
	//cout << Sum(array,4);

	return 0;
}

