#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
int max(int a , int b){
    cout << "hello";
    return a + b;
}
int main()
{
    int a = 5, b = 10;
    cout << ::max(a, b);
    return 0;
}