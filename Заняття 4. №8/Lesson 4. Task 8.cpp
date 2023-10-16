/*
Lesson 4 | 8) Дано сторони прямокутника.
Визначити чи прямокутник є квадратом.
*/

#include <iostream>
using namespace std;

int main() {

    int x = 10, y = 11;

    cout << "The sides of the rectangle are " << x << " and " << y << endl;
    cout << "Current rectangle is " << (x == y ? "a square" : "NOT a square.");

    return 0;
}