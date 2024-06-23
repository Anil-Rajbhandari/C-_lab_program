#include<iostream>
using namespace std;
class Time{
	int hour;
	int minute;
	int second;
	public:
		Time():hour(0),minute(0),second(0){}
		Time(int h,int m ,int s):hour(h),minute(m),second(s){}
		
		Time sum(Time&t)
		{
			Time temp;
			temp.second =t.second +second;
		temp.minute =t.minute +minute+ temp.second/60;
			temp.hour =t.hour +hour+temp.minute/60;
			temp.minute =temp.minute%60;
			temp.second =temp.second%60;
			return temp;
		}
		void display(){
			cout<<"\nHour = "<<hour<<"\nMinute= "<<minute<<"\nSecond= "<<second;
		}
};
int main(){
	Time t1, t2(2,30,50), t3(5,4,30);

	t1=t2.sum(t3);

	cout <<"The sum of t2 and t3 ";
	t1.display();

	return 0;
	
}
