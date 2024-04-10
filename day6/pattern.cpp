#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name = "maya";
    for (int i = 0; i < name.length(); i++){
        for (int j = 0; j <= i; j++){
            cout << name[j] << " ";
        }
        cout << endl;
    }

     for (int i = name.length() -1 ; i >= 0; i--){
        for (int j = 0; j <= i; j++){
            cout << name[j] << " ";
        }
        cout << endl;
    }
        return 0;
}