#include <iostream>
using namespace std;

// Digit Sum Tracing (Q3): Modulo and division logic for fun(1234)
int fun(int n) {
    int sum = 0;
    cout << "Tracing digit sum for fun(" << n << "):" << endl;
    while (n > 0) {
        int rem = n % 10;
        sum += rem;
        cout << "  extracted digit: " << rem << ", running sum: " << sum 
             << ", remaining n: " << (n / 10) << endl;
        n /= 10;
    }
    return sum;
}

int main() {
    int total = fun(1234);
    cout << "Final Sum of Digits of 1234: " << total << endl;
    return 0;
}
