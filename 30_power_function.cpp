#include <iostream>
using namespace std;

// Function to compute x^n
long long calculatePower(int x, int n) {
    long long result = 1;
    for (int i = 0; i < n; i++) {
        result *= x;
    }
    return result;
}

int main() {
    int base, exp;

    cout << "Enter base (x): ";
    cin >> base;
    cout << "Enter exponent (n): ";
    cin >> exp;

    long long ans = calculatePower(base, exp);
    cout << base << "^" << exp << " = " << ans << endl;

    return 0;
}
