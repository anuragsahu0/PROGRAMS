#include <iostream>
using namespace std;

// Program to check if a number is Palindrome
int main() {
    int n;

    cout << "Enter number: ";
    cin >> n;

    if (n < 0) {
        cout << n << " is NOT a Palindrome" << endl;
        return 0;
    }

    int temp = n;
    int rev = 0;

    while (temp > 0) {
        rev = rev * 10 + (temp % 10);
        temp = temp / 10;
    }

    if (rev == n) {
        cout << n << " is a Palindrome" << endl;
    } else {
        cout << n << " is NOT a Palindrome" << endl;
    }

    return 0;
}
