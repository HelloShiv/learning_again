# Looping / Iteration

### Types of Looping
- Entry controlled
- Exit controlled

| Entry controlled | Exit controlled |
| ---------------- | --------------- |
| | this loop executes atleast once |
| while |  do while|
| for   |  |

### syntax of while loop
```
    initialize;
    while (condition){      // Blank condition not allowed
        statements;
        inc/dec;
    }
```
Q1 print 1 , 2, 3 ,4 ,5 (n)
```c
    int i = 1 , n;
    while (i <= n){
        printf("%d ", i);
        i++;
        // whenever ++ is <= comes
    }
```

Q2 print 5, 4,3 2,1
```c
    int i = n;
    while ( i > 0){
        printf("%d, ", i);
        i--;
        // whenever -- >= comes
    }
    printf("\b ");  // \b makes a cursor back and space overwrites it
```
OR
```c
    while(i)
        printf("%d ", i--);
```
|Q1|Q3|Q4|Q5|Q6|Q7|
|:--:|:--:|:--:|:--:|:--:|:--:|
|1|1|1|1|0|1|
|2|4|8|3|2|0|
|3|9|27|5|4|1|
|4|16|64|7|6|0|
|5|25|125|9|8|1|
|print i| print i*i| print i*i*i | print 2*i -1 | print 2*i -2 | print i %2

pattern 1
```c
//  9 , 99 , 999 , 999
int main(){
    int n = 10;
    unsigned  long long int term = 9 , cnt = 1;
    while(cnt <= n){
        printf("%llu ", term);
        term = term * 10 + 9;
        cnt++;
    }

    return 0;
}
```
PATTERN 2
```c
// 1 , -1 , 1 , -1
int main(){
    int n = 10;
    int term = 1, cnt = 1;
    while (cnt <= n){
        printf("%d ,", term);
        term = term * -1;
        cnt++;
    }
    printf("\b ");

    return 0;
}
```
FIBONACHI 
```c
int main(){
    // 1 , 1 , 2 , 3 , 5 ,
    int n = 10;
    int term1 = 1, term2 = 1, cnt = 1, sum;
    
    while(cnt <= n){
        printf("%d ", term1);
        sum = term1 + term2;
        term1 = term2;
        term2 = sum;
        cnt++;
    }
    return 0;
}
```
Trigonachi (not sure about spelling)
```c
#include <stdio.h>
int main(){
    // 1 1 2 4 7 13
    int term1 = 1, term2 = 1, term3 = 2, sum, n = 10 ,cnt = 1;
    while(cnt <= n){
        printf("%d ", term1);
        sum = term1 + term2 + term3;
        term1 = term2;
        term2 = term3;
        term3 = sum;
        cnt++;
    }
    return 0;
}
```

## FOR LOOP
```c
for(initialize ; condition ; inc/dec)
    statement;
// blank condition means true
for(;;)
    printf('a');
// use logical operator && || for multiple condition
for(initialize ; condition && condition || condition ; inc/dec){

}
```
Q PRINT M
```c
#include <stdio.h>
int main(){
    int n = 5, i, j, mid;
    mid = (n + 1) / 2;
    for (i = 1; i <= n; i++){
        for (j = 1; j <= n; j++){
            if(i == 1 || i == mid || i == n || j == 1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
        return 0;
}
```


Q PRINT H
```c
#include <stdio.h>
int main(){
    int n = 5, i, j, mid;
    mid = (n + 1) / 2;
    for (i = 1; i <= n; i++){
        for (j = 1; j <= n; j++){
            if(i == mid || j == 1 || j == n )
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
        return 0;
}
```
Q PRINT X
```c
#include <stdio.h>
int main(){
    int n = 5, i, j, mid;
    mid = (n + 1) / 2;
    for (i = 1; i <= n; i++){
        for (j = 1; j <= n; j++){
            if( i == j || (i + j) == n + 1 )
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
        return 0;
}
```
Q Print this triangle
```c
    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5
```

**Always go  row by row**

Q pattern
```c
// 5 4 3 2 1 
// 4 3 2 1 
// 3 2 1 
// 2 1 
// 1 

#include <stdio.h>
int main(){
    int n = 5, i , j;
    for (i = n; i >= 1; i--){
        for (j = i; j >= 1  ; j--){
            printf("%d ", j);
        }
        printf("\n");
    }
        return 0;
}
```

**If any question gives character do it in numbers first eg**

```
    A       
    A B
    A B C
    A B C D
    A B C D E
    <!-- same as -->
    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5
```

Full triangle

```c
//         1 
//       1 2 3 
//     1 2 3 4 5 
//   1 2 3 4 5 6 7 
// 1 2 3 4 5 6 7 8 9 

#include <stdio.h>
int main(){
    int n = 5 , i , j , k;
    for (i = 1; i <= n; i++){
        for (k = 1; k <= n - i; k++){
            printf("  ");
        }
        for (j = 1; j <= 2 * i - 1; j++){
            printf("%d ", j);
        }
        printf("\n");
    }

        return 0;
}
```

PRINT Pattern A
```c
#include <stdio.h>
int main(){
    int n = 5 , i , j , k , mid;
    mid = (n + 1) / 2;
    for (i = 1; i <= n; i++)
    {
        for (k = 1; k <= n - i; k++){
            printf("  ");
        }
        for (j = 1; j <= 2 * i - 1; j++){
            if(j == 1 || j == 2*i -1 || i == mid ) 
                 printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

        return 0;
}
//         * 
//       *   * 
//     * * * * * 
//   *           * 
// *               * 

```
---
## Jump statement
### break
**break** is a keyword which is used to terminate a switch or a loop.
```c
#include <stdio.h>
int main(){
    int i;
    for (i = 1; i <= 5; i++){
        if(i == 3){
            break;
        }
        printf("%d ", i);
    }
    printf("maya");
    return 0;
}

```

```c
#include <stdio.h>
int main(){
    int a = 5;
    if(a >2){
        printf("hello");
        break;
        printf("bye");
    }
    return 0;
}

// OUTPUT IS ERROR
```
```c
#include <stdio.h>
int main(){
    int i , j;
    for(int i = 1; i <= 5 ; i++){
        foor(j = 1; j <= 5; j++){
            if(j > i){
                break;
            }
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}

// OUTPUT IS
// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5 
```

### continue
It is also a keyword it is used to skip all the remaining statements of a loop and jump to next round.

```c
#include <stdio.h>
int main(){
    int i;
    for (i = 1; i <= 5; i++){
        if(i == 3){
            continue;;
        }
        printf("%d ", i);
    }
    
    return 0;
}
//  output 1 2 4 5
```
Q Pattern
```
A B C D E D C B A
A B C D   D C B A
A B C       C B A
A B           B A
A               A
```
```c
#include <stdio.h>
int main(){
    int n = 5, i, j, k, l;
    for (i = n; i >= 1; i--){
        for (j = 1; j <= i; j++){
            printf("%c ", j+64);
        }
        for (k = 1; k <= 2 * (n - i) - 1;k++){
            printf("  ");
        }
        for (l = i; l >= 1; l--){
            if(l == n)
                continue;
            printf("%c ", l + 64);
        }
        printf("\n");
    }

    //mirror
    for (i = 1; i <= n; i++){
        for (j = 1; j <= i; j++){
            printf("%c ", j+64);
        }
        for (k = 1; k <= 2 * (n - i) - 1;k++){
            printf("  ");
        }
        for (l = i; l >= 1; l--){
            if(l == n)
                continue;
            printf("%c ", l + 64);
        }
        printf("\n");
    }
        return 0;
}

// error 
```