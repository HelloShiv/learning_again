#include <stdio.h>
int main(){
    int n = 9 , i , j, mid = (9+1)/2;
    for (i = 1; i <= n; i++){
        
        for (j = 1; j <= n;j++){
            if( i == mid  || j == mid )
                printf("* ");
            else if( j == 1 && i < mid)
                printf("* ");
            else if( j == n && i > mid)
                printf("* ");
            else if( i == n && j < mid)
                printf("* ");
            else if( i == 1 && j > mid)
                printf("* ");
            else
                printf("  ");
            
        }
        printf("\n");
    }

    // completed 
}