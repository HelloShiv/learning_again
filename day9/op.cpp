#include <iostream>
using namespace std;
class A{
    int x;
    public:
    A():x(0){}
    A(int x):x(x){}
    A operator+(A obj){
        A t;
        t.x = this->x + obj.x;
        return t;
    }

    A add(A obj){
        A t;
        t.x = this->x + obj.x;
        return t;
    }

    void display(){
        cout << x << endl;
    }
};
int main()
{
    A a1(5), a2(6), a3;
    a3 = a1 + a2;
    a3 = a1.add(a2);
    a3.display();
    return 0;
}