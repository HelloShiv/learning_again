#include <iostream>
int sum(int a , int b){
    return a + b;
}
float sum(float a , float b){
    return a + b;
}
int main(){
    std::cout << sum(5.4f, 6.4f) << std::endl;
    std::cout << sum(5, 6);
    return 0;
}