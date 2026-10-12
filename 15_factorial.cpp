#include <iostream>
using namespace std;

// Program to calculate factorial of a number N (N!)
int main() {
    int n;
    long long fact = 1;

    cout << "Enter N: ";
    cin >> n;

    if (n < 0) {
        cout << "Factorial not defined for negative numbers." << endl;
    } else {
        for (int i = 1; i <= n; i++) {
            fact *= i;
        }
        cout << "Factorial of " << n << " is: " << fact << endl;
    }

    return 0;
}
