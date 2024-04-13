# Constructor & Destructor

### by default the value of members are garbage
```cpp
class A{
    int x , y;      // Default initialized by garbage value
    public:
    void init(){
        x=y=0;
    }
};
int main(){
    A a1,a2,a3;
    a1.init();      // need to make functions for every object
    return 0;
}

```

## Constructor
- It is a member function.
- It's name is same as of class name
- It is called automatically when an object is created.
- It is used to initialize instance member variables and allocate dynamic memory, open files, open resources and any other help required by the object.
- A Class can contain more than one constructor if there arguments are different and it is called as constructor overloading.
- Constructor cannot return any value so no return type not even VOID.
- 
  

## Variants Constructor

### Default zero argument constructor
```cpp
class A{
    int x , y;      // Default initialized by garbage value
    public:
    A(){
        x=y=0;
    }
};
int main(){
    A a1,a2,a3;
    return 0;
}
```

### Parameterized one argument constructor
```cpp
class A{
    int x , y;      
    public:
    A(int a){
        x=y=a;
    }
};
int main(){
    A a1(5),a2(6),a3;
    return 0;
}
```

### Parameterized two argument constructor
```cpp
class A{
    int x , y;      
    public:
    A(int x,int y){
        this->x = x;
        this->y = y;
    }
};
int main(){
    A a1(5,4),a2(6,3),a3;
    return 0;
}
```

### calling all constructor with same object (IMP)
```cpp
class A{
    int x , y;      
    public:
    A(){                                  <---------
        cout<<"Defualt called";                    |
    }                                              |
                                                   |
    A(int x):A(){                               <---
        cout<<"Parameterized const called";        |
        this->x = x;                               |
    }                                              |
    A(int x,int y):A(x){                        ---|
        this->x = x;
        this->y = y;
    }
};
int main(){
    A a1(5,4);
    return 0;
}
```

Decrease the size by new STYLE
```cpp
class A{
    int x , y;      
    public:
    A():x(0),y(0) {}

    A(int n): x(n),y(n){}                                   
    A(int x,int y): x(x),y(y){}
    void display(){
        cout <<x <<"\t"<<y<<endl;
    }
};
int main(){
    A a1(5,4),a2(5),a3;
    return 0;
}
```


### throws error as it has parameterized constructor so no default constructor will be initialized by default
```cpp
class A{
    int x;
    public:
    A(int n): x(x){}
};

int main(){
    A a1,a2(5); // throws error
}
```

### It will run as default constructor is provided by the compiler
```cpp
class A{
    int x;
    public:
    
};

int main(){
    A a1; 
}
```

#### Object life cycle
```cpp
object created --> constructor called --> f1 ---> f2 ---> f3 --> destructor called ----> object Destoryed


   devices on<-------object ----  files open
                      |  |-----> dynamic array
 resources open  <----|
```


## Destructor

- It is also a member function
- It's name is also same as of class name but a tiled(~) symbol is prefixed before its name.
- It is also automatically called just before object is destoryed.
- It is used to free any dynamic memory, close any file or resources , switch off any device or any other resources used by the object.
- It cannot accept any argument so a class cant contain more than one destructor. So destructor overloading is not possible.
- Destructor calling order is reverse of constructor calling order.
- Every class contains a Default constructor if not defined by us.
- Should be defined as public.

```cpp
class A{
    int x , y;      // Default initialized by garbage value
    public:
    A(){
        x=y=0;
    }
    ~A(){

    }
};
int main(){ 
    A a1,a2,a3;     // static object created
    A *p;           // Dynamic object
    p = new A();
    delete p;   // Destructor called.
    return 0;
}       // Destructor called
```
- when static object created as soon as its scope ends destructor is invoked BUT
- in dynamic Destructor the object does not invoke till the pointer is deleted 


```cpp
class A{
    int n;
    public:
    A(int n):n(n){
        cout <<"Constructor of object "<<n<<" called";
    }

    ~A(){
        cout <<"Destructor of object "<<n<<" called";
    }
};

int main(){
    A a1(1),a2(2),a3(3);
    return 0;
}

// Constructor of object 1 called
// Constructor of object 2 called
// Constructor of object 3 called
// Destructor of object 3 called
// Destructor of object 2 called
// Destructor of object 1 called

```


# Types Of Constructor :
- Default zero argument Constructor
- Parametrized constructor
- Default argument constructor
- Dynamic constrctor
- Copy Constrctor




# Default Argument Constructor
```cpp
class A{
    int x , y;
    public:
    A(){}           // REMOVE THIS FOR REMOVING AMBIGUITY
    A(int n):x(n),y(n){}
    A(int x1=0,y1=0): x(x1) , y(y1){}
};

int main(){
    A a1;   // ambiguous error
    A a2(5);    // ambiguos error
    A a3(5,7);

    return 0;
}

```

- When we remove default construtor
```cpp
class A{
    int x , y;
    public:
    
    A(int n):x(n),y(n){}
    A(int x1=0,y1=0): x(x1) , y(y1){}
};

int main(){
    
    A a2(5);    
    A a3(5,7);

    return 0;
}

```


## Dynamic constructor
```cpp
class Array{
    int *arr,;
    public:
    Array(){        // dynamic constructor
        n=5;
        arr= new int[n];
    }
    Array(int n){   // dynamic constructor
        this->n=n;
        arr=new int[n];
    }
    void getdata(){
        for(int i = 0 ; i < n;i++){
            cout <<"Enter element: ";
            cin>>arr[i];
        }
    }

    void sort(){
        ::sort(arr,arr+n);
    }
    void display(){
        for(int i = 0 ; i < n;i++)
            cout<<arr[i]<<"\t";
        cout <<endl;
    }

    ~Array(){
        delete [] arr;
    }
};

int main(){
    Array a1;
    a1.getdata();
    a1.sort();
    a1.display();

    Array a2;
    a2.getdata();
    a2.sort();
    a2.display();
    return 0;
}

```

