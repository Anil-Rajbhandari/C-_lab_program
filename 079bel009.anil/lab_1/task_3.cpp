#include<iostream>
using namespace std;
int  totalfee(int tf=5000,int t=2000, int l=3000){
	return (tf+t+l);
}
int main()
{
	int mp,mm,mh;
	mp=totalfee();
	mm=totalfee(8000,3000);
	mh=totalfee(10000,3000);
	cout<<"The monthly fee of primary school is:-"<<mp<<endl;
	cout<<"The monthly fee of middle school is:-"<<mm<<endl;
	cout<<"The monthly fee of high school is:-"<<mh<<endl;
	return 0;
}
