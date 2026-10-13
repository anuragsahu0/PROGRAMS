#include <iostream>
using namespace std;

int main() {
    long long n;

    cout << "Enter an integer: ";
    cin >> n;

    if (n <= 0) {
        cout << n << " is NOT a power of 2" << endl;
    } else {
        long long temp = n;
        while (temp % 2 == 0) {
            temp = temp / 2;
        }

        if (temp == 1) {
            cout << n << " is a power of 2" << endl;
        } else {
            cout << n << " is NOT a power of 2" << endl;
        }
    }

    return 0;
}
