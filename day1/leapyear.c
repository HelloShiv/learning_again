#include <stdio.h>
int main(){
    int year = 2000;
    
    if( year % 100 == 0){
        if(year % 400 == 0)
            printf("this is a leap year");
        else
            printf("this is not leap year");
    }
    else
    {
        if(year %4 == 0)
            printf("this is a leap year");
        else
            printf("this is not leap year");
    }
    return 0;
}