#include <iostream>
using namespace std;
class student
{
    
    string  name;
    int stID;
    public:
    void   getdata(){
        cout <<"\n Enter folowing detail :-";
        cout <<"\n Name :-";
        cin>>name;
        cout<<"\n ;Student ID :-";
        cin >>stID;
        
    }
    void   putdata(){
        cout<<"\n \n Dispalying detail: ";
        cout <<"\n Name :-"<<name;
        cout<<"\n Student ID :-"<<stID;
    }
};
class teacher
{
   
    string  teacher_name;
    string subject;
    public:
    void   getdata(){

        cout <<"\n Teacher name :-";
        cin>>teacher_name;
        cout<<"\n Subject :-";
        cin>>subject;
    }
    void   putdata(){
         cout<<"\n \n Dispalying detail: ";
        cout <<"\n Name :-"<<teacher_name;
        cout<<"\n Subject :-"<<subject;
    }
};
class TA : public student, public teacher
{
public:
    void getdata() {
        student::getdata();
        teacher::getdata();
    }

    void putdata() {
        student::putdata();
        teacher::putdata();
    }
};
int main() {
    TA a;
    a.getdata();
    a.putdata();
    return 0;
}