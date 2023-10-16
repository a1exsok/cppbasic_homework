/*
5) Розробити програму, яка організовує діалог з користувачем
і дозволяє обчислити по вказаній сумі і курсу євро,
долара та злотого в суму в гривнях.
Примітка! З використанням констант.
*/

#include <iostream>
using namespace std;


int main() {

	const float OneUSDinUAH = 36.38;
	const float OneEURinUAH = 38.25;
	const float OnePLNinUAH = 8.44;

	string enteredCurrency;
	float amountOfMoneyToConvert;
	string input;

	while (true) {
		cout << "Enter the currency you want to convert (please use lower case, choose from usd, eur, pln)." << endl;
		cin >> enteredCurrency;
		if (enteredCurrency == "usd") {
			cout << "The chosen currency is USD." << endl;
			cout << "Enter the amount of USD to convert" << endl;
			cin >> amountOfMoneyToConvert;
			cout << "Entered: " << amountOfMoneyToConvert << " USD." << endl;
			cout << amountOfMoneyToConvert << " USD = " << amountOfMoneyToConvert * OneUSDinUAH << " UAH." << endl;
		}
		else if (enteredCurrency == "eur") {
			cout << "The chosen currency is EUR." << endl;
			cout << "Enter the amount of EUR to convert" << endl;
			cin >> amountOfMoneyToConvert;
			cout << "Entered: " << amountOfMoneyToConvert << " EUR." << endl;
			cout << amountOfMoneyToConvert << " EUR = " << amountOfMoneyToConvert * OneEURinUAH << " UAH." << endl;
		}
		else if (enteredCurrency == "pln") {
			cout << "The chosen currency is PLN." << endl;
			cout << "Enter the amount of PLN to convert" << endl;
			cin >> amountOfMoneyToConvert;
			cout << "Entered: " << amountOfMoneyToConvert << " PLN." << endl;
			cout << amountOfMoneyToConvert << " PLN = " << amountOfMoneyToConvert * OnePLNinUAH << " UAH." << endl;
		}
		else cout << "The typed currency " << enteredCurrency << " is not supported to convert, currently.";

		cout << "Type 'x' and press enter to exit the current dialogue, or press 'y' and enter - to continue" << endl;
		cin >> input;
		if (input == "x") {
			break;
		}
		else if (input == "y") continue;
	}

	return 0;
}