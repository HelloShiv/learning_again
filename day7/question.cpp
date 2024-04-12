#include <iostream>
using namespace std;

class Number{
    private:
        int x, y;
    public:
    inline void setData(int x1 , int y1){
        x = x1;
        y = y1;
    }

    inline void swapp(){
        x = y + -x + (y = x);
    }

    inline void display(){
        cout << "x is: " << x << " y is: " << y << endl;
    }
};

int main()
{
    Number n1;
    n1.setData(2, 3);
    n1.display();
    n1.swapp();
    n1.display();

    return 0;
}