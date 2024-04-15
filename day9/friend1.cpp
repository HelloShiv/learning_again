#include <iostream>
using namespace std;
class B;
class A
{
    int x;
    public:
    A(): x(0){}
    A(int x): x(x){}
    friend int sum(A, B);
};

class B{
    int y;
    public:
    B(): y(0){}
    B(int y) : y(y){};
    friend int sum(A, B);
};

int sum(A a, B b){
    return a.x + b.y;
}

int main()
{
    A a(5);
    B b(5);
    cout << sum(a, b);
    return 0;
}