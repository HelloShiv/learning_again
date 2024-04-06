#include <stdio.h>
int main(){
    // 1 , -3 , 5 ,-7
    int n = 10;
    int term = 1, cnt = 1 , sign = 1;
    while(cnt <= n){
        printf("%d ", term*sign);
        term += 2;
        sign = -sign;
        cnt++;
    }
}