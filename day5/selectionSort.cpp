#include <iostream>
#include <vector>

void selection_sort(int* arr , int n){
    for (int i = 0; i < n - 1; i++){
        for (int j = i + 1; j < n; j++){
            if(arr[i] > arr[j])
                std::swap(arr[i], arr[j]);
        }
    }
}

int main(){
    int arr[] = {1, 35, 7, 84, 23, 6};
    int size = sizeof(arr) / sizeof(int);
    selection_sort(arr ,size);

    for(auto it: arr){
        std::cout << it << " ,";
    }
    std::cout << "\b ";
    return 0;
}