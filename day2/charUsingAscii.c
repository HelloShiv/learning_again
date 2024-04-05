#include <stdio.h>
int main(){
    char c = getchar();
    if  ( c >= 97 && c <= 122){
        c = c - 32;
    } else if (c >= 'A' && c <= 'Z'){
        c = c + 32;
    }

    printf("char C :  ");
    putchar(c);
    return 0;
}
