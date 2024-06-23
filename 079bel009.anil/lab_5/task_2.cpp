#include<iostream>
using namespace std;
class Time{
    int hour, minute,second;
    public:
    Time(int h=0,int m=0 , int s=0) : hour(h), minute(m), second(s){}
    void display(){
        cout <<hour<<":"<<minute<<":"<<second<<endl;
    }
    friend Time& operator--(Time& t); 
    friend Time operator--(Time& t, int );
};
    Time& operator--(Time& t){
        //for prefix      
        --t.second;
        if(t.second <0){
            t.second +=60;
            t.minute --;
        }
         if(t.minute <0){
            t.minute +=60;
            t.hour --;
        }
        return t;
    }
     Time operator--(Time& t, int){
        //for postfix
        t.second--;
        if(t.second < 0){
            t.second +=60;
            t.minute --;
        }
         if(t.minute < 0){
            t.minute +=60;
            t.hour --;
        }
        return t; 
    }

int main(){
    Time t1(1,59,59);
    cout<<"The initial value:  ";
    t1.display();
    --t1;
    cout<<"Prefix decrement :-";
    t1.display();
    Time t2=t1--;
    cout<<"Postfix decrement:- ";
    t1.display();
    return 0;
}