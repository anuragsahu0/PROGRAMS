#include <iostream>
using namespace std;

// Function to check voting eligibility (age > 18)
bool isEligibleToVote(int age) {
    return (age > 18);
}

int main() {
    int age;

    cout << "Enter age: ";
    cin >> age;

    if (isEligibleToVote(age)) {
        cout << "User is eligible to vote." << endl;
    } else {
        cout << "User is NOT eligible to vote." << endl;
    }

    return 0;
}
