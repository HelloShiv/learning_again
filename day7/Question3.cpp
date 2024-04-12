#include <iostream>
#include <string>
using namespace std;

class Student{
    int roll;
    string name;
    int sub1, sub2;
    float per;
    public:

    void setData(int r , string n , int s1 , int s2){
        roll = r;
        name = n;
        sub1 = s1;
        sub2 = s2;
        
    }

    void calc_per(){
        per = ((float)sub1 +  (float)sub2)/2;
    }

    void display(){
        cout << "Name: " << name << " percentage is: " << per <<endl;
    }
};

int main()
{
    Student s1, s2;
    s1.setData(1, "Maya", 11, 22);
    s1.calc_per();
    s1.display();

    s2.setData(2, "shiv", 100, 99);
    s2.calc_per();
    s2.display();
    return 0;
}