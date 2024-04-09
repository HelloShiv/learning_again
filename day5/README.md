# Array (Multiple values) :bear:
```cpp
    int m[3] = {70,80,90};
    std::cout << m[4];  // garbage value
    std::cout << m ; // array name denotes its base address
```
### what is an array?
Array is a **collection** of **homogeneous** elements stored continously under a single_name


```
addr=   100  104  108  112  116        // +4 size of int
        ________________________
arr[]=  |10 | 20 | 30 | 40 | 50 |
        |___|____|____|____|____|
index=    0    1    2    3    4
```

Increment in address
```cpp
#include <iostream>
int main(){
    int arr[] = {12, 34, 56, 75};
    std::cout << arr << std::endl;  // 0x7ffc6f1990c0
    std::cout << arr + 1;           // 0x7ffc6f1990c4
    return 0;       
}
```

PRINT ADDRESS AND ITS VALUES
```cpp
#include <iostream>
int main(){
    int arr[] = {12, 34, 56, 75};
    
    for(int i= 0 ; i < sizeof(arr)/sizeof(int) ; i++){
        std::cout << "Address of " << i << " " << arr + i<<std::endl;
    }

     for(int i= 0 ; i < sizeof(arr)/sizeof(int) ; i++){
        std::cout << "Value of " << i << " " << *(arr + i)<<std::endl;
    }
    return 0;
    // Address of 0 0x7ffe1f0da350
    // Address of 1 0x7ffe1f0da354
    // Address of 2 0x7ffe1f0da358
    // Address of 3 0x7ffe1f0da35c
    // Value of 0 12
    // Value of 1 34
    // Value of 2 56
    // Value of 3 75
}
```

- writing sytle 
  
  ` a[i] = *(a+i) `   
  `i[a] = *(i + a)`

  same
```cpp
    int a[10];
    &a[i]  , (a+i)      //same
    *(a+i) , a[i]       //same
```

```cpp
    int a[5] = {0}      // initialized all to zero
    int b[5] = {1,2}    // b[2] , b[3] , b[4]  gives 0;
```
# initialization
```cpp
#include <iostream>
int main(){
    int b[5] = {1, 2};
    for(auto it: b){
        std::cout << it<<std::endl;
    }
    return 0;
}

// 1
// 2
// 0
// 0
// 0
```
Using satic keyword
```cpp
#include <iostream>
int main(){
    static int b[5];
    for(auto it: b){
        std::cout << it<<std::endl;
    }
    return 0;
}

// 0
// 0
// 0
// 0
// 0
```

using global value
```cpp
#include <iostream>
     int b[5];
int main(){
    for(auto it: b){
        std::cout << it<<std::endl;
    }
    return 0;
}
// 0
// 0
// 0
// 0
// 0
```
---

## Passing arrray into function

```cpp
#include <iostream>
#include <climits>
int maxNum(int *arr,int n){
     int max = INT_MIN;
     for (int i = 0; i <= n; i++)
     {
         max = max > arr[i] ? max : arr[i];
     }
    return max;
}
int main(){
    int arr[] = {12, 34, 64, 234, 65674, 234, 12};
    
    std::cout << "max is: " << maxNum(arr , sizeof(arr)/sizeof(int)) << std::endl;

    // using function pointer
    int (*maya)(int *, int) = &maxNum;
    std::cout << "max is: " << maya(arr , sizeof(arr)/sizeof(int));

    return 0;
}
```

#### NOTE: all arrays are pointers in background


#### NOTE: when a pointer recieves base address of an array then that can behave like an array.



| static | Dynamic |
|--------|---------|
|int a[100],n | int * a ,4 |
|cin >> n     | cin >>n    |
|nowdays int n;|  a = new int[n]|
|int a[n];     | delete [] a |


### reverse array
```cpp
#include <iostream>
#include <bits/stdc++.h>


int main(){
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int n = sizeof(arr) / sizeof(int);

    // for (int left = 0, right = n-1; left <= right; left++ , right--){
    //     arr[left] = arr[right] - arr[left] + (arr[right] = arr[left]);
    // }
    for (int left = 0; left < n/2; left++ ){
        arr[left] = arr[n-left-1] - arr[left] + (arr[n-left-1] = arr[left]);
    }

    for(auto it : arr){
        std::cout << it << " ,"; 
    }
    std::cout << "\b ";
    return 0;
}
```

----
## For each loop: (c++)
```cpp
for(auto e : a){
    std::cout << a;
}
```

- Disadvantage
  - cannot write only read only
  - type must match with array elements type 
  - cant operate on partial array

### Predefined funtion
```cpp
    max(5,6);   //find the max 
    swap(12,23);    // swap the numbers
    *max_elements(arr, arr+n)
    sort(arr,arr+n)
    reverse(arr,arr+n)
```

```cpp
#include <iostream>
#include <algorithm>

int main()
{
    int arr[] = {1, 23, 543, 123, 4556, 234};
    int n = sizeof(arr) / sizeof(int);

    std::cout << *std::max_element(arr, arr + n) << std::endl;
    std::cout << *std::min_element(arr, arr + n) << std ::endl;
    return 0;
}
```

REVERSE VECTOR 
```cpp
#include <vector>
#include <iostream>

int main(){
    std::vector<int> v1 = {23, 23, 43, 54, 654, 234};
    for (auto itr = v1.rbegin(); itr != v1.rend(); itr++){
        std::cout << *itr << std::endl;
    }
        return 0;
}
```

### write on your own linear serach :angry: DIY


----

### how to write different number system
```
for binary     0b101
octal            057
decimal           25
for hexadecimal 0x1A
```