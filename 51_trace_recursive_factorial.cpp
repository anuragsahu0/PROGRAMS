#include <iostream>
using namespace std;

// Recursive Factorial Tracing (Q6): fun(4) = x * fun(x - 1)
int fun(int x) {
    cout << "Entering fun(" << x << ")" << endl;
    if (x <= 1) {
        cout << "Base case reached: fun(" << x << ") = 1" << endl;
        return 1;
    }
    int result = x * fun(x - 1);
    cout << "Returning from fun(" << x << ") = " << result << endl;
    return result;
}

int main() {
    cout << "Evaluating fun(4):" << endl;
    int ans = fun(4);
    cout << "Final Output: " << ans << endl;
    return 0;
}
