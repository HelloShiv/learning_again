#include <iostream>
#include <string>
class Student{
    public:
    int roll;
    std::string name;
    float per;
};      

int main(){
    Student s1;
    s1.roll = 101;
    s1.name = "shiv";
    s1.per = 75.5;
    std::cout << s1.roll;
    return 0;
}