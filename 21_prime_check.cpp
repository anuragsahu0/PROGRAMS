#include <iostream>
using namespace std;

// Program to check whether a number is Prime or Composite
int main() {
    int n;

    cout << "Enter a positive integer: ";
    cin >> n;

    if (n <= 1) {
        cout << n << " is neither Prime nor Composite" << endl;
        return 0;
    }

    bool isPrime = true;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime) {
        cout << n << " is a Prime number" << endl;
    } else {
        cout << n << " is a Composite number" << endl;
    }

    return 0;
}
