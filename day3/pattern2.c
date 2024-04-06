#include <stdio.h>
// 1 , -1 , 1 , -1
int main(){
    int n = 10;
    int term = 1, cnt = 1;
    while (cnt <= n){
        printf("%d ,", term);
        term = term * -1;
        cnt++;
    }
    printf("\b ");

    return 0;
}