#include <iostream>
using namespace std;

class Sim{
    public:
        virtual void calling() = 0;
        virtual void sms() = 0;
};
class Jio:public Sim
{
public:
    void calling(){
        cout << "Calling made from jio sim" << endl;
    }
    void sms(){
        cout << "sms sent from jio sim" << endl;
    }
};

class Bsnl:public Sim{
    public:
    void calling(){
        cout << "Calling made from bsnl sim" << endl;
    }
    void sms(){
        cout << "sms sent from bsnl sim" << endl;
    }
};

class Airtel:public Sim{
    public:
    void calling(){
        cout << "Calling made from airtel sim" << endl;
    }
    void sms(){
        cout << "sms sent from airtel sim" << endl;
    }
};

int main(){
    int n;
    cout << "1 for jio \n2 for bsnl \n3 for airtel \n Enter your choice: ";
    cin >> n;

    Sim *p;
    if (n == 1)
        p = new Jio();
    else if(n == 2)
        p = new Bsnl();
    else
        p = new Airtel();

    p->calling();
    p->sms();
    return 0;
}