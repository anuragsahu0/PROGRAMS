#include <iostream>
using namespace std;

// Program to reverse digits of an integer
int main() {
    int n;
    int rev = 0;

    cout << "Enter number: ";
    cin >> n;

    int temp = (n < 0) ? -n : n;
    while (temp > 0) {
        rev = rev * 10 + (temp % 10);
        temp = temp / 10;
    }

    if (n < 0) {
        rev = -rev;
    }

    cout << "Reversed number: " << rev << endl;

    return 0;
}
