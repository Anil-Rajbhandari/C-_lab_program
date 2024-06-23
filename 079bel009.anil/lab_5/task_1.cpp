#include<iostream>
using namespace std;
class Time{
    int hour, minute,second;
    public:
    Time(int h=0,int m=0 , int s=0) : hour(h), minute(m), second(s){}
    void display(){
        cout <<hour<<":"<<minute<<":"<<second<<endl;
    }
    Time operator ++(){
        //for prefix
        Time temp;
        ++second;
        if(second >= 60){
            second -=60;
            minute ++;
        }
         if(minute >= 60){
            minute -=60;
            hour ++;
        }
        return temp;
    }
     Time operator ++(int){
        //for postfix
        Time temp=*this;
        ++*this;
           return temp;
    }
};
int main(){
    Time t1(1,59,59);
    cout<<"The initial value:  ";
    t1.display();
    ++t1;
    cout<<"Prefix increament :-";
    t1.display();
    Time t2=t1++;
    cout<<"Postfix increament:- ";
    t1.display();
    return 0;
}