#include <iostream>
void sum(int *a ,int *b){
    int t;
    t = *a;
    *a = *b;
    *b = t;
}
int main(){
    int a = 5, b = 9;
    sum(&a, &b);
    std::cout << "a: " << a << " b: " << b;
    return 0;
}