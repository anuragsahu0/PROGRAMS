#include <iostream>
using namespace std;

// Function Composition Tracing (Q4): square(add(2, 3))
int add(int a, int b) {
    cout << "Executing add(" << a << ", " << b << ") -> returns " << (a + b) << endl;
    return a + b;
}

int square(int x) {
    cout << "Executing square(" << x << ") -> returns " << (x * x) << endl;
    return x * x;
}

int main() {
    cout << "Calling square(add(2, 3)):" << endl;
    int result = square(add(2, 3));
    cout << "Final Result: " << result << endl;
    return 0;
}
