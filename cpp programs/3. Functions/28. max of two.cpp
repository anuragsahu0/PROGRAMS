#include <iostream>
using namespace std;

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
