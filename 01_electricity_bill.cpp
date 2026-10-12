#include <iostream>
using namespace std;

// Program to calculate Electricity Bill based on slab rates
int main() {
    int units;
    float bill = 0;

    cout << "Enter total units consumed: ";
    cin >> units;

    if (units <= 100) {
        bill = units * 5.0;
    } else if (units <= 200) {
        bill = (100 * 5.0) + (units - 100) * 7.0;
    } else if (units <= 300) {
        bill = (100 * 5.0) + (100 * 7.0) + (units - 200) * 10.0;
    } else {
        bill = (100 * 5.0) + (100 * 7.0) + (100 * 10.0) + (units - 300) * 12.0;
    }

    cout << "Total Electricity Bill: Rs. " << bill << endl;

    return 0;
}
