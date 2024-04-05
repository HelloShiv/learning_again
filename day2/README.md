# DAY 2
#### Q1 wap to print 3 numbers in increasing order
    ans: in sort3numbers.c

### Problem in nested if else 
- introduction of else if
![alt text](image.png)
- ElIf is a preprocessor directive in c

# Keywords in  C are 32
- switch 
- case
- default
- break

# Switch
- only int constant is allowed in case eg: 
```c
switch(day){
    case 1: printf("hello world");
        break;
}
```
- case 'a'   allowed
- case  5+4-2    allowed
- case 98 & case 'b'   gives duplicate error

### Recently switch case can take range
```c
    switch(){
        case 90 ... 100:
    }
```

| Ascii | Range     |
| ------ | -------- |
| 'a'-'z'| 97 to 122 |
| 'A'-'Z'| 65 to 90  |
| '0'-'9'| 48 to 57  |
| space | 32        |

### WAP for lowercase to uppercase
- using ascii
- without using ascii
- using predefined function 'A' = toUpper('a') d

### Input character in c using
```c
// Different methods
 scanf("%c" , & c);
 ch = getchar();
 ch = getche()
 ch = getch();
```

## check the uppercase or not
```c
    char ch;
    printf(toUpper(ch));  // convert to upper case
    printf(toLower(ch));  // convert to lower case
    printf(isUpper(ch));  // check's if it is  upper case
    printf(isLower(ch));  // check's if it is lower case
    printf(isdigit(ch));

```

---
# OPERATOR
 ```c
    5            +             4
    operand    operator      operand
 ```

 ### Types of operator
- unary(1)   eg. a++
- binary (2)    eg. 5 + 4
- ternary (3)   ? :

#### Airtmetic operator
`
  low precedence + -  
`

`
  high precedence * / % 
`

###  rules of  associativity 
in notebook


## ERROR types
- compile time error
- run time error            
 ` printf(5/0); `
- logical error


## modulus
- 5 % 2 = 1
- 5.1 % 2 = Compile time error (Solution fmod(5.1,2))
- -5 % 2  = -1
- 5 % -2  = 1
- -5 % -2 = -1
- 2 % 5  = 2
- 0 % 5  = 0
- 5 % 0 = RT error
- 'a' % 'b' = 97

```c
    5 - 7 / 14 * 2 - 15 % 6 * 3 -7 % 9 * 2 + 15
ans: 5 - 0  - 9 -7 *2 + 15
ans: 5 -9 -14 + 15
ans: -3 
```

## Unary Operator  : they have same precedence
- +ve
- -ve
- ++
- \--
- sizeof
- (type)
  
`++ and -- saves time and easier to type`

```c
    printf("%u" , sizeof(short)); // 2
    printf("%u" , sizeof(5.4));  // 8
    printf("%u" , sizeof('a'));  // compiler dependent 2 / 4 / 8  as it is deduced to asci

```

Sizeof **does not executes expression** in it
```c
int main(){
    int a = 5;
    printf("\n%u", sizeof(a++));  // 32 bit 
    printf("\n%d", a);    // prints 5 because sizeof(a++) does not execute the expression
    return 0;
}
```

` float to int   is downcast or narrowing`

` int to float   is upcast or widening`

let a = 5;
| Postfix | Prefix |
| ------- | -------|
| a++     | ++a    | 
| printf("%d" , a++) | printf("%d", ++a) |
| printf("%d" , a)   | printf(%d", a)    |

### Question
Q1
```c
    int a = 5 , b = 6 , c;
    c = a++ * b++;
    printf("%d%d%d",a,b,c); // 6 , 7 , 30

```
Q2
```c
    int a = 5 , b = 6 , c;
    c = ++a * ++b;
    printf("%d %d %d", a , b ,c) // 6 , 7 , 42
```
Q3
```c
    int a = 5 , b;
    b = a++ * a++ ;
    printf("%d %d" , a , b)
    //  compiler dependent 
```
Q4  Solution for above is **VOLATILE**
```c
    volatile int a = 5 , b;
    b = a++ * a++ ;
    printf("%d %d" , a , b)
    //  now gives 7 , 30
```

Q5
```c
    volatile int n = 1;
    printf("%d %d" , 3* n , n++)
    //  In this the expression will go from RIGHT TO LEFT
    // it gives 6 , 1
```
Q6 
```c
int main(){
    int n = 1;
    printf("%d %d", 3 * n, n++);
    //  different compiler will give different answer
    return 0;
}
```

## Realational Opeartor
-  <
-  \>
-  <=
-  \>=

## Assignment operator (Right to left)
- =
- +=
- -=
- *=
- /=
- %=
  
## Equality operator
- ==
- !=
  
## Logical opeartor
- &&
- ||
- !
  
## comma operator ,  V.V.IMP
**It works from left to Right but returns right most value**
```c
    int a = 5;
    if( a> 2 , a> 4 , a > 7)
        printf("hello");
    else 
        printf("bye");
    // prints bye
```
# Conditional Operator
`condition ? truestate : falsestate;`

#### Q differeence between conditional and if else
: is compulsory in terneray but in if else **else** is not compulsory


Wap to detect max btw 3 numbers
```c
#include <stdio.h>
int main(){
    int a = 2, b = 10, c = 3, d = 4 , max;

    max = a > b ? (a > c ? (a > d ? a : d) : (c > d ? c : d))
                : (b > c ? (b > d ? b : d) : (c > d ? c : d));

    printf("max is %d",max );
    return 0;
}
```
Q wap to detect leap year

```c
#include <stdio.h>
int main(){
    int Y= 2023;

    printf(Y % 100 == 0 ? (Y % 400 == 0 ? "L.Y" : "Not") : (Y % 4 == 0 ? "LY" : "NOT"));

    return 0;
}
```

# bitwise operator
- & and
- | OR
- ^ xor
- ~ one's complement
- <<  Left shift
- \>> Right shift


## XOR
| a | b |  ^ |
| --| -- | -- |
| 0 | 0  |  0 |
| 0 | 1  |  1 |
| 1 | 0  |  1 |
| 1 | 1  |  0 |

### 1 ^ 1  is 0 
### XOR does not gives Ladoo and gulab jamun both at same time

## odd or even 
```c
int num 
if ((num & 1) == 0) printf("even")
else printf("odd")
// we placed () because 
```

```
    do XOR 
    4 = 100         
          1
    5 = 101
```
using bitwise to flip last bit using ^ 1
```c
#include <stdio.h>
int main(){
    int n = 5;
    if((n ^ 1) == (n +1)){
        printf("even");
    }else {
        printf("odd");
    }

    return 0;
}

```