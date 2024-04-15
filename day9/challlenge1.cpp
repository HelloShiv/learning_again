#include <iostream>
using namespace std;

class A{
    int x;
    public:
    A(int x): x(x){}
    
    int operator+(int y){
        return this->x + y;
    }
};

int main(){
    A a1(10);
    cout << a1 + 5;
    return 0;
}