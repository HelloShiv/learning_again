#include <stdio.h>
int main(){
    int n = 5 , i , j , k , mid;
    mid = (n + 1) / 2;
    for (i = 1; i <= n; i++)
    {
        for (k = 1; k <= n - i; k++){
            printf("  ");
        }
        for (j = 1; j <= 2 * i - 1; j++){
            if(j == 1 || j == 2*i -1 || i == mid ) 
                 printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

        return 0;
}