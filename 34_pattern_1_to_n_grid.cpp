#include <iostream>
using namespace std;

// Repeated 1 to N Grid: N x N matrix with 1 to N on each line
int main() {
    int n;

    cout << "Enter N: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
