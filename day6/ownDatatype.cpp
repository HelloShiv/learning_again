#include <iostream>
using namespace std;


struct Date 
{
    int day, year, month; // stuct will not get memory it will get memory when object is created ;;
};

struct Time{
    int h, m, s;
};

struct Address
{
    int pno;
    char lane[20];
    char city[20];
};

struct Student{
    int roll;
    Address add;
    Date dob;
    string name;
};

int main(){
    Date dob, doj;
    dob.day = 1;
    dob.month = 1;
    dob.year = 2020;
    doj.day = 2;
    doj.month = 2;
    doj.year = 2020;
    cout << "DOB is: " << dob.day << "/" << dob.month << "/" << dob.year << endl;
    cout << "DOJ is: " << doj.day << "/" << doj.month << "/" << doj.year << endl;

    return 0;
}
