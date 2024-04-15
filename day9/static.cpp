#include <iostream>
using namespace std;
class A{
    static int x;
    public:
        A(){
            x++;
        }
        ~A(){
            x--;
            cout << "count: " << x<<endl;
        }
        void display(){
            cout << "count: " << x<<endl;
        }
};
int A::x;

int main(){
    A a1;
    a1.display();
    A a2;
    a1.display();

    return 0;
}