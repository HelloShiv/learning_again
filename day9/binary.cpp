#include <iostream>
using namespace std;
class A{
    int x;
    public:

    A(int x):x(x){}

    //               |-------------- this is dummy parameter
    int operator++(int){   // postfix
        return x++;
    }
    
    int operator++(){
        return ++x;
    }

    void display(){
        cout << x << endl;
    }
};

int main(){
    A a1(5);
    cout << a1++ << endl;
    cout << ++a1 <<endl;
    a1.display();
    return 0;
}