/*
Lesson 5 | 10) Написати повноцінний калькулятор. Введення цифр
та вибір математичної операції виконати в діалоговому стилі
(запитати у користувача, вивести меню). У програмі передбачити
уникнення помилок (ділення на нуль і т.д.).
Фантазія та «дизайн» меню – ціниться та вітається!!!
*/

#include <iostream>
#include <string>
#include "windows.h" 
using namespace std;

int main() {

	string input = "";
	double leftOperand = 0, rightOperand = 0, result = 0;
	bool reset = true;
	while (input != "x") {

		if (reset == true) {
			cout << "==== This is calculator ================================" << endl;
			cout << "Type 'x' and press ENTER to exit this program,\nOr type the number, press ENTER, follow instruction, to continue." << endl;
			cin >> input;
		}

		if (input == "x") {
			break;
		}
		else if (reset == true) {
			result = stod(input);
			system("cls");
			cout << "==== This is calculator ================================" << endl;
			cout << "--------------------------------------------------------" << endl;
			cout << "|  " << result << endl;
			cout << "--------------------------------------------------------" << endl;
			cout << "|     +    |    -   |    *     |     /    |  r(reset)  |" << endl;
			cout << "--------------------------------------------------------" << endl;
			cout << "|  Choose operation (press ENTER)					    |" << endl;
			cin >> input;
			reset = false;
		}
		else if (reset == false) {
			system("cls");
			cout << "==== This is calculator ================================" << endl;
			cout << "--------------------------------------------------------" << endl;
			cout << "|  " << result << endl;
			cout << "--------------------------------------------------------" << endl;
			cout << "|     +    |    -   |    *     |     /    |  r(reset)  |" << endl;
			cout << "--------------------------------------------------------" << endl;
			cout << "|    Choose operation (press ENTER)				    |" << endl;
			cin >> input;
		}

		if (input == "+") {
			system("cls");
			cout << "====== This is calculator ==============================" << endl;
			cout << "|  " << result << " + " << endl;
			cout << "--------------------------------------------------------" << endl;
			cout << "|      Type the number to add to (press ENTER)         |" << endl;
			cin >> input;
			rightOperand = stod(input);
			system("cls");
			cout << "====== This is calculator ==============================" << endl;
			cout << "|  " << result << " + " << rightOperand << " = " << (result + rightOperand) << endl;
			result += rightOperand;
			cout << "--------------------------------------------------------" << endl;
			cout << "|      Type the number to add to (press ENTER)         |" << endl;
			Sleep(500);
			rightOperand = 0;
		}

		if (input == "-") {
			system("cls");
			cout << "====== This is calculator ==============================" << endl;
			cout << "|  " << result << " - " << endl;
			cout << "--------------------------------------------------------" << endl;
			cout << "| Type the number want to subtact (press ENTER)        |" << endl;
			cin >> input;
			rightOperand = stod(input);
			system("cls");
			cout << "====== This is calculator ==============================" << endl;
			cout << "|  " << result << " - " << rightOperand << " = " << (result - rightOperand) << endl;
			result -= rightOperand;
			cout << "--------------------------------------------------------" << endl;
			cout << "| Type the number you want to subtact (press ENTER)    |" << endl;
			Sleep(500);
			rightOperand = 0;
		}

		if (input == "*") {
			system("cls");
			cout << "====== This is calculator ==============================" << endl;
			cout << "|  " << result << " * " << endl;
			cout << "-------------------------------------------------------" << endl;
			cout << "| Type the number by which you want to multiply        |" << endl;
			cin >> input;
			rightOperand = stod(input);
			system("cls");
			cout << "====== This is calculator =============================" << endl;
			cout << "|  " << result << " * " << rightOperand << " = " << (result * rightOperand) << endl;
			result *= rightOperand;
			cout << "-------------------------------------------------------" << endl;
			cout << "| Type the number by which you want to multiply        |" << endl;
			Sleep(500);
			rightOperand = 0;
		}

		if (input == "/") {
			system("cls");
			cout << "====== This is calculator =============================" << endl;
			cout << "|  " << result << " / " << endl;
			cout << "-------------------------------------------------------" << endl;
			cout << "| Type the number by which you want to divide          |" << endl;
			cin >> input;
			rightOperand = stod(input);
			system("cls");
			cout << "====== This is calculator =============================" << endl;
			cout << "|  " << result << " / " << rightOperand << " = " << (result / rightOperand) << endl;
			result /= rightOperand;
			cout << "-------------------------------------------------------" << endl;
			cout << "| Type the number by which you want to divide          |" << endl;
			Sleep(500);
			rightOperand = 0;
		}

		if ((input == "reset") || (input == "r")) {
			reset = true;
		}

	}

	return 0;
}