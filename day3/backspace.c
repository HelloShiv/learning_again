#include <stdio.h>
int main(){
    int i = 1;
    int n = 10;
    while (i <= n){
        printf("%d ,", i);
        i++;
    }
    printf("\b ");   // takes the curson back and replaces it with space
    return 0;
}