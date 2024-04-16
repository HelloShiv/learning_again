# Inheritence
- single level
- multilevel 
- multiple
- hybrid 

### child cannot directly access the private members of parent


## 1. single level inheritence
```cpp
#include <iostream>
using namespace std;

class A{
    public:
        int x;
};

class B: public A{
    public:
        int y;
};

int main()
{
    B b1;
    b1.x = 5;
    b1.y = 10;
    cout << b1.x + b1.y;

    return 0;
}
```

#### same name function   ERROR
```cpp
class A{
    int x;
    public:
    void setdata(int x){
        this->x = x;
    }
    void getdata(){
        cin >> x;
    }

    void display(){
        cout << x << endl;
    }
};

class B: public A{
        int y;
    public:
    void setdata(int x1 , int y1){
        setdata(x1);        // when function call occurs it seraches it in the same by name and hence report argumnets error
        y = y1;
    }
    void display(){
        cout << y << " ";
        A::display();
    }
};
```



## function overriding:-
When there are two functions one is defined in parent class and another is defined in child class. Name and arguments of both the functions are same. So priority will be given to child class function. It means child function will override parent function but we can call parent function usign class name and :: .

```cpp
class A{
    public:
        void f1(){
            cout << "parent";
        }
};

class B: public A{
    public:
        void f1(){
            f1();   //recursive call
            A::f1();

        }
};
```


## Constructor in Inheritence

#### NOTE: constructor calling order is from parent to child.

```cpp
class A{
    int x;
    public:
    A(){
        x = 0;
    }
    A(int x1){
        x = x1;
    }
};

class B: public A{
    int  y;
    public:
    B(): A(){// if we forgot to call constructor then default will be invoked
        y =0;
    }
    B(int x1 , int y1): A(x1){  
        y = y1;
    }
};
```

By default all the constructors of child class will automatically call default constructor of parent class if not called by use explicitly.



### calling order
```cpp
#include <iostream>
using namespace std;

class A{
public:
    A(){
        cout << "Constructor of parent is called" << endl;
    }
    ~A(){
        cout << "Destructor of parent is called" << endl;
    }
};

class B: public A{
    public:
    B(){
        cout << "Constructor of child is called" << endl;
    }
    ~B(){
        cout << "Destructor of child is called" << endl;
    }
};

int main(){
    B b1;
    return 0;
}
// Constructor of parent is called
// Constructor of child is called
// Destructor of child is called
// Destructor of parent is called


```

## 2. Multilevel Inheritence
#### Q wap fro A B C inherits in ascending order
```cpp
#include <iostream>
using namespace std;

class A{
    int x;
    public:
    A(int x):x(x){}

    void getdata(){
        cout << x << " ";
    }
};
class B: public A{
    int y;
    public:
    B(int x , int y): A(x){
        this->y = y;
    }
    void getdata(){
        cout << y << " ";
        A::getdata();
    }
};
class C: public B{
    int z;
    public:
    C(int x , int y , int z): B(x , y){
        this->z = z;
    }

    void getdata(){
        cout << z << " ";
        B::getdata();
    }
};

int main(){
    C c1(5, 2, 1);
    c1.getdata();
    return 0;
}
```


### Important NOTE:
```cpp
class C: public A,B{    
    A is publically derived but B is privately derived
}


class C: public A,public B{
    A& B both are publically derived
}
```


## 3. Multiple Inheritence
```cpp
#include<iostream>
using namespace std;
//Multiple Inheritance
class A{
    int x;
    public:
        A():x(0){}
        A(int x1):x(x1){}
        void getdata(){
            cin>>x;
        }
        void display(){
            cout<<x<<endl;
        }
};
class B{
    int y;
public:
        B():y(0){}
        B(int y1):y(y1){}
        void getdata(){
            cin>>y;
        }
        void display(){
            cout<<y<<endl;
        }
};
class C:public A,public B{//This order will decide constructor calling order
    int z;
public:
    C():B(),A(){//This order will not decide constructor calling order
        z=0;
    }
    C(int x1,int y1,int z1):A(x1),B(y1){
        z=z1;
    }
    void getdata(){
        cin>>z;
        A::getdata();
        B::getdata();
    }
    void display(){
        A::getdata();
        B::display();
        cout<<z<<endl;
    }
};
int main(){
    C c1(10,20,30);
    c1.display();

    C c2;
    c2.getdata();
    c2.display();
    return (0);
}
```


