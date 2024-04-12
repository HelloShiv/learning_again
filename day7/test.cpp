#include <iostream>
using namespace std;

class A{
    int x;
    public:
    void f1(){
        x = 5;
        int x = 10;
        cout << x <<endl; //prints 10 as local has more weightage
        cout <<this->x <<endl; // prints 5;
    }
};

int main(){
    A* a = new A();
    a->f1();
    return 0;
}