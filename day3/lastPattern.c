#include <stdio.h>
int main(){
    int n = 5, i, j, k, l;
    for (i = n; i >= 1; i--){
        for (j = 1; j <= i; j++){
            printf("%c ", j+64);
        }
        for (k = 1; k <= 2 * (n - i) - 1;k++){
            printf("  ");
        }
        for (l = i; l >= 1; l--){
            if(l == n)
                continue;
            printf("%c ", l + 64);
        }
        printf("\n");
    }

    //mirror
    for (i = 1; i <= n; i++){
        for (j = 1; j <= i; j++){
            printf("%c ", j+64);
        }
        for (k = 1; k <= 2 * (n - i) - 1;k++){
            printf("  ");
        }
        for (l = i; l >= 1; l--){
            if(l == n)
                continue;
            printf("%c ", l + 64);
        }
        printf("\n");
    }
        return 0;
}

// error 