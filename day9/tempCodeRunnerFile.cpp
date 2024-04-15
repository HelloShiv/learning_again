#include <iostream>
using namespace std;

class A{
    int x;
    public:
    A(int x): x(x){}
    friend int operator+(int, A);
};

int operator+(int y , A a1){
    return y + a1.x;
}

int main(){
    A a1(10);
    cout << 5 + a1;
    return 0;
}