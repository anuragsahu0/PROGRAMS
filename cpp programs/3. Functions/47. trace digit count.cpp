#include <iostream>
using namespace std;

int fun(int n) {
    int count = 0;
    cout << "Tracing fun(" << n << "):" << endl;
    while (n > 0) {
        count++;
        cout << "  step " << count << ": digit = " << (n % 10) 
             << ", remaining n = " << (n / 10) << endl;
        n /= 10;
    }
    return count;
}

int main() {
    int result = fun(12345);
    cout << "Final Digit Count of 12345: " << result << endl;
    return 0;
}
