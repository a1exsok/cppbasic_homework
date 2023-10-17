/*
Lesson 5 | 2) 2.Дано час(години, хвилини, секунди).
Визначити чи час допустимий( н-д 25.61.60 – недопустимий).
*/

#include <iostream>
#include <string>
using namespace std;

int main() {

    string input = "", time = "";
    bool timeIsValid = true;
    cin >> input;

    for (int i = 0; i < input.length(); i++) {

        if (input[i] == '.') {
            if ((stoi(time) < 0) || (stoi(time) > 60)) {
                timeIsValid = false;
            }
            time = "";
            continue;
        }
        else time += input[i];
        if (i == input.length() - 1) {
            if ((stoi(time) < 0) || (stoi(time) > 60)) {
                timeIsValid = false;
            }
        }

    }
    cout << "The time is " << (timeIsValid ? "Valid." : "Invalid.");

    return 0;
}