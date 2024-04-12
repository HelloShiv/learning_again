#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v1;
    cout << "v1 size " << v1.size()<<endl;
    cout << "Capacity is: " << v1.capacity() << "  ";   // 0
    v1.push_back(10);
    cout << "v1 size " << v1.size()<<endl;
    cout << "Capacity is: " << v1.capacity()<< "  ";    // 1
    v1.push_back(30);
    cout << "v1 size " << v1.size()<<endl;
    cout << "Capacity is: " << v1.capacity()<< "  ";    // 2
    v1.push_back(30);
    cout << "v1 size " << v1.size()<<endl;
    cout << "Capacity is: " << v1.capacity()<< "  ";    // 2*2
    v1.push_back(40);
    cout << "v1 size " << v1.size()<<endl;
    cout << "Capacity is: " << v1.capacity()<< "  " << endl;

    for (vector<int>::iterator itr = v1.begin(); itr != v1.end(); itr++){
        cout << *itr << "\t";
    }

    cout << endl;
    for (vector<int>::reverse_iterator itr = v1.rbegin(); itr != v1.rend(); itr++){
        cout << *itr << "\t";
    }
    cout << endl;

    for (vector<int>::const_iterator itr = v1.begin(); itr != v1.end(); itr++){
        // cout << (*itr)++ << "\t";
        cout << *itr << "\t";
    }

    cout << endl;


    for (vector<int>::const_reverse_iterator itr = v1.rbegin(); itr != v1.rend(); itr++){
        cout << *itr << "\t";
    }
    cout << endl;

    return 0;
}
