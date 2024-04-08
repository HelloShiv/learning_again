#include <iostream>
#include <algorithm> // Include for std::max
#include <math.h>
using namespace std;

int max(int a , int b) {
    cout << "hello";
    return a + b;
}

int main() {
    int a = 5, b = 10;
    cout << std::max(a, b); // Using global max function
    return 0;
}
