/*
Lesson 5 | 4) 4. Вводиться вік і стать людини.
Визначити чи людина пенсійного віку(жінки – після 55, чоловіки – після 60).
*/

#include <iostream>
#include <string>
using namespace std;

int main() {

	string input = "";
	while (input != "x") {

		cout << "Please enter whether the person is a man or a wooman" << endl;
		cin >> input;
		if (input == "man") {
			cout << "Please enter the age of the person." << endl;
			cin >> input;
			cout << "The current person is " << (stoi(input) > 60 ? "of a pension age." : "NOT of a pension age.") << endl;
		}
		else if (input == "man") {
			cout << "Please enter the age of the person." << endl;
			cin >> input;
			cout << "The current person is " << (stoi(input) > 55 ? "of a pension age." : "NOT of a pension age.") << endl;
		}
		else {
			cout << "Please enter the age of the person." << endl;
			cin >> input;
			cout << "The current person is " << (stoi(input) > 60 ? "of a pension age." : "NOT of a pension age.") << endl;
		}

		cout << "Please type 'x' and press ENTER to exit, or type anything and press ENTER" << endl;
		cin >> input;

	}

	return 0;
}