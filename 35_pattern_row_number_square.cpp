#include <iostream>
using namespace std;

// Row Number Square (Q1): 5 x 5 grid where each row repeats row number 5 times
// 1 1 1 1 1
// 2 2 2 2 2
// ...
int main() {
    int n = 5;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}
