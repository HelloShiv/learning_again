#include <stdio.h>
int main(){
    int roll;
    char name[20];

    printf("Enter roll:");
    scanf("%d", &roll);
    printf("Enter name: ");
    // fflush(stdin);
    scanf("\n%[^\n]" , name);
    // gets(name);
    printf("Roll is %d\n", roll);
    printf("Roll is %s\n", name);
    

    return 0;
}