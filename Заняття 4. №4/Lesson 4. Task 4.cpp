/*
Lesson 4 | 4) Дано 3 числа. Вивести true,
якщо серед них є додатні та парні.
*/

#include <iostream>
using namespace std;

int main() {

    int a = -3, b = 2, c = 7;

    if (a > 0 || a / 2 == 0) {
        cout << "true";
    }
    else if (b > 0 || b / 2 == 0) {
        cout << "true";
    }
    else if (c > 0 || c / 2 == 0) {
        cout << "true";
    }

    return 0;
}

