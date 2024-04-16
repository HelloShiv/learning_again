#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, float> m1;
    pair<int, float> p1(101, 67.5f);
    m1.insert(p1);

    // or
    m1.insert(pair<int, float>(104, 90.2f));

    // or
    m1.insert({103, 75.3f});
    // or
    m1[102] = 32.3f;

    for(pair<int,float> it: m1){
        cout << it.first << "  " << it.second << endl;
    }

    // using manual iterator
    for (map<int, float>::iterator itr = m1.begin(); itr != m1.end(); itr++)
    {
        cout << itr->first << " " << itr->second << endl;
        cout << (*itr).first << " " << (*itr).second << endl;
    }
    return 0;
}