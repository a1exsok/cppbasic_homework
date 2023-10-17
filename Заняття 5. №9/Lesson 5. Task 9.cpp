/*
Lesson 5 | 9) Написати програму, яка переводить введену користувачем довжину в сантиметри
у інші одиниці довжини за вибором користувача (метри, дециметри, міліметри).
Примітка! Роботу задачі організувати через систему меню
*/

#include <iostream>
#include <string>
using namespace std;

int main() {

	string input = "";
	double length = 0;
	while (input != "x") {
		cout << "Enter the length" << endl;
		cin >> input;
		length = stod(input);
		cout << "You have entered length of " << length << " centimeters." << endl;
		cout << "To which metric unit you would like to convert it to?:" << endl;
		cout << "A | Convert to meters => type 'm' and press ENTER." << endl;
		cout << "B | Convert to decimeters => type 'd' and press ENTER." << endl;
		cout << "C | Convert to milimeters => type 'mi' and press ENTER." << endl;
		cin >> input;
		if (input == "m") {
			cout << length << " centimeters = " << (length * 0.01) << " meters." << endl;
		}
		else if (input == "d") {
			cout << length << " centimeters = " << (length * 0.1) << " decimeters." << endl;
		}
		else if (input == "mi") {
			cout << length << " centimeters = " << (length * 10) << " millimeters." << endl;
		}
		else cout << "Urecognized input. Please try again.";
		cout << "Type 'x' and press ENTER to exit this dialog, or type anything and press ENTER." << endl;
		cin >> input;
	}

	return 0;
}