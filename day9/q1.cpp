#include <iostream>
#include <string>
using namespace std;

class Student{
    int roll;
    string name;
    float marks;
    public:
    Student(int roll , string name , float marks): roll(roll),name(name),marks(marks){ }

    bool operator>(const Student& s2) {
        return this->marks > s2.marks;
    }

    bool operator<(const Student& s2) {
        return this->marks < s2.marks;
    }

    bool operator==(const Student& s2) {
        return this->marks == s2.marks;
    }
};



int main(){
    Student s1(101, "Ajay", 75.5f);
    Student s2(102, "Vijay", 85.5f);
    if(s1 > s2)
        cout << "Student s1 is greater";
    else if (s1 < s2)
        cout << "Student s2 is greater";
    else if( s1 == s2){
        cout << "Student s1 == s2 is equal";
    } 
    return 0;
}