#include<iostream>
using namespace std;
class Time{
    int hour, min,sec;
    public:
    Time(int h=0, int m=0, int s=0):hour(h), min(m), sec(s){}
    void display(){
        cout <<hour<<":"<<min<<":"<<sec<<"\n";
    }
     bool operator>(const Time&);
    bool operator!=(const Time&);
};
bool Time::operator>(const Time& t){
    if (hour>t.hour){
        return true;
    }
    else if (hour==t.hour && min>t.min){
        return true;
    }
    else if (hour==t.hour && min==t.min && sec>t.sec){
        return true;
    }
    else{
        return false;
    }
}
bool Time::operator!=(const Time& t){
    if (hour==t.hour && min==t.min && sec==t.sec){
        return false;
    }
    else{
        return true;
    }
}
int main (){
    Time t1(14,35,00), t2(10,45,00);
    cout <<"t1 :";
    t1.display();
    cout <<"\nt2 :"; 
    t2.display();
    if (t1>t2){
        cout <<"t1 is greater than t2.\n";
    }
    else{
        cout <<"t1 is not greater than t2.\n";
    }
    if(t1!=t2){
        cout <<"t1 is not equals to t2";
    }
    else{
        cout <<"t1 is equals to t2";
    }
    return 0;
}