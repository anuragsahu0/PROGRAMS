#include <iostream>
using namespace std;

// Program to check if X is a power of Y (Y^k = X)
int main() {
    long long x, y;

    cout << "Enter number X: ";
    cin >> x;
    cout << "Enter base number Y: ";
    cin >> y;

    if (y <= 1) {
        if (x == y) {
            cout << x << " is a power of " << y << endl;
        } else {
            cout << x << " is NOT a power of " << y << endl;
        }
        return 0;
    }

    long long temp = x;
    while (temp % y == 0) {
        temp = temp / y;
    }

    if (temp == 1) {
        cout << x << " is a power of " << y << endl;
    } else {
        cout << x << " is NOT a power of " << y << endl;
    }

    return 0;
}
