#include <iostream>
using namespace std;

// Program to calculate sum of digits of a number
int main() {
    int n;
    int sum = 0;

    cout << "Enter number: ";
    cin >> n;

    int temp = (n < 0) ? -n : n;
    while (temp > 0) {
        sum += (temp % 10);
        temp = temp / 10;
    }

    cout << "Sum of digits: " << sum << endl;

    return 0;
}
