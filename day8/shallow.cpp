#include <iostream>
using namespace std;
// shallow copy by defalut copy constructor

class A{
    public: 
    int *p, n;
    A(int n){
        this->n = n;
        p = new int[n];
    }

    void getdata(){
        for (int i = 0; i < n; i++){
            cin >> p[i];
        }
    }

    void display(){
        for (int i = 0; i < n; i++){
            cout << p[i] << "\t";
        }
        cout << endl;
    }
};

int main(){
    A a1(3);
    a1.getdata();
    A a2(a1);
    a1.display();
    a2.display();

    return 0;
}