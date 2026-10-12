#include <iostream>
using namespace std;

// Program to print all even numbers between 1 and N
int main() {
    int n;

    cout << "Enter N: ";
    cin >> n;

    cout << "Even numbers between 1 and " << n << ":" << endl;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
