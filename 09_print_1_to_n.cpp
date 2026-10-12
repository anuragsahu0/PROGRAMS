#include <iostream>
using namespace std;

// Program to print natural numbers from 1 to N
int main() {
    int n;

    cout << "Enter N: ";
    cin >> n;

    cout << "Numbers from 1 to " << n << ":" << endl;
    for (int i = 1; i <= n; i++) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
