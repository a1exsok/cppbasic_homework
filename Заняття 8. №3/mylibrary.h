#pragma once

int SumParni(int args[], int n)
{
	int res = 0;
	for (int i = 0; i <= n - 1; i++)
	{
		res += (args[i] % 2 == 0) ? args[i] : 0;
	}
	return res;
}
