#include <iostream>

inline int add(int a , int b){
    return a + b;
}

int main(){
    int (*ptr)(int, int) = &add;
    std::cout << ptr(3, 5);
    return 0;
}