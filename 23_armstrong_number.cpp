#include <iostream>
#include <cmath>
using namespace std;

// Program to check whether a number is an Armstrong number
int main() {
    int n;

    cout << "Enter number: ";
    cin >> n;

    int temp = n;
    int digits = 0;

    // Count number of digits
    while (temp > 0) {
        digits++;
        temp = temp / 10;
    }

    temp = n;
    int sum = 0;

    // Calculate sum of each digit raised to power 'digits'
    while (temp > 0) {
        int rem = temp % 10;
        int p = 1;
        for (int i = 0; i < digits; i++) {
            p *= rem;
        }
        sum += p;
        temp = temp / 10;
    }

    if (sum == n) {
        cout << n << " is an Armstrong number" << endl;
    } else {
        cout << n << " is NOT an Armstrong number" << endl;
    }

    return 0;
}
