# Operator Overloading

### wihtout opeartor overloading
```cpp
        complex sum(complex obj){
            complex t;
            t.real = this->real + obj.real;
            t.imag = this->imag + obj.imag;
            return t;
        }

        complex mul(complex obj){
            complex t;
            t.real = this->real * obj.real - this->imag*obj.imag;
            t.imag = this->real * obj.imag + this->imag*obj.real;
            return t;
        }
```

### With operator overloading
```cpp
        complex operator+(complex obj){
            complex t;
            t.real = this->real + obj.real;
            t.imag = this->imag + obj.imag;
            return t;
        }

        complex operator*(complex obj){
            complex t;
            t.real = this->real * obj.real - this->imag*obj.imag;
            t.imag = this->real * obj.imag + this->imag*obj.real;
            return t;
        }

```

## Types of Member variable
- Instance member variables / object variables
- static member variables / class variables
  
  ```cpp
  class A{
    int x;          // instance member variables
    static int y;   // static member variables , default value 0 
  };

  int A::y;         // define (memory)
  int main(){
    A a1,a2;
    A::y = 30;
  }
  ```

  - Instance member Variables :-
    - It is also called as object variables.
    - There will be as many copies of the instance member variables as there are number of objects.
    - Default value is Garbage
    - can be accessed through object only not throught class name 
  - Static member Variables :-
    - It is also called as class variables.
    - Thre will be only one copy of the static member variables and this copy will be shared by all the objects.
    - Default value is 0.
    - can be accessed through class name as well as object name but it is better to access it with class name.
  
  ```cpp
  class circle{
    int r;          // Instance member
    float area;     // Instance member
    static float PI;    // staticc member
  }c1,c2;
  ```


## static keyword
  ```cpp
  #include <iostream>
using namespace std;
class A{
    static int x;
    public:
        A(){
            x++;
        }
        ~A(){
            x--;
            cout << "count: " << x<<endl;
        }
        void display(){
            cout << "count: " << x<<endl;
        }
};
int A::x;

int main(){
    A a1;
    a1.display();
    A a2;
    a1.display();

    return 0;
}
  ```


  ## Types of member function
  - Instance member function / object function
  - Static member function / class function

```cpp
class A{
    int x;
    static int y;
    public:
    void f1(){

    }

    static void f2(){

    }
};


int main(){
    A a;
    a.f2();     // no address passed of a obj
    A::f2();    // no address passed

    return 0;
}
```



```cpp
class A{
    int x, y;
    public:
    void getdata(){
        cin>>x>>y;
    }
    // constant member function
    void display() const{
        cout<<x<<","<<y<<endl;
    }
};

int main(){
    A a1;
    a1.getdata();
    a1.display();       // call by address

    return 0;
}
```


##  constant member function
#### it cannnot member function : Itt cant change the value of any member variable but if it want to change any particular member then declare the variable as mutable
```cpp
    class A{
        int x;
        mutable int y;
    public:
    void display() const{
        // x = 111;    // error
        y = y + 12;     // it is allowed
        cout<<x<<","<<y<<endl;
    }
};
```


## Operator Overloading
- operator is a keyword
- we can overload any operator except 5 operators ( " :: " , " sizeof " , " ?: " , " . " , " -> ")
- Any one operand must be of user defined type
  - 5+5 (not allowd) , a1 + 5 (allowed)
- using operator overloading we cant create any new operator
- we cant change the precedence & associativity.
  

| binary operator overloading | unary operator overloading |
| --------------------------- | -------------------------- |
| a1 + a2                     |          a1++              |


## Binary operator overloading
```cpp
    this           obj
    a1      +       a2;
    ^---- left is   ^----------- right is argument
        calling object 

```


### Dummy opearator
#### In this postfix should be passed with dummy opeartor
```cpp
    //               |-------------- this is dummy parameter
    int operator++(int){   // postfix
        return x++;
    }
```


### eg code

```cpp
#include <iostream>
using namespace std;
class A{
    int x;
    public:

    A(int x):x(x){}

    //               |-------------- this is dummy parameter
    int operator++(int){   // postfix
        return x++;
    }
    
    int operator++(){
        return ++x;
    }

    void display(){
        cout << x << endl;
    }
};

int main(){
    A a1(5);
    cout << a1++ << endl;
    cout << ++a1 <<endl;
    a1.display();
    return 0;
}
```


## friend function

### Non Memeber function as a Friend
```cpp
#include <iostream>
using namespace std;
class B;
class A
{
    int x;
    public:
    A(): x(0){}
    A(int x): x(x){}
    friend int sum(A, B);
};

class B{
    int y;
    public:
    B(): y(0){}
    B(int y) : y(y){};
    friend int sum(A, B);
};

int sum(A a, B b){
    return a.x + b.y;
}

int main()
{
    A a(5);
    B b(5);
    cout << sum(a, b);
    return 0;
}
```

### Memeber function as a Friend 


```cpp
class A{
    public:
    void f1();
};

class B{
    public:
    friend void A::f1();
};

void A::f1(){

}
```


#### NOTE:- A function can be a member of only one class but it can be a friend of more than one classes. A member function can access private data of its class directly wihtout any object but a friend function can access the private members through object only.


### Study friend class on own


---------
## Challenge Question 

#### Q1 cout << a1 + 5;
```cpp
#include <iostream>
using namespace std;

class A{
    int x;
    public:
    A(int x): x(x){}
    
    int operator+(int y){
        return this->x + y;
    }
};

int main(){
    A a1(10);
    cout << a1 + 5;
    return 0;
}
```


#### Q2:  cout << 5 + a1;
```cpp
#include <iostream>
using namespace std;

class A{
    int x;
    public:
    A(int x): x(x){}
    friend int operator+(int, A);
};

int operator+(int y , A a1){
    return y + a1.x;
}

int main(){
    A a1(10);
    cout << 5 + a1;
    return 0;
}
```