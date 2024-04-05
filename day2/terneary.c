#include <stdio.h>
int main(){
    int Y= 2023;

    printf(Y % 100 == 0 ? (Y % 400 == 0 ? "L.Y" : "Not") : (Y % 4 == 0 ? "LY" : "NOT"));

    return 0;
}

