#include <iostream>
#include <vector>

struct Student{
    int marks;
    char name[20];
    float percentage;
};
using namespace std;
int main()
{
    vector<Student> s;
    int n = 0;
    cout << "Enter size of student: ";
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        cout << "Enter s1 name , marks , percentage: ";
        cin >> s[i].name;
        cin.ignore();
        cin >> s[i].marks;
       
        cin>> s[i].percentage;
        cin.ignore();
        
    }

    Student res;
    for (int i = 1; i < s.size(); i++)
    {

        if (s[i-1].percentage > s[i].percentage)
        {
            res = s[i - 1];
        }
        else
        {
            res = s[i];
        }
    }

    cout << "Max is of " << res.name << " Percentage is: " << res.percentage;
    return 0;
}