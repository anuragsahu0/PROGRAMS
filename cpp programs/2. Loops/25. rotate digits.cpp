#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, k;

    cout << "Enter number N: ";
    cin >> n;
    cout << "Enter rotation K (positive for left, negative for right): ";
    cin >> k;

    int temp = n;
    int count = 0;
    while (temp > 0) {
        count++;
        temp /= 10;
    }

    if (count <= 1) {
        cout << "Rotated number: " << n << endl;
        return 0;
    }

    k = k % count;
    if (k < 0) {
        k = k + count;
    }

    int div = 1;
    for (int i = 0; i < (count - k); i++) {
        div *= 10;
    }

    int leftPart = n / div;
    int rightPart = n % div;

    int multiplier = 1;
    for (int i = 0; i < k; i++) {
        multiplier *= 10;
    }

    int rotated = (rightPart * multiplier) + leftPart;

    cout << "Rotated number: " << rotated << endl;

    return 0;
}
