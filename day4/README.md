# Exit control loop
## do while loop

```c
// syntax
do{
    statement;
    inc/dec;
}while(condition);  // compulsion ;
```
```c
 int i = 1;
 do{
    printf("%d" , i);
    i++
 }whie(i <= 5);
//  outputs : 1 , 2 , 3 , 4 , 5
```
### 32 Total numbers of keywords

### left shift operator
```c
//  left shift operator doubles
10 = 5 << 1
14 = 7 << 1
20 = 5 << 2
```

### right shift operator
```c
2 = 5 >> 1
3 = 7 >> 1
```

# Difference between C and C++
| C          | C++                       |
|------------|---------------------------|
|#include<stdio.h> | #include std \<iostream> |
|includes printf scanf | std librarary has iostream and has cin cout endl |
| printf("%d ", a); | cout << a ; |
|                   | cout is object of class ostream |
|                   | << is insertion operator        |
| scanf("%d",&a)    | cin >> a; |
|                   | cin is object of class istream | 
|                   |  |


```cpp
#include <iostream>
int main(){
    std::cout << 5 << 1 << std::endl; // 51
    std::cout <<(5<<1)<<std::endl;  //10
    return 0;
}
```

### what is namespace
```cpp
#include <iostream>
using namespace std;
namespace p1{
    int a = 5;
}
namespace p2{
    float a = 5.4f;
}

int main(){
    cout << p1::a <<endl;
    cout << p2::a <<endl;
    return 0;
}
```

```c
#include <iostream>
namespace INDIA{
    class hello{
        public:
        void print(){
            std::cout << "hello maya";
        }
    };
}
using namespace INDIA;
int main()
{
    hello h;
    h.print();
    return 0;
}
```

### MANIPULATOR
` std::endl  referes to end Of Line which is a manipulator`

` :: scope resolution operator`

## Variables
`Local Variables are initialized by garbage value`

`Global Varibales are initialized by 0`

```cpp
int b = 10; // global variable
int main(){
    int a = 5;  //local variable
    cout << a;
    cout << b;
}
```

####  if local and global variable have same variable weightage to local will be given
```cpp
int a = 5;
int main(){
    int a = 10;
    std::cout << a; // prints 10;
    std::cout << a; // prints 5;
}
```
`use scope resolutio :: operator to print the global variables when local is of same name ` 

## sum of two numbers

```cpp
#include <iostream>
using namespace std;
int main(){
    int a , b , sum ;
    cout <<'enter two numbers: ';
    // cerr <<"Error message "  For printing error message
    cin >> a >> b;
    sum = a + b;
    cout << sum;
    return 0;
}
```

`std::cout<< oct << number` for printing in octal

`std::cout<< hex << number` for printing in hex 

`cerr refers to console error `


# Import all header files
```cpp
#include <bits/stdc++.h>
// this header file includes all header files
```

# Function
### Types of functions
- Predefined function
  - header file import
  - call
- User Defined function
  - define it
  - call

```c
        int max(int , int)
        |         |______|__
        |                   |
    //return type           parameter / argument / input
```

```cpp
#include <bits/stdc++.h>
int maxx(int a , int b){
    return a > b ? a : b;
}
int main(){
    int a = 4 , b = 10;
    std::cout <<"Max is: "<< maxx(a,b); 
    return 0;
}
```

std::cout <<"Max is: "<<` maxx(a,b); ` Here maxx(a,b) is `actual parameter`

int `maxx(int a , int b)` Here int a , int b are `formal parameter` 

- Q1 sum of two numbers
    ```cpp
    int sum(int a , int b){
        return a+b;
    }

    int main(){
        int a = 5, b =10;
        cout << sum(a,b);
        return 0;
    }
    ```
- Q2 average of two numbers
    ```cpp
    int avg(int a , int b){
        return (a+b)/2;
    }
    
    int main(){
        int a = 5, b =10;
        cout << avg(a,b);
        return 0;
    }
    ```

## Function must be declared before calling
declare()

use()
```cpp
define(){<-----------
                    |
}                   |
main(){             |
    call();         |
}                   Bottom up approach
```

```cpp
                 
main(){             
    call(); ---------        
}                   |
                    |
define(){<----------|   Top down approach
                    
}                
```

## NOTE: A function can accept any number of arguments but can return maximum one output

what will happen

```cpp
int square (int x , int y , int z ){
    return x*x , y*y , z*z;
}
int main(){
    cout << square(5,6,7);
    return 0;
}
// outputs 49  as , operator will check from left to right but it will return the rightmost element
```

## NOTE: If a function does not return any value then it is called as VOID Function.


VOID FUNCTION
```cpp
void square (int x , int y , int z ){
    std::cout << x*x << y*y << z*z;
}
int main(){
    square(5,6,7);
    return 0;
}
// outputs 49  as , operator will check from left to right but it will return the rightmost element
```


# Call by Value

```cpp
// as the parameter is not a reference it updates only the copy
void increment(int a){
    a++;
}
int main(){
    int a = 5;
    increment(a);
    cout<< a;   // a prints 5
    return 0;
}
```

```cpp
// as the parameter is not a reference it updates only the copy
int increment(int a){
    a++;
    return a;
}
int main(){
    int a = 5;
    a = increment(a);
    cout<< a;   // a prints 6
    return 0;
}
```

## Function drawback
- slow execution speed 
  - SOLUTION: we can use `macro` function   