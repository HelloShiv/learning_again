#include <iostream>
using namespace std;

class A{
    bool res;
    public:
    A(): res(false) {}
    A(bool a): res(a) {}

    bool operator!(){
        return !this->res;
    }
};

int
main()
{
    A maya(false);
    cout << !maya;
    return 0;
}