#include <iostream>
int main(){
    int m[3][4] ={{1,2,3,4},{5,6,7,8},{9,10,11,12}} , r = 3 , c = 4;
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c;j ++){
            std::cout << m[i][j] << " ";
        }
        std::cout << std::endl;
    }
}