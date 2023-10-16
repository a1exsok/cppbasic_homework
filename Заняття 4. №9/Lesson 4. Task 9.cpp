/*
Lesson 4 | 9) Дано символ.
Визначити чи символ є цифрою.
*/

#include <iostream>
using namespace std;

int main() {

    char symbol = '9';
    int symbolInt = (int)symbol;

    cout << "The symbol = " << symbol << endl;
    //cout << "The current symbol is " << (x == y ? "a square" : "NOT a square.");
    cout << "The current symbol is " << ((48 <= symbolInt) && (symbolInt <= 57) ? "a digit" : "NOT a digit") << endl;

    return 0;
}