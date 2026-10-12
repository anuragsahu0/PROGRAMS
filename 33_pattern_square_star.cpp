#include <iostream>
using namespace std;

// Square Star Grid: N x N matrix with stars
int main() {
    int n;

    cout << "Enter N: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
