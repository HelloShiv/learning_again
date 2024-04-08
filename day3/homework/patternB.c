#include <stdio.h>
int main(){
    int n = 5, i, j , mid = (n+1)/2;
    for (int i = 1; i <= n;i++){
        for (int j = 1; j <= n;j++){
            if(j == 1 || j == n || i == mid || i == 1 || i == n)
                printf("* ");
            // else if ( )
            else
                printf("  ");
        }
        printf("\n");
    }
        return 0;
}