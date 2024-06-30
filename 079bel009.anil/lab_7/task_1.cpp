//WAP in CPP to illustrate the concept of single inheritance using following diagram.
#include <iostream>
using namespace std;
class employee

{
    protected:
    string  name;
    int age, salary;
    public:
    void   getdata(){
        cout <<"\n Enter folowing detail :-";
        cout <<"\n Name :-";
        cin>>name;
        cout<<"\n Age :-";
        cin >>age;
        cout <<"Salary:-";
        cin >>salary;
    }
    void   putdata(){
         cout<<"\n \n Dispalying detail: ";
        cout <<"\n Name :-"<<name;
        cout<<"\n Age :-"<<age;
        cout <<"Salary:-"<<salary;
    }

};
class manager: public employee
{
    string dep_name, dep_location;
    public:
    void getinfo(){
        employee::getdata();
        cout<<"\nDeparment name:-  ";
        cin>>dep_name;
        cout<<"\n Deparment location :- ";
        cin>>dep_location;
    }
    void putinfo(){
      employee::putdata();
        cout<<"\nDeparment name:-  "<<dep_name<<"\n Deparment location :- "<<dep_location;
    }
};
int main(){
    manager m;
    m.getinfo();
    m.putinfo();
    return 0;
}