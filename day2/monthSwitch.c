#include <stdio.h>
int main(){
    int month = 10;
    switch (month)
    {
    case 2:
        printf("28 or 29 days");
        break;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("31 days");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("30 days");
        break;
    default:
        printf("Invalid month");
        break;
    }

    return 0;
}