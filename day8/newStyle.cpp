#include <iostream>
using namespace std;
class A
{
    int x , y;      
    public:
    A():x(0),y(0) {}

    A(int n): x(n),y(n){}                                   
    A(int x,int y): x(x),y(y){}
    void display(){
        cout <<x <<"\t"<<y<<endl;
    }
};
int main(){
    A a1(5,4),a2(5),a3;
    a1.display();
    a2.display();
    a3.display();
    return 0;
}