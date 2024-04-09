#include <iostream>
int main(){
    int arr[3][4] = {{1, 2, 3, 4}, {4, 1, 3, 2}, {2,2,1,8}} , r = 3 , c = 4 , colsum[c] = {0};

    for (int i = 0; i < r; i++){
        int rsum = 0;
        for (int j = 0; j < c; j++)
        {
            rsum += arr[i][j];
            colsum[j] += arr[i][j];
        }
        std::cout << "arr row : " << rsum <<std::endl;
    }
    for(auto it: colsum){
        std::cout << it << " ";
    }

        return 0;
}