#include <iostream>
using namespace std;

// Inverted Number Triangle (Q8): 1 to decreasing upper-limit
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1
int main() {
    int n = 5;

    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
