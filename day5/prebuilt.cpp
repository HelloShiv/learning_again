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