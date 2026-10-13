#include <iostream>
using namespace std;

void D() {
    cout << "Inside D()" << endl;
}

void C() {
    cout << "Inside C() - calling D()" << endl;
    D();
    cout << "Exiting C()" << endl;
}

void B() {
    cout << "Inside B() - calling C()" << endl;
    C();
    cout << "Exiting B()" << endl;
}

void A() {
    cout << "Inside A() - calling B()" << endl;
    B();
    cout << "Exiting A()" << endl;
}

int main() {
    cout << "Main starts" << endl;
    A();
    cout << "Main ends" << endl;
    return 0;
}
