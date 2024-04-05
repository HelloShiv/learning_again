#include <stdio.h>
int main(){
    int grade = 90;
    switch (grade)
    {
    case 90 ... 100:
        printf("Grade A");
        break;
    case 80 ... 89:
        printf("Grade B");
        break;

    default:
        break;
    }
}