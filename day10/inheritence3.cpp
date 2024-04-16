#include <iostream>
using namespace std;

class A{
    int x;
    public:
    A(int x):x(x){}

    void getdata(){
        cout << x << " ";
    }
};
class B: public A{
    int y;
    public:
    B(int x , int y): A(x){
        this->y = y;
    }
    void getdata(){
        cout << y << " ";
        A::getdata();
    }
};
class C: public B{
    int z;
    public:
    C(int x , int y , int z): B(x , y){
        this->z = z;
    }

    void getdata(){
        cout << z << " ";
        B::getdata();
    }
};

int main(){
    C c1(5, 2, 1);
    c1.getdata();
    return 0;
}