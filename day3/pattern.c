#include <stdio.h>
int main(){
    int n = 5;
    for (int i = 1; i <= n; i++){
        for (int j = i; j >= 1; j--){
            printf("%d ", j%2);
        }
        printf("\n");
    }
        return 0;
}

// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1