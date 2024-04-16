#include <iostream>
using namespace std;

class A{
public:
    A(){
        cout << "Constructor of parent is called" << endl;
    }
    ~A(){
        cout << "Destructor of parent is called" << endl;
    }
};

class B: public A{
    public:
    B(){
        cout << "Constructor of child is called" << endl;
    }
    ~B(){
        cout << "Destructor of child is called" << endl;
    }
};

int main(){
    B b1;
    return 0;
}