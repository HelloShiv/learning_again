#include <iostream>
using namespace std;

class B; // Forward declaration

class A {
    int x;
public:
    A(int x) : x(x) {};
    friend int B::f1(A); // Friend declaration inside class A
};

class B {
    int y;
public:
    B(int y) : y(y) {};
    int f1(A); // Declaration of f1 here
};

int B::f1(A a1) {
    return a1.x + y; // Accessing private member x of A
}

int main() {
    A a1(5);
    B b1(5);
    cout << b1.f1(a1);
    return 0;
}


// do it on own
// study 