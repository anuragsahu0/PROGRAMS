#include <iostream>
using namespace std;

// Inverted Star Triangle (Q7): Starts with 5 stars and decreases
// * * * * *
// * * * *
// * * *
// * *
// *
int main() {
    int n = 5;

    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
