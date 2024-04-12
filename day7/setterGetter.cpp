#include <iostream>
using namespace std;

class Date{
    private:
        int day, month, year;
    public:
        void setter(int d , int m , int y){
            if( d >= 1 && d <=31){
                day = d;
            }else{
                day = 1;
            }
            if( m >= 1 && m <=12){
                month = m;
            }else{
                month = 1;
            }
             year = y;
        }

        string getter(){
            string date = to_string(day) + '/' + to_string(month) + '/' + to_string(year);
            return date;
        }

};

int main(){
    Date dob;
    dob.setter(12, 1, 1220);

    cout << dob.getter()<<endl;

    return 0;
}