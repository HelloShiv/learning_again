#include <iostream>
int main(){
    static int i = 1; // local variable / autommatic varaiable
    std::cout << "hello maya" << std::endl;
    i++;
    if(i > 5)
        return 0;
    main();
    return 0;
}