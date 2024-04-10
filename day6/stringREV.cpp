#include <iostream>
#include <algorithm>
#include <cstring>

void rev(char *name , int n){
    int left = 0, right = n-1;
    while(left < right){
        std::swap(name[left], name[right]);
        left++;
        right--;
    }
}

int main(){
    char name[20] = "hello there how";
    int length = std::strlen(name);
    rev(name, length);
    std::cout << name;
    return 0;
}