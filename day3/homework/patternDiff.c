#include <stdio.h>
int main(){
    int n = 5, i, j, num;
    for (int i = 1; i <= n; i++){
        num = i;
        for (int j = 1; j <= i; j++){
            printf("%d ", num%10);
            num = num + n - j;
        }
        printf("\n");
    }
        return 0;
}