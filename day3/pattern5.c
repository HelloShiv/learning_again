#include <stdio.h>
int main(){
    // 1 , 1 , 2 , 3 , 5 ,
    int n = 10;
    int term1 = 1, term2 = 1, cnt = 1, sum;
    
    while(cnt <= n){
        printf("%d ", term1);
        sum = term1 + term2;
        term1 = term2;
        term2 = sum;
        cnt++;
    }
    return 0;
}