/*
8) Дано витрати машиною пального на 100 км, ціну 1 л пального, а також шлях,
який потрібно проїхати водію. Обчислити та вивести на екран скільки потрібно
витратити грошей водію, щоб проїхати вказаний шлях.
*/

#include <iostream>
using namespace std;


int main() {

	float fuelUsage = 6;
	float fuelPricePerLitre = 57.22;
	float pathInKm = 15;
	float costOfTravel = 0;

	cout << "The fuel consumption of the current car is " << fuelUsage << " litres per 100 km." << endl;
	cout << "Currently, the gasoline costs " << fuelPricePerLitre << " UAH per 1 litre." << endl;

	costOfTravel = (fuelUsage / 100) * pathInKm * fuelPricePerLitre;

	cout << "The cost of driving the " << pathInKm << " km is " << costOfTravel << " UAH." << endl;

	return 0;
}