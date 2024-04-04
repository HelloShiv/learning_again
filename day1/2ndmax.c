#include <stdio.h>
int main(){
    int a, b, c, max, smax;
    // do it yourself
    if(a > b){
        max = a;
        smax = b;
    }else {
        max = b;
        smax = a;
    }
    
    if(c > b){
        smax = max;
        max = c;
    }else if(c > smax){
        smax = c;
    }

    return 0;
}