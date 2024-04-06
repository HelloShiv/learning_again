#include <stdio.h>
int main(){
    int n = 5, i, j, mid;
    mid = (n + 1) / 2;
    for (i = 1; i <= n; i++){
        for (j = 1; j <= n; j++){
            if(i == 1 || i == mid || i == n || j == 1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
        return 0;
}