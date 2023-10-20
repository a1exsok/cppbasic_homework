#include <iostream>
#include "mylibrary.h"

using namespace std;

int main() {
	const int size = 5;
	float args[size] = { 1,0.5,1.5,0.5, 2 };
	cout << Avg(args, size) << endl;
	return 0;
}
