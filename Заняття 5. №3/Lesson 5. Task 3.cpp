/*
Lesson 5 | 3) Дано рік(номер року). Визначити чи рік високосний.
Рік високосний, якщо число року року ділиться націло на 4 і не ділиться на 100
(наприклад високосними є 1996, 1992 роки). Серед років, число яких має дві останні
цифри нулі(тобто рік ділиться на 100), високосними є ті що діляться на 400
(н-д, 1600, 1200 – високосні, а 1700, 1900 - ні).
*/

#include <iostream>
using namespace std;

int main() {
	int year = 0;
	cin >> year;

	if (year % 4 == 0) {
		if (year % 400 == 0) {
			cout << "Year " << year << " is a Leap Year.";
		}
		else if (year % 100 != 0) {
			cout << "Year " << year << " is a Leap Year.";
		}
	}
	else cout << "Year " << year << " is Not a Leap Year.";


	return 0;
}