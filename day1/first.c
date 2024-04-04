#include <stdio.h>
int main(){
    int n = -5;
    printf("address of n is: %+d \n", n);

    unsigned short a = 65536;
    printf("short int : %hu", a);

    // DOUBT    
    unsigned long long b = 0;
    b--;
    printf("max range %llu", a);
    return 0;
}

// address is always positive
// %u is for +ive number use this in address printing