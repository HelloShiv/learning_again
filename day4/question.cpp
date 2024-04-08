#include <iostream>
int main(){
    int a, b;
    int *p1, *p2;
    p1 = &a;
    p2 = &b;
    std::cin >> a >> b;
    // *p1 = (*p1) ^ (*p2);
    // *p2 = (*p1) ^ (*p2);
    // *p1 = (*p1) ^ (*p2);
    *p1 = *p2 - *p1 +(*p2 = *p1);
    std::cout << "value a: " << *p1 << " value b: " << *p2;
    return 0;
}