#include <iostream>
using namespace std;

// Right-Angled Star Triangle (Q3): 1 star to 5 stars
int main() {
    int n = 5;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
