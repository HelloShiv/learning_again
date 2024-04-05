#include <stdio.h>
int main(){
    int a = 1, b = 7, c = 3;
    int f, s, t;
    int max, smax , min;
    if(a > b){
        max = a;
        smax = b;
    }
    else
    {
        max = b;
        smax = a;
    }
    min = c;
    if (c > max)
    {
        min = smax;
        smax = max;
        max = c;
    } else if(c > smax){
        min = smax;
        smax = c;
    }

    a = min;
    b = smax;
    c = max;
    printf("a=%d b=%d c=%d", a, b, c);

    return 0;
}