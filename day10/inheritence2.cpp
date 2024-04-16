#include<iostream>
using namespace std;
//Single Level Inheritance
class A{
    int x;
    public:
        A():x(0){}
        A(int x1):x(x1){}
        void setdata(int x1){
            x=x1;
        }
        void getdata(){
            cin>>x;
        }
        void display(){
            cout<<x<<endl;
        }
};
class B:public A{
    int y;
public:
        B():A(),y(0){}
        B(int x1,int y1):y(y1),A(x1){}
        void setdata(int x1,int y1){
            //x=x1; error as x is private of parent
            //setdata(x1); error
            A::setdata(x1);
            y=y1;
        }
        void getdata(){//function overriding
            //getdata();//recursive call
            A::getdata();
            cin>>y;
        }
        void display(){//function overriding
            A::display();
            cout<<y<<endl;
        }
};
int main(){
    B b1(10, 20);
    b1.display();

    return (0);
}