## Access specifier

```cpp
class A{
    public:
    int x;
    private:
    int y;
    protected:
    int z;
};
```
----
CHILD

```cpp
class B: public A{
    public:
    B(){
        x = 0;
        // y = 0;  NO ACCESS TO PRIVATE
        z = 0;
    }
};
```
-----
NON CHILD
```cpp
class C{
    public:
    C(){
        A a1 ;
        a1.x = 0;
        //a1.y = 0; NO ACCESS TO PRIVATE
        // a1.z = 0; NO ACCESS TO PROTECTD
    }
};
```

### SHORTEN the Constructor
```cpp
void f1(){
    A a1(5);
    return a1;
}
```
CAN USE THIS
```cpp
void f1(){
    return A(5);
}
```




## Type of derivations (study on own)


# MAP

- Red black tree is used
- it does not store it using index but with key and values 
- #include <map>

```cpp
#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, float> m1;
    pair<int, float> p1(101, 67.5f);
    m1.insert(p1);

    // or
    m1.insert(pair<int, float>(104, 90.2f));

    // or
    m1.insert({103, 75.3f});
    // or
    m1[102] = 32.3f;

    for(pair<int,float> it: m1){
        cout << it.first << "  " << it.second << endl;
    }

    // using manual iterator
    for (map<int, float>::iterator itr = m1.begin(); itr != m1.end(); itr++)
    {
        cout << itr->first << " " << itr->second << endl;
        cout << (*itr).first << " " << (*itr).second << endl;
    }
    return 0;
}
```
NOTE: 
`by seraching the value which is not present it returns 0 value`


| map | unorederd_map|
|-----| ----------87---|
|key/value inserted | key/value inserted |
| use red black tree| uses hashing|
|0(logn)| O(1)|
|keys are sorted| keys are not sorted|
|no duplicates allowed|no duplicates allowed|


|map|multimap|
|---|--------|
|duplicate key not allowed| duplicate key allowed|
|m[101] = 74| m[101] = 23|
|m[101] = 87| m[101] = 24|
|74 removes to | m[101] = 23 , 24|


### MAP
- map
- unorderd_map      // worst case O(n)  -- best case O(1)
- multimap
  
### SET
- set
- unorderd _ set
- multiset


# Virtual Function

### Binding:
Binding is a process by which a function call is linked to its definition after comparing it with several definitions

### Types of binding
- compile time binding  / Early Binding / Static Binding
- Run time binding  / Late Binding / Dynamic Binding

In c++ default binding is EARLY BINDING.
BY adding VIRTUAL we can make it dynamic.

## NOTE:- (make code)
```cpp
PARENT CAN STORE THE POINTER OF CHILD TYPE
BUT
CHILD CANNOT STORE THE POINTER OF PARENT TYPE
```



```cpp
class A{
    public:
    void f1();
    void f2();
};

class B: public A{
    public:
    void f2();
    void f3();
};

int main(){
    A *p;
    p = new B();
    p->f2();    // common func
    p->f3();    // not allowed
    p->f1();    // allowed
}

// In this only common function can be called
```


#### virtual program
```cpp
#include <iostream>
using namespace std;

class Sim{
    public:
        virtual void calling(){
            cout << "no sim" << endl;
        };
        virtual void sms(){
            cout << "no sim" << endl;
        };
};
class Jio:public Sim
{
public:
    void calling(){
        cout << "Calling made from jio sim" << endl;
    }
    void sms(){
        cout << "sms sent from jio sim" << endl;
    }
};

class Bsnl:public Sim{
    public:
    void calling(){
        cout << "Calling made from bsnl sim" << endl;
    }
    void sms(){
        cout << "sms sent from bsnl sim" << endl;
    }
};

class Airtel:public Sim{
    public:
    void calling(){
        cout << "Calling made from airtel sim" << endl;
    }
    void sms(){
        cout << "sms sent from airtel sim" << endl;
    }
};

int main(){
    int n;
    cout << "1 for jio \n2 for bsnl \n3 for airtel \n Enter your choice: ";
    cin >> n;

    Sim *p;
    if (n == 1)
        p = new Jio();
    else if(n == 2)
        p = new Bsnl();
    else
        p = new Airtel();

    p->calling();
    p->sms();
    return 0;
}
```


## PURE VIRTUAL

```cpp
class Sim{
    public:
        virtual void calling() = 0;
        virtual void sms() = 0;
};
```