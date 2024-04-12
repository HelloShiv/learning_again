#include <iostream>
#include <array>
using namespace std;

int main(){
    array<int, 5> a1;
    a1.fill(0);
    for(auto it: a1){
        cout << it << " ";
    }
    return 0;
}