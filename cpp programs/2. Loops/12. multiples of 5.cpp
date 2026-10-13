#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter N: ";
    cin >> n;

    cout << "Multiples of 5 between 1 and " << n << ":" << endl;
    for (int i = 5; i <= n; i += 5) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
