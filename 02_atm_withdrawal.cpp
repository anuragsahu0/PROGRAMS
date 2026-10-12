#include <iostream>
using namespace std;

// Program to simulate ATM Withdrawal System
int main() {
    float balance, amount;

    cout << "Enter current balance: ";
    cin >> balance;

    cout << "Enter withdrawal amount: ";
    cin >> amount;

    if (amount <= 0) {
        cout << "Invalid withdrawal amount" << endl;
    } else if (amount > balance) {
        cout << "Insufficient balance" << endl;
    } else {
        balance = balance - amount;
        cout << "Withdrawn amount: Rs. " << amount << endl;
        cout << "Remaining balance: Rs. " << balance << endl;
    }

    return 0;
}
