#include <iostream>
using namespace std;

// Function to return maximum of two numbers
int getMax(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int maximum = getMax(num1, num2);
    cout << "Maximum is: " << maximum << endl;

    return 0;
}
