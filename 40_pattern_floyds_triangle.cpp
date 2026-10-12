#include <iostream>
using namespace std;

// Floyd's Triangle (Q6): Increasing numbers continuous
// 1
// 2 3
// 4 5 6
// ...
int main() {
    int n = 5;
    int count = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }

    return 0;
}
