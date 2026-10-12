#include <iostream>
#include <vector>
using namespace std;

// Sieve of Eratosthenes to find all primes up to N with O(N log log N)
int main() {
    int n;

    cout << "Enter limit N: ";
    cin >> n;

    if (n < 2) {
        cout << "No primes in this range." << endl;
        return 0;
    }

    // isPrime[i] will be true if i is prime
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = false;
    isPrime[1] = false;

    for (int p = 2; p * p <= n; p++) {
        if (isPrime[p]) {
            // Mark all multiples of p as not prime
            for (int i = p * p; i <= n; i += p) {
                isPrime[i] = false;
            }
        }
    }

    cout << "Primes up to " << n << " using Sieve of Eratosthenes:" << endl;
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
