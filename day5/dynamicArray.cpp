#include <iostream>
#include <climits>
#include <bits/stdc++.h>
int main(){
    int *a, n, ans , maxn = INT_MIN;
    std::cout << "Enter the size of array: ";
    std::cin >> n;
    a = new int[n];
    for (int i = 0; i <= n; i++){
        std::cout << "Enter element: ";
        std::cin >> a[i];
    }
    for(auto it: a){
        maxn = std::max(maxn, it);
    }
    
        return 0;
}