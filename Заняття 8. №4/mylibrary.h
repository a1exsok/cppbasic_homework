#pragma once

int Count(int args[], int n) {
	int count = 0; 
	for (int i = 0; i <= n - 1; i++) {
		if (args[i] / 10 == 0) {
			count += 1;
		}
	}

	return count;
}
