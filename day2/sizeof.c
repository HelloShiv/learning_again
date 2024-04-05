#include <stdio.h>
int main(){
    int a = 5;
    printf("\n%u", sizeof(a++));  // 32 bit
    printf("\n%d", a);    // prints 5 because sizeof(a++) does not execute the expression
    return 0;
}