#include <iostream>
using namespace std;

// Program to verify identity: (a + b)^3 = a^3 + b^3 + 3*a^2*b + 3*a*b^2
int main() {
    long long a, b;

    cout << "Enter integer a: ";
    cin >> a;
    cout << "Enter integer b: ";
    cin >> b;

    long long lhs = (a + b) * (a + b) * (a + b);
    long long rhs = (a * a * a) + (b * b * b) + (3 * a * a * b) + (3 * a * b * b);

    cout << "LHS = (a + b)^3 = " << lhs << endl;
    cout << "RHS = a^3 + b^3 + 3a^2b + 3ab^2 = " << rhs << endl;

    if (lhs == rhs) {
        cout << "VERIFIED" << endl;
    } else {
        cout << "NOT VERIFIED" << endl;
    }

    return 0;
}
