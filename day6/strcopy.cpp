#include <iostream>
#include <cstring>

void copy(char *s1 , int len , char* s2){
    int i = 0;
    while (s1[i] != '\0')
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
}

int main(){
    char s1[20] = "shiv";
    char s2[20];
    int len = std::strlen(s1);
    copy(s1, len, s2);
    std::cout << s2;

    return 0;
}