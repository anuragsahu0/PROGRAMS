#include <iostream>
using namespace std;

// Function to calculate sum of odd numbers from 1 to N
int sumOfOdds(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int n;

    cout << "Enter N: ";
    cin >> n;

    int result = sumOfOdds(n);
    cout << "Sum of odd numbers from 1 to " << n << " is: " << result << endl;

    return 0;
}
