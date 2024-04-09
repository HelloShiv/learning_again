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