#include <iostream>
#include <string.h>
#include <cstring>

using namespace std;
int main()
{
    char s1[20];
    char s2[20];
    cin.getline(s1, 20);
    cin.ignore();
    cin.getline(s2, 20);
    int res = strcmp(s1, s2);
    std::cout << res;
    // std::cout <<strlen(s1)<<std::endl;

    // strupr(s1);     // call by address
    // cout << s1 << endl;
    // strlwr(s1); // call by address
    return 0;
}