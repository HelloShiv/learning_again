#include <iostream>
using namespace std;
class A
{
    int x , y;      
    public:
    A(){
        cout<<"Defualt called" <<endl;
    }

    A(int x):A(){
        cout<<"Parameterized const called"<<endl;
        this->x = x;
    }
    A(int x,int y):A(x){
        cout<<"2 Parameterized const called"<<endl;
        this->x = x;
        this->y = y;
    }
};
int main(){
    A a1(5,4);
    return 0;
}