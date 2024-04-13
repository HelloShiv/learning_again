#include <iostream>
using namespace std;

class A{
    int x, y;
    public:
    A(){
        x = y = 0;
    }

    A(int x , int y){
        this->x = x;
        this->y = y;
    }

    A(const A &obj){  // obj is a1 call by REFERENCE ONLY
        cout << "Copy constructor called"<<endl;
        this->x = obj.x;
        this->y = obj.y;
    }

    void display(){
        cout << "x is: " << x << " y is: " << y << endl;
    }
    
};

int main(){
    A a1(5, 6);
    A a2(a1);
    a1.display();
    a2.display();
    return 0;
}