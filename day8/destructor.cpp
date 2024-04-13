#include <iostream>
using namespace std;
class A
{
    int n;
    public:
    A(int n):n(n){
        cout <<"Constructor of object "<<n<<" called" << endl;
    }

    ~A(){
        cout <<"Destructor of object "<<n<<" called"<<endl;
    }
};

int main(){
    A a1(1),a2(2),a3(3);
    return 0;
}