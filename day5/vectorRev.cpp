#include <vector>
#include <iostream>

int main(){
    std::vector<int> v1 = {23, 23, 43, 54, 654, 234};
    for (auto itr = v1.rbegin(); itr != v1.rend(); itr++){
        std::cout << *itr << std::endl;
    }
        return 0;
}