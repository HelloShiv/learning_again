#include <iostream>
using namespace std;

class complex{
    int real, imag;
    public:
        complex() { real = imag = 0; }
        complex(int real , int imag): real(real),imag(imag){}

        void getdata(){
            cout << "Enter real: ";
            cin >> real;
            cout << "Enter imag: ";
            cin >> imag;
        }

        complex sum(complex obj){
            complex t;
            t.real = this->real + obj.real;
            t.imag = this->imag + obj.imag;
            return t;
        }

        complex mul(complex obj){
            complex t;
            t.real = this->real * obj.real - this->imag*obj.imag;
            t.imag = this->real * obj.imag + this->imag*obj.real;
            return t;
        }

        void display(){ 
            if(imag>=0)
                cout << real << "+" << imag << "i" << endl;
            else
                cout << real << imag << "i" << endl;
        }
};

int main(){
    complex c1, c2, c3, c4;
    c1.getdata();
    c2.getdata();
    c3 = c1.sum(c2);        // c1 sends the it via pointer
    cout << "Sum is ";
    c3.display();
    c4 = c1.mul(c2);
    cout << "Multiplication is: ";
    c4.display();

    return 0;
}