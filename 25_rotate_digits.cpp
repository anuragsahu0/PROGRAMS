#include <iostream>
#include <cmath>
using namespace std;

// Program to rotate digits of a number N by K positions
// Positive K: Left Rotate, Negative K: Right Rotate
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

    // Normalize k within [0, count - 1]
    k = k % count;
    if (k < 0) {
        // Negative K is right rotation = left rotation by (count + k)
        k = k + count;
    }

    // Left rotate by k:
    // Split into prefix of k digits and suffix of (count - k) digits
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
