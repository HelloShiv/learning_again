#include <stdio.h>

int main(){
    int a,b,c,d;
    printf("enter a b c d: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if(a > b) {
        if(a > c) {
            if(a > d){
                printf("max is %d",a);
            }
            else{
                printf("max is %d",d);
            }
        }
        else {
            if (c > d) {
                printf("max is %d",c);
            }
            else {
                printf("max is %d", d);
            }
        }
    }
    else{
        if(b>c) {
            if (b>d) {
                printf("max is %d", b);
            }
            else{
                printf("max is %d", d);
            }
        }
        else{
            if (c > d) {
                printf("max is %d", c);
            }
            else{
                printf("max is %d", d);
            }
        }
    }
}