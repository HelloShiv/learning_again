#include <stdio.h>
int main(){
    int num = 125;
    int sum = 0;
    while(num > 0){
        sum = sum + num % 10;
        num = num / 10;
    }
    printf("sum is: %d", sum);
    return 0;
}