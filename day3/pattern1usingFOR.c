#include <stdio.h>
int main(){
    unsigned  long int  n = 10;

    for (int cnt = 1 , term = 9; cnt <= n; term = term * 10 + 9,cnt++){
        printf("%lld ", term);
        
    }
        return 0;
}