#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1 ,s2;
    getline(cin, s1);
    getline(cin, s2);
    if (s1 > s2){
        cout << "s1 is greater:" << s1;
    } else if (s1 < s2){
        cout << "s2 is greater: " << s2;
    }else{
        cout << "equal";
    }
    
    return 0;
} 