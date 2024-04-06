#include <stdio.h>
//  9 , 99 , 999 , 999
int main(){
    int n = 10;
    unsigned  long long int term = 9 , cnt = 1;
    while(cnt <= n){
        printf("%llu ", term);
        term = term * 10 + 9;
        cnt++;
    }

    return 0;
}