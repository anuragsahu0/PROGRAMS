#include <iostream>
using namespace std;

// Program to extract and print digits of a number
int main() {
    int n;

    cout << "Enter number: ";
    cin >> n;

    if (n == 0) {
        cout << "Digit: 0" << endl;
        return 0;
    }

    int temp = (n < 0) ? -n : n;

    cout << "Extracted digits (from right to left):" << endl;
    while (temp > 0) {
        int digit = temp % 10;
        cout << digit << " ";
        temp = temp / 10;
    }
    cout << endl;

    return 0;
}
