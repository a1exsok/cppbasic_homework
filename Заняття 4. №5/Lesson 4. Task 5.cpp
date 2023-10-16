/*
Lesson 4 | 5) Дано 2 числа. Порівняти числа.
Вивести повідомлення виляду: ’перше число більше(менше, рівне) другому’.
*/

#include <iostream>
using namespace std;

int main() {

    int n1 = 2, n2 = 2;

    if (n1 > n2) {
        cout << "first number bigger than the second" << endl;
    }
    else cout << ((n1 < n2) ? "first number less than the second" : "first number equals the second");

    return 0;
}