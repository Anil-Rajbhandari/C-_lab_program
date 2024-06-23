#include<iostream>
using namespace std;
class measurement{
    int feet, inch;
    public:
    measurement(int f=0, int i=0):feet(f), inch(i){}
    void display(){
        cout <<feet<<":"<<inch;
    }
    friend measurement operator+(const measurement&,const measurement&);
};
    measurement operator+( const measurement &m1, const measurement &m2){
       int totalinch =(m1.feet+m2.feet)*12+m1.inch+m2.inch;
       int f=totalinch/12;
       int i =totalinch%12;
       return measurement(f,i);
    } 
int main(){
    measurement m1(1,6), m2(1,6),m3;
    m3 =m1+m2;
    m3.display();
    return 0;
}