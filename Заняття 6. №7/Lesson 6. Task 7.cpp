/*
Lesson 6 | 7) Дано одновимірний масив.
Знайти суму елементів з непарними індексами.
*/

#include <iostream>
using namespace std;

int main() {

    const int size = 10;
    long* _array = new long [size] {-1, 3, 7, 0, -3, -5, 8, 2, 9, -7};
    long sum_elements_odd_index = 0;

    for (int i = 0; i < size; i++) {
        cout << _array[i] << " ";
        if (i % 2 != 0) sum_elements_odd_index += _array[i];
    }
    cout << "\nThe sum of the array elements with the odd indexes = " << sum_elements_odd_index << endl;

    delete[] _array;
    return 0;
}