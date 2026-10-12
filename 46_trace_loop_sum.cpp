#include <iostream>
using namespace std;

// Loop Sum Tracing (Q1): Trace sum(n) with inputs 5 and 3
int sum(int n) {
    int total = 0;
    cout << "Tracing sum(" << n << "):" << endl;
    for (int i = 1; i <= n; i++) {
        total += i;
        cout << "  i = " << i << ", current total = " << total << endl;
    }
    return total;
}

int main() {
    cout << "Result for sum(5): " << sum(5) << endl << endl;
    cout << "Result for sum(3): " << sum(3) << endl;
    return 0;
}
