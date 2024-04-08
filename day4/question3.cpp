#include <iostream>

void max_min(int a ,int b , int *max , int *min){
    *max = a > b ? a : b;
    *min = a < b ? a : b;
}

int main(){
    int a = 9, b = 10;
    int max, min ;
    max_min(a, b, &max, &min);
    std::cout << " max: " << max << " min: " << min;

    return 0;
}