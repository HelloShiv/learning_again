#include <iostream>
#include <algorithm>
using namespace std;

class Array{
    int arr[100];
    int n;
    public:
    void input( ){
        cout << "Enter n: ";
        cin >> n;
        for (int i = 0; i < n; i++){
            cout << "Enter number: ";
            cin >> arr[i];
        }
    }
    void sortt(){
        // sort(arr, arr + n);
        for (int i = 0; i < n - 1; i++){
            for (int j = i + 1; j < n; j++){
                if(arr[i]>arr[j])
                    swap(arr[i], arr[j]);
            }
        }
    }

    void reversee(){
        int left = 0, right = n-1;
        while(left <= right){
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }

    void display(){
        for (int i = 0; i < n;i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main(){
    Array a;
    a.input();
    a.display();
    a.sortt();
    a.display();
    return 0;
}