# Class

### Difference between struct &  class   C++

|Structure| class|
|---------|------|
|struct keywordused | class keyword used|
| All members of structure are public by default | All members of class are private by default|
|Functuons are defined outside the structure so they are not the members| Functions can be defined inside the class so they are the members|

#### Throws error if directly accessed default i.e private members
```cpp
#include <iostream>
#include <string>
class Student{
    int roll;   // Default is Private
    std::string name;
    float per;
};  // WE CAN DECLARE GLOBAL OBJECTS THEREFORE ;

int main(){
    Student s1;
    s1.roll = 101;
    s1.name = "shiv";
    s1.per = 75.5;
    std::cout << s1.roll;
    return 0;
}
```
```cpp
class Student{
    int roll; 
    public:
    std::string name;
    private:
    float per;
    public:
    char st;
};
```


## Type of Access Specifiers OR visibility Modes
- public 
- private   (default)
- protected
  
## Encapsulation (In C++)
Bundling of member variable(data) as well as member functions(operations) together in a class as a single unit.


## Setter & Getter 
```cpp
#include <iostream>
class Date{
    private:
        int day, month, year;
    public:
        void setDay(int d){
            if( d >= 1 && d <=31){
                day = d;
            }else{
                day = 1;
            }
        }

        void setMonth(int m){
            if( m >= 1 && m <=12){
                month = m;
            }else{
                month = 1;
            }
        }
        void setYear(int y){
            year = y;
        }

        int getDay(){
            return day;
        }

        int getMonth(){
            return month;
        }
        int getYear(){
            return year;
        }
};

using namespace std;
int main(){
    Date dob;
    dob.setDay(12);
    dob.setMonth(1);
    dob.setYear(1220);

    cout << dob.getDay() << "/" << dob.getMonth() << "/" << dob.getYear() << endl;

    return 0;
}
```

## Features of OOPS
- OBJECTS :- Object is anything that has existence in real world or real world entity.
  - objects share some properties
- CLASS :- Class is a group of similar type of objects to store common properties of all objects.
- Data Hiding: by declaring them as private we can hide them from external objects. For SECURITY
- Data ABSTRACTION:- To hide the internal complex details of a class from external objects . For SIMPLICITY
- Encapsulation:- Bundling of member variables(data) as well as member functions (operations) together in a class as a single unit.