#include <iostream>
using namespace std;

// Program to count total number of digits in a given number
int main() {
    int n;
    int count = 0;

    cout << "Enter number: ";
    cin >> n;

    if (n == 0) {
        count = 1;
    } else {
        int temp = (n < 0) ? -n : n;
        while (temp > 0) {
            count++;
            temp = temp / 10;
        }
    }

    cout << "Total number of digits: " << count << endl;

    return 0;
}
