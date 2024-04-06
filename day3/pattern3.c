#include <stdio.h>
int main(){
    //   1 , 0  , 1 , 0  ,1
    int n = 10;
    int term = 1, cnt = 1;
    while(cnt <= n){
        printf("%d ", term);
        term = !term;
        cnt++;
    }
    return 0;
}