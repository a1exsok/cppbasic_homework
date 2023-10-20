#pragma once
using namespace std;

int Sum(int args[], int count)
{
	if ((count - 1) >= 0) {
	return args[count - 1] * count + Sum(args, count -1);
	}
	return count * args[count];
}


