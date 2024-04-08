#include <iostream>
int main(){
    int a;
    float b;
    long long c;
    int *d;
    float *e;
    long long *f;
    std::cout << "int: " << sizeof(a) << " int* :" << sizeof(d)
              << " float: " << sizeof(b) << " float* :" << sizeof(e)
              << " long long: " << sizeof(c) << " long long* :" << sizeof(f);
    return 0;
}