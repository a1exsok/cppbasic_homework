/*
Lesson 4 | 3) Дано 3 цілих числа. Вивести на екран true,
якщо числа впорядковані за зростанням (наприклад 1 5 7 впорядковані
за зростанням, а 1 5 3 - ні), інакше вивести - false.
*/

#include <iostream>
using namespace std;

int main() {

    int a = 5;
    int b = 2;
    int c = 7;

    if (a < b) {
        cout << ((b < c) ? "true" : "false");
    }
    else cout << "false";

    return 0;
}