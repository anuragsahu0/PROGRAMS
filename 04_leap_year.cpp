#include <iostream>
using namespace std;

// Program to check whether a year is a Leap Year
int main() {
    int year;

    cout << "Enter year: ";
    cin >> year;

    // A year is a leap year if it is divisible by 400,
    // or divisible by 4 and not divisible by 100
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        cout << year << " is a Leap Year" << endl;
    } else {
        cout << year << " is not a Leap Year" << endl;
    }

    return 0;
}
