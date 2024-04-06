#include <stdio.h>
int main(){
    int n = 9 , i , j, mid = (9+1)/2;
    for (i = 1; i <= n; i++){
        
        for (j = 1; j <= n;j++){
            if( i == mid || j == mid)
                printf("* ");
            
        }
        printf("\n");
    }

    // Incomplete 
}