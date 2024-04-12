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

## THIS POINTER / KEYWORD

```cpp
class student{
    private:
    int roll;       ----|-> instance member variable
    string name;    ----|
    public:
    void getdata(){
        cin>>roll;
        cin>>name;
    }
};
int main(){
    Student s1,s2;      // instantiated or object created
    s1.getdata();   // 1. &s1 is send to parameter 
    s2.getdata();   // 2. this pointer is added
                    // 3. -> is added to variables
    return 0;
}
```

## This
- "this" is a pointer
- "this" is also a keyword
- It stores the address of the function calling object 
- Every class contains only one "this" irrespective of number of objects
- "this" is of class type
- "this" is static
  
  ```cpp
  class Student{
    static Student *this;
  };

  class Employee{
    static Employee *this;
  }
  ```


### this (explicit use of this)
```cpp
class student{
    int roll;
    string name;
    public:
    void setData(int r , string n){
        roll = r;
        name = n;
    }
};

int main(){
    Student s1 , s2;
    s1.setdata(101,"ajay"); 
    |            ^
    |_____&s1____|

    s2.setdata(102,"vijay");    // call by address
    // 3 parameter are passed address too is passed
    return 0;
}
```


```cpp
----class student{
|        int roll;
|        string name;
|        public:
|        void setData(int r , string n){
|            roll = r;
|            name = n;
|        }
|-->    }
|
|  scope of member variables when names are different

```


```cpp
|---> class student{
|        int roll;
|--->    string name;
        public:
        void setData(int roll , string name){
            roll = roll;
            name = name;
        }
|
|    }
|
|--> scope of member variables when names are same

```

USING THIS KEYWORD
```cpp
class student{
        int roll;
        string name;
        public:
        void setData(int roll , string name){
            this->roll = roll;
            this->name = name;
        }
    }

Using this 

```

Q1. Question 
```cpp
class A{
    int x;
    public:
    void f1(){
        x = 5;
        int x = 10;
        cout << x <<endl; //prints 10 as local has more weightage
        cout <<this->x <<endl; // prints 5;
    }
}
```

## Inline function


OUTSIDE THE CLASS
```cpp

    void f1(){
        outside the class
        so we can manually define it as inline
    }

```

INSIDE THE CLASS
```cpp
class A{
    void f2(){
        defined inside the class
        so automatically becomes inline
    }
};
```

MANUALLY TAKING CHARGE OF SETTING INLINE OR NOT BY MOVING FUNCTION OUTSIDE OF CLASS

```cpp
#include <iostream>
using namespace std;
class A{
    int x, y;
    public:
        void getdata();
        void display();
};

void A::getdata(){
        cout << "Enter 2 integers: ";
        cin >> x >> y;
}
inline void A::display(){
        cout << x << "\t" << y << endl;
}

int main()
{
    A a;
    a.getdata();
    a.display();
    return 0;
} 
```

## Static array alternative
```cpp
#include <iostream>
#include <array>
using namespace std;

int main(){
    array<int, 5> a1;
    a1.fill(0);
    for(auto it: a1){
        cout << it << " ";
    }
    return 0;
}
```

### benefits
- when we pass an normal array then we need to pass the size but when we pass array class size is inbuilt in .

## Dynamic array 

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v1;
    cout << "v1 size " << v1.size()<<endl;
    cout << "Capacity is: " << v1.capacity() << "  ";   // 0
    v1.push_back(10);
    cout << "v1 size " << v1.size()<<endl;
    cout << "Capacity is: " << v1.capacity()<< "  ";    // 1
    v1.push_back(30);
    cout << "v1 size " << v1.size()<<endl;
    cout << "Capacity is: " << v1.capacity()<< "  ";    // 2
    v1.push_back(30);
    cout << "v1 size " << v1.size()<<endl;
    cout << "Capacity is: " << v1.capacity()<< "  ";    // 2*2
    v1.push_back(40);
    cout << "v1 size " << v1.size()<<endl;
    cout << "Capacity is: " << v1.capacity()<< "  ";    

    return 0;
}
```
#### insert at any index

`v1.insert(v1.begin(),5);`



#### print using vector iterator
```cpp
for (vector<int>::iterator itr = v1.begin(); itr != v1.end(); itr++){
        cout << *itr << "\t";
    }
```

#### print reverse vector iterator
```cpp
for (vector<int>::reverse_iterator itr = v1.rbegin(); itr != v1.rend(); itr++){
        cout << *itr << "\t";
    }
    cout << endl;
```


#### print using const iterator

```cpp
    for (vector<int>::const_iterator itr = v1.begin(); itr != v1.end(); itr++){
        // cout << (*itr)++ << "\t";
        cout << *itr << "\t";
    }

    cout << endl;
```


#### print using const revers iterator

```cpp
    for (vector<int>::const_reverse_iterator itr = v1.rbegin(); itr != v1.rend(); itr++){
        cout << *itr << "\t";
    }
    cout << endl;
```


#### print using indexing

```cpp
for(int i = 0 ; i < v1.size(); i++){
    cout<<v1[i]<<"\t";
    cout<<v1.at(i)<<"\t";
}
cout<<endl;
```