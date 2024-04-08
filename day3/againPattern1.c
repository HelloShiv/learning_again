#include <stdio.h>
int main(){
    int n = 10, i, j , k;
    for (int i = 1; i <= n; i++){

        for (int k = 1; k <= n  -i; k++){
            printf("  ");
        }

        for (int j = 1; j <= 2*i -1; j++){
            printf("%2d ", j%10);
        }
        printf("\n");
    }
        return 0;
}