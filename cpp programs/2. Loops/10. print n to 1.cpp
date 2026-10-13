#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter N: ";
    cin >> n;

    cout << "Numbers from " << n << " to 1:" << endl;
    for (int i = n; i >= 1; i--) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
