#include <iostream>
using namespace std;

class A{
    int x;
    public:
    void setdata(int x){
        this->x = x;
    }
    void getdata(){
        cin >> x;
    }

    void display(){
        cout << x << endl;
    }
};

class B: public A{
        int y;
    public:
    void setdata(int x1 , int y1){
        A::setdata(x1);
        y = y1;
    }
    void display(){
        cout << y << " ";
        A::display();
    }
};

int main()
{
    B b1;
    b1.setdata(10, 20);
    b1.display();

    return 0;
}