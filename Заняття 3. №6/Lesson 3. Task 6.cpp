/*
6) Написати програму, яка переводить повний оберт планети Марс навколо Сонця
в земні роки. Оберти ввести з клавіатури.
(Марс робить повний оберт навколо Сонця за 686 земних днів)
*/

#include <iostream>
using namespace std;


int main() {

	int numberOfMarsTurns;

	cout << "Enter the number of turns of the Mars around the Sun" << endl;
	cin >> numberOfMarsTurns;
	cout << "Entered: " << numberOfMarsTurns << endl;
	cout << "Mars is making " << numberOfMarsTurns << " full turn(s) around the Sun in " << numberOfMarsTurns * 686 << " Earth days." << endl;

	return 0;
}