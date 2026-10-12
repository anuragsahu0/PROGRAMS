#include <iostream>
using namespace std;

// Program to print all prime numbers up to N
int main() {
    int n;

    cout << "Enter N: ";
    cin >> n;

    cout << "Prime numbers up to " << n << ":" << endl;
    for (int i = 2; i <= n; i++) {
        bool isPrime = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
