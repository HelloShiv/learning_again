#include <stdio.h>
int main(){
    int a = 125;
    int rev = 0;
    while ( a > 0){
        int digit = a % 10;
        rev = rev*10 + digit ;
        a = a / 10;
    }
    printf("reverse of %d is %d ", a, rev);
    return 0;
}