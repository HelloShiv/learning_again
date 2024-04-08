#include <iostream>

int square (int x , int y , int z ){
    return x*x , y*y , z*z;
}
int main(){
    std::cout << square(5,6,7);
    return 0;
}