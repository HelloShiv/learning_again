#include <iostream>
using namespace std;
class A{
    int x, y;
    public:
        void getdata();
        void display();
};

void A::getdata(){
        cout << "Enter 2 integers: ";
        cin >> x >> y;
}
void A::display(){
        cout << x << "\t" << y << endl;
}

int main()
{   
    A a;
    a.getdata();
    a.display();

    return 0;
} 