#include <iostream>
#include <map>
using namespace std;

int main(){
    int arr[] = {2, 2, 3, 4, 57, 2, 2, 4, 6, 8, 9};
    map<int, int> data;
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++){
        data[arr[i]]++;
    }

    for(auto it: data){
        cout << "element " << it.first << " occurence is: " << it.second << endl;
    }
        return 0;
}