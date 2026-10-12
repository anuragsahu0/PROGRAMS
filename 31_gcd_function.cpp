#include <iostream>
using namespace std;

// Modular function to calculate GCD of two numbers
int findGCD(int a, int b) {
    while (b != 0) {
        int rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}

int main() {
    int num1, num2;

    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    int gcd = findGCD(num1, num2);
    cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd << endl;

    return 0;
}
