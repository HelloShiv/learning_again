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
    
    std::cout << "max is: " << maxNum(arr , sizeof(arr)/sizeof(int));

    int (*maya)(int *, int) = &maxNum;
    std::cout << "max is: " << maya(arr , sizeof(arr)/sizeof(int));

    return 0;
}