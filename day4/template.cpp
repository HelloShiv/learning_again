#include <iostream>

template<typename T>
T sum (T x , T y){
    T t;
    t = x + y;
    return t;
}

int main(){
    std::cout << sum(5, 6) << std::endl;
    std::cout << sum(5, 6) << std::endl;
    std::cout << sum(5.4f, 6.4f) << std::endl;
    std::cout << sum(5.3, 6.3) << std::endl;
    return 0;
}