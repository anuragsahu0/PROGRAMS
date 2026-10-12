#include <iostream>
using namespace std;

// Chained Function Tracing (Q5): fun2(5) calling fun1(x)
int fun1(int x) {
    cout << "Inside fun1(" << x << "): computes (" << x << " * 2)" << endl;
    return x * 2;
}

int fun2(int x) {
    cout << "Inside fun2(" << x << "): calling fun1(" << x << ") + 3" << endl;
    return fun1(x) + 3;
}

int main() {
    cout << "Calling fun2(5):" << endl;
    int ans = fun2(5);
    cout << "Final Answer: " << ans << endl;
    return 0;
}
