# String

`ascii of '\0'  is 0`

|'a'|"abc"|
|---|-----|
|char ch = 'a';| char s1[4] = "abc";|
|character     | String |


### Declaration of String
`char s1[20];  ` 

### String Initialize
`char s1[] = "Maya";`   // size is 5

### String Input
|In C| In C++|
|----|-------|
|scanf("%s",s1)||
|&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;^--- & is optional as it has address because of array| |

In C
- FOR SCANNING in C
```c
scanf("%s" , s1); //<---  & is optional here
                  // does not takes Space and Enter

gets(s1);   // does takes enter e.g "abc def"
```

- FOR PRINTING in C
```c

printf("%s",s1);    //--  string.h
//OR
puts(s1);           //--  string.h
// puts prints a enter too

```


In cpp take input
```cpp
    cin>>name;  // space and enter not allowed
    cin.getline(s1,20);    //----- enter and 19 chars not allowed
```
In cpp print output
```cpp
    std::cout << s1;
    std::cout.wirte(s1,strlen(s1));
```

## In C

`Keyboard in C is called stdin`     (Standard input device)

`Monitor in C is called stdout`     (Standard output device)



#### fix input 
##### using fflush
```c
#include <stdio.h>
int main(){
    int roll;
    char name[20];

    printf("Enter roll:");
    scanf("%d[^/n]", &roll);
    printf("Enter name: ");
    // scanf("%s" , name);
    fflush(stdin);
    gets(name);
    printf("Roll is %d\n", roll);

    return 0;
}
```

#### fixing scanf()
```c
#include <stdio.h>
int main(){
    int roll;
    char name[20];

    printf("Enter roll:");
    scanf("%d", &roll);
    printf("Enter name: ");
    // fflush(stdin);
    scanf("\n%[^\n]" , name);
    // gets(name);
    printf("Roll is %d\n", roll);
    printf("Roll is %s\n", name);
    

    return 0;
}
```

- Error fix 
```cpp
#include <iostream>
int main(){
    int age;
    char name[20];
    std::cout << "Enter age: ";
    std::cin >> age;
    std::cout << "Enter name: ";
    // std::cin >> name;
    std::cin.ignore();
    std::cin.getline(name, 20);

    std::cout << "Name: " << name << " age: " << age;
    return 0;
}
```

## String    (Study yourself)
- strlen
- strlwr (lowercase)
- strupr
- strrev
- strcpy
- strcat
- strcmp
- stricmp (ignore case compare)
- strstr (seraching)

```cpp
    char s1[20];
    cin.getline(s1,20);
    std::cout <<stlen(s1)<<std::endl;

    strupr(s1);     // call by address
    cout << s1 << endl;
    strlwr(s1); // call by address
```


### strcmp

```cpp

ans = strcmp(s1,s2);

ans = 1    s1 > s2
ans = -1   s1 < s2
ans = 0    s1 = s2  
```


## strstr
```c
int main(){
    char s1[50],s2[10];
    cin.getline(s1,50);
    cout << strstr(s1,s2) - s1;     // strstr finds the address and resturns the matching s2 in s1 and then we sub s1 to get the index
}
```

### stringlen && stringupr
```cpp
#include <iostream>

int len(char *name , int len){
    int i = 0;
    while (name[i] != (char)'\0')
    {
        i++;
    }
    return i;
}

void upr(char *name , int len){
    int i = 0;
    while (name[i] != (char)'\0')
    {
        if(name[i] >= 'a' && name[i] <= 'z'){
            name[i] -= 32;
        }
        i++;
    }
}

int main(){
    char name[20] = "hello there maya";
    // std::cin.getline(name,20);
    std::cout << len(name, 20)<<std::endl;
    upr(name, 20);
    std::cout << name;

    return 0;
}
```



### stringrev
```cpp
#include <iostream>
#include <algorithm>
#include <cstring>

void rev(char *name , int n){
    int left = 0, right = n-1;
    while(left < right){
        std::swap(name[left], name[right]);
        left++;
        right--;
    }
}

int main(){
    char name[20] = "hello there how";
    int length = std::strlen(name);
    rev(name, length);
    std::cout << name;
    return 0;
}
```

