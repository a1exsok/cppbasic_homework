/*
Lesson 7 | 1) Дано час(години, хвилини, секунди). Знайти кількість секунд,
які пройшли від початку доби. Доступ до вхідних та результуючих даних програми
виконувати через вказівники
*/

#include <iostream>
using namespace std;

int main() {

	int currentHour = 0, currentMinutes = 0, currentSeconds = 0;
	int* _currentHour = &currentHour;
	int* _currentMinutes = &currentMinutes;
	int* _currentSeconds = &currentSeconds;
	cin >> *_currentHour >> *_currentMinutes >> *_currentSeconds;

	cout << "The current time is:" << endl;
	cout << *_currentHour << ":" << *_currentMinutes << ":" << *_currentSeconds;

	cout << "\nThe total seconds passed since the day start until the current time is:" << endl;
	cout << *_currentHour * 60 + *_currentMinutes * 60 + *_currentSeconds;
	return 0;
}