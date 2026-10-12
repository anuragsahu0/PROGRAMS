#include <iostream>
using namespace std;

// Program to calculate sum of even and odd numbers in a single loop
int main() {
    int n;
    int sumEven = 0, sumOdd = 0;

    cout << "Enter N: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            sumEven += i;
        } else {
            sumOdd += i;
        }
    }

    cout << "Sum of Even numbers (1 to " << n << "): " << sumEven << endl;
    cout << "Sum of Odd numbers (1 to " << n << "): " << sumOdd << endl;

    return 0;
}
