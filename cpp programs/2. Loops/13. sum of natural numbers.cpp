#include <iostream>
using namespace std;

int main() {
    int n;
    int sum = 0;

    cout << "Enter N: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    cout << "Sum of numbers from 1 to " << n << " is: " << sum << endl;

    return 0;
}
