#include <stdio.h>
int main(){
    // 1 1 2 4 7 13
    int term1 = 1, term2 = 1, term3 = 2, sum, n = 10 ,cnt = 1;
    while(cnt <= n){
        printf("%d ", term1);
        sum = term1 + term2 + term3;
        term1 = term2;
        term2 = term3;
        term3 = sum;
        cnt++;
    }
    return 0;
}