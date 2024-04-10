#include <iostream>
#include <algorithm>

struct  complex
{
    int real;
    int imag;
};

void swapbyValue(complex s1 , complex s2){
    complex t;
    t = s1;
    s1 = s2;
    s2 = t;
}

void swapbyRef(complex &s1 , complex &s2){
    complex t;
    t = s1;
    s1 = s2;
    s2 = t;
}

void swapbyAdd(complex *c1 , complex *c2){
    complex t;
    t = *c1;
    *c1 = *c2;
    *c2 = t;
}

int main(){
    complex c1, c2;
    c1.real = 5;
    c1.imag = 4;
    c2.real = 3;
    c2.imag = 2;
    // swapbyRef(c1, c2);
    swapbyAdd(&c1, &c2);
    std::cout << c1.real << "+ " << c1.imag << "i" << std::endl;
    std::cout << c2.real << "+ " << c2.imag << "i" <<std::endl;

    return 0;
}