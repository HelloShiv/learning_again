#include <iostream>

int len(char *name , int len){
    int i = 0;
    while (name[i] != (char)'\0')
    {
        i++;
    }
    return i;
}

void upr(char *name , int len){
    int i = 0;
    while (name[i] != (char)'\0')
    {
        if(name[i] >= 'a' && name[i] <= 'z'){
            name[i] -= 32;
        }
        i++;
    }
}

int main(){
    char name[20] = "hello there maya";
    // std::cin.getline(name,20);
    std::cout << len(name, 20)<<std::endl;
    upr(name, 20);
    std::cout << name;

    return 0;
}