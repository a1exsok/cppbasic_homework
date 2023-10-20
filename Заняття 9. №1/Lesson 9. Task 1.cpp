/*
9 | 1) Оголосити тип структури Drib для збереження звичайного дробу.
Написати та протестувати функції для додавання та віднімання двох звичайних дробів.
*/
#include <iostream>
using namespace std;

struct Drib {

private:
	float value;

public:
	Drib(float _value) {
		value = _value;
	}

	void setValue(float _value) {
		value = _value;
	}

	float getValue() {
		return value;
	}
};

float additionOfDribs(Drib _drib1, Drib _drib2) {
	return _drib1.getValue() + _drib2.getValue();
}

float subtractionOfDribs(Drib _drib1, Drib _drib2) {
	return _drib1.getValue() - _drib2.getValue();
}

int main() {
	Drib drib1(2.735);
	Drib drib2(3.355);

	cout << "drib1 = " << drib1.getValue() << endl;
	cout << "drib2 = " << drib2.getValue() << endl;
	cout << "drib1 + drib2 = " << additionOfDribs(drib1, drib2) << endl;
	cout << "drib1 - drib2 = " << subtractionOfDribs(drib1, drib2) << endl;

	return 0;
}