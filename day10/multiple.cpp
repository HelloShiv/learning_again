#include<iostream>
using namespace std;
//Multiple Inheritance
class A{
    int x;
    public:
        A():x(0){}
        A(int x1):x(x1){}
        void getdata(){
            cin>>x;
        }
        void display(){
            cout<<x<<endl;
        }
};
class B{
    int y;
public:
        B():y(0){}
        B(int y1):y(y1){}
        void getdata(){
            cin>>y;
        }
        void display(){
            cout<<y<<endl;
        }
};
class C:public A,public B{//This order will decide constructor calling order
    int z;
public:
    C():B(),A(){//This order will not decide constructor calling order
        z=0;
    }
    C(int x1,int y1,int z1):A(x1),B(y1){
        z=z1;
    }
    void getdata(){
        cin>>z;
        A::getdata();
        B::getdata();
    }
    void display(){
        A::getdata();
        B::display();
        cout<<z<<endl;
    }
};
int main(){
    C c1(10,20,30);
    c1.display();

    C c2;
    c2.getdata();
    c2.display();
    return (0);
}