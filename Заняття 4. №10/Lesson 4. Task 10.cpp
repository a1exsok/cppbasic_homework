/*
Lesson 4 | 10) Дано 2 числа. Якщо перше число більше другого,
поміняти місцями значення змінних. Вивести значення змінних на екран.
*/

#include <iostream>
using namespace std;

int main() {

    int n1 = 12, n2 = 8, tmp = 0;

    cout << "Initially,\nn1 = " << n1 << "\nn2 = " << n2 << endl;
    cout << "====" << endl;
    if (n1 > n2) {
        tmp = n2;
        n2 = n1;
        n1 = tmp;
        cout << "Eventually,\nn1 = " << n1 << "\nn2 = " << n2 << endl;
    }
    else cout << "Eventually,\nn1 = " << n1 << "\nn2 = " << n2 << endl;

    return 0;
}