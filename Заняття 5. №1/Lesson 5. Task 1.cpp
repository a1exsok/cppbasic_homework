/*
Lesson 5 | 1) 1. Користувач вводить температуру. Програма виводить повідомлення про стан організму
(наприклад, 35-36.0 – понижена температура, стан ослабленого організму,
36.1–36.8 – нормальна температура, людина здорова і т.і.).
*/

#include <iostream>
#include <string>
using namespace std;

int main() {

	string input = "";
	double temp = 0;
	while (true) {
		cout << "Enter the temperature" << endl;
		cin >> input;
		temp = stod(input);
		
		if (temp <= 35) {
			cout << "This is extremely low temperature." << endl;
		} 
		else if (temp > 35 && temp < 36.0) {
			cout << "This is low temperature, your organism is weakened." << endl;
		} 
		else if (temp > 36.1 && temp < 37.0) {
			cout << "This is ok. You are healthy." << endl;
		}
		else if (temp > 37.0 && temp < 38.0) {
			cout << "This is slightly elevated temperature. You might be having a flu." << endl;
		}
		else if (temp >= 38.0) {
			cout << "It is very high temperature. You must be having some serious disease." << endl;
		}

		cout << "Type 'x' to exit, or type 'c' to continue this dialog, accordingly, and then press ENTER" << endl;
		cin >> input;
		if (input == "x") {
			break;
		} else continue;
		input = "";	// Clean up the "input" buffer
	}

	return 0;
}