## COPY CONSTRUCTOR
```cpp
eg:1
A a1(5,6);  // parameterized
A a2(a1);   // copy constructor called
A a3 = a2;  // copy constructor called

eg:2
A a1(5,6);
A a2;       
a1 = a2;    // no copy constructor will be called

eg:3
void f1(A obj){     // copy constructor called

}

A a1(3,4);
f1(a1);


eg:4
void f1(A &obj){     // No copy constructor called

}

A a1(3,4);
f1(a1);


eg:5
A f1(){
    A a1(5,6);
    return (a1);
}

A a2 = f1();        // copy constructor called
                    // Because of RVO Retrun Value of Optimization it might not call copy constructor.

``` 


----
## Function default value passing 

```cpp
void display(char ch="*",int n=5){
    for(int i = 0 ; i < n ; i++){
        std::cout <<ch;
    }
    std::cout <<endl;
}

int main(){
    display();  // will work
    display('+');   // will work
    display('-',10);    // will work
    display( ,10);  // will not work
    return 0;
}

```


##### eg code
```cpp
#include <iostream>
using namespace std;

class A{
    int x, y;
    public:
    A(){
        x = y = 0;
    }

    A(int x , int y){
        this->x = x;
        this->y = y;
    }

    A(const A &obj){  // obj is a1 call by REFERENCE ONLY
        cout << "Copy constructor called"<<endl;
        this->x = obj.x;
        this->y = obj.y;
    }

    void display(){
        cout << "x is: " << x << " y is: " << y << endl;
    }
};

int main(){
    A a1(5, 6);
    A a2(a1);
    a1.display();
    a2.display();
    return 0;
}
```


### by reference in C++
```cpp
#include <iostream>
using namespace std;

class A{
    int x, y;
    public:
    A(){
        x = y = 0;
    }

    A(int x , int y){
        this->x = x;
        this->y = y;
    }

    A(A &obj){  // obj is a1 call by REFERENCE ONLY
        cout << "Copy constructor called"<<endl;
        this->x = obj.x;
        this->y = obj.y;
    }

    void display(){
        cout << "x is: " << x << " y is: " << y << endl;
    }
};

int main(){
    A a1(5, 6),a2;
    
    a1.display();
    
    return 0;
}


```
### by address in c++
```cpp
#include <iostream>
using namespace std;

class A{
    int x, y;
    public:
    A(){
        x = y = 0;
    }

    A(int x , int y){
        this->x = x;
        this->y = y;
    }

    A(const A &obj){  // obj is a1 call by REFERENCE ONLY
        cout << "Copy constructor called"<<endl;
        this->x = obj.x;
        this->y = obj.y;
    }

    void display(){
        cout << "x is: " << x << " y is: " << y << endl;
    }

    void f1(A &obj){

    }
};

int main(){
    A a1(5, 6) ,a2;
    // A a2(a1);
    a2.f1(a1);
    a1.display();
    // a2.display();
    return 0;
}
```


#### Every class contains a copy constructor even if we do not initialize it.


----
## By default class has this
```cpp
class A{
    public:
    A(){
        default constructor
    }

    A(const A &obj){
        copy constructor
    }

    A operator=(A obj){
        equal opeartor
    }
    ~A(){
        destructor
    }
};
```
- Default constructor
- copy constructor
- equal opeartor
- destructor

If a class contains any dynamic array then we should define our own copy constructor


```cpp
class A{
    int *p;
    int n;
    public:
    A(int n){
        this->n = n;
        p = new int[n];
    }
}
```

### shallow copy 
```cpp
#include <iostream>
using namespace std;
// shallow copy by defalut copy constructor

class A{
    public: 
    int *p, n;
    A(int n){
        this->n = n;
        p = new int[n];
    }

    void getdata(){
        for (int i = 0; i < n; i++){
            cin >> p[i];
        }
    }

    void display(){
        for (int i = 0; i < n; i++){
            cout << p[i] << "\t";
        }
        cout << endl;
    }
};

int main(){
    A a1(3);
    a1.getdata();      
    A a2(a1);       // photo copy
    a1.display();   // 11 20 30
    a2.display();   // 11 20 30

    return 0;
}
```


### DEEP copy
```cpp
#include <iostream>
using namespace std;
// shallow copy by defalut copy constructor

class A{
    public: 
    int *p, n;
    A(int n){
        this->n = n;
        p = new int[n];
    }

    A(const A &obj){
        this->n = obj.n;
        this->p = new int[obj.n];
        for (int i = 0; i < n; i++){
            this->p[i] = obj.p[i];
        }
    }
    void getdata(){
        for (int i = 0; i < n; i++){
            cin >> p[i];
        }
    }

    void display(){
        for (int i = 0; i < n; i++){
            cout << p[i] << "\t";
        }
        cout << endl;
    }
};

int main(){
    A a1(3);
    a1.getdata();
    A a2(a1);
    a1.p[0] = 12;
    a1.display();
    a2.display();

    return 0;
}
```
----

### how to use in forward declaration
```cpp
void display(char='*' , int=4);

int main(){
    display();  // will work
    display('+');   // will work
    display('-',10);    // will work
    display( ,10);  // will not work
    return 0;
}

void display(char ch,int n){
    for(int i = 0 ; i < n ; i++){
        std::cout <<ch;
    }
    std::cout <<endl;
}

```
