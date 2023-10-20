#pragma once
/*
5. Написати функцію Avg(N), яка повертає середнє арифметичне
дробових чисел N, які були аргументами функції.
*/

float Avg(float args[], int n) {
	float sum = 0, count = 0;
	for (int i = 0; i <= n - 1; i++) {
		if (floor(args[i]) != args[i]) {
			sum += args[i];
			count++;
		}
	}
	return sum / count;
}

