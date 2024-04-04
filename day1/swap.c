#include <stdio.h>
int main(){
    int a = 5, b = 3;
    printf("a is %d , b is %d  \n", a, b);
    a = b - a + (b = a);
    printf("a is %d , b is %d \n", a, b);
    return 0;
}