#include <iostream>
#include <algorithm>

int main(){
    int arr[] = {1, 23, 345241, 23, 456, 7583, 23};
    int n = sizeof(arr) / sizeof(int);
    int search;
    std::cin >> search;
    std::sort(arr, arr + n);
    int low = 0, high = n, mid ;
    while (low < high){
        mid = (low + high) / 2;
        if (arr[mid] == search)
        {
            std::cout <<"true";
            return 0;
        }
        else if (arr[mid] < search)
        {
            low = mid + 1;
        } else{
            high = mid - 1;
        }
    }
    std::cout <<"false";

    return 0;
}