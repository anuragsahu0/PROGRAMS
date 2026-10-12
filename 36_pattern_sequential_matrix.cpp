#include <iostream>
using namespace std;

// Sequential Matrix (Q2): 5 x 5 grid with numbers from 1 to 25
int main() {
    int n = 5;
    int count = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << count << " ";
            if (count < 10) cout << " "; // Formatting for alignment
            count++;
        }
        cout << endl;
    }

    return 0;
}
