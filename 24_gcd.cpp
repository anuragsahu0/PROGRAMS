#include <iostream>
using namespace std;

// Program to find Greatest Common Divisor (GCD/HCF) of two numbers
int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    int x = a, y = b;

    // Euclidean algorithm
    while (y != 0) {
        int rem = x % y;
        x = y;
        y = rem;
    }

    cout << "GCD of " << a << " and " << b << " is: " << x << endl;

    return 0;
}
