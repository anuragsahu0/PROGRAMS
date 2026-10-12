#include <iostream>
using namespace std;

// Program to check whether a number is Even or Odd
int main() {
    int n;

    cout << "Enter an integer: ";
    cin >> n;

    if (n % 2 == 0) {
        cout << n << " is Even" << endl;
    } else {
        cout << n << " is Odd" << endl;
    }

    return 0;
}
