#include <iostream>
#include <string>
#include <map>
using namespace std;
int main(){
    map<string, int> table;
    pair<string, int> p1("ajay", 70);
    table.insert(p1);
    table.insert({"vijay", 80});
    table["gaurav"] = 90;

    for (map<string, int>::iterator it = table.begin(); it != table.end(); it++){
        cout << it->first << " " << it->second << endl;
    }
        return 0;
}