#include <iostream>
using namespace std;

// Program to count positive perfect squares strictly less than N
int main() {
    int n;

    cout << "Enter integer N: ";
    cin >> n;

    int count = 0;
    for (int i = 1; i * i < n; i++) {
        count++;
    }

    cout << "Number of positive perfect squares strictly less than " << n << ": " << count << endl;

    return 0;
}
