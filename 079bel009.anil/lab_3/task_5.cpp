#include<iostream>
using namespace std;
class Time{
	int hour;
	int minute;
	int second;
	public:
		Time():hour(0),minute(0),second(0){}
		Time(int h,int m ,int s):hour(h),minute(m),second(s){}
		void sum(Time t1,Time t2){
			second =t1.second +t2.second;
			minute =t1.minute +t2.minute+ second/60;
			hour =t1.hour +t2.hour+minute/60;
			minute =minute%60;
			second =second%60;
		}
		void sum(Time t){
			second =t.second +second;
			minute =t.minute +minute+ second/60;
			hour =t.hour +hour+minute/60;
			minute =minute%60;
			second =second%60;
		}
		void display(){
			cout<<"\nHour ="<<hour<<"\nMinute="<<minute<<"\n Second="<<second;
		}
	};

int main(){
	Time t1,t2(2,30,50),t3(5,4,30);
	t1.sum(t2,t3);
	cout <<"The sum of t2 and t3 ";
	t1.display();
	t1.sum(t2);
	cout <<"\n The sum of t1 and t2 ";
	t1.display();
	return 0;
	
}
