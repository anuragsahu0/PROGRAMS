#include <iostream>
using namespace std;

// Increasing Number Triangle (Q4): row i prints 1 to i
// 1
// 1 2
// 1 2 3
// ...
int main() {
    int n = 5;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
