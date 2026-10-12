#include <iostream>
using namespace std;

// Function to calculate average of 3 numbers
double findAverage(double a, double b, double c) {
    return (a + b + c) / 3.0;
}

int main() {
    double x, y, z;

    cout << "Enter 3 numbers: ";
    cin >> x >> y >> z;

    double avg = findAverage(x, y, z);
    cout << "Average of " << x << ", " << y << ", " << z << " is: " << avg << endl;

    return 0;
}
