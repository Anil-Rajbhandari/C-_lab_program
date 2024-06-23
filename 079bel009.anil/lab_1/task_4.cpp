#include<iostream>
using namespace std;
int sq(int x)
{
	cout<<"Operation done in integer data type"<<endl;
	return x*x;
}
float sq(float x)
{
	cout<<"Operation done in float data type"<<endl;
	return x*x;
}
double sq(double x)
{
	cout<<"Operation done in double data type"<<endl;
	return x*x;
}
int main(){
	int a,sq1;
	float b,sq2;
	double c,sq3;
	cout<<"Enter integer number"<<endl;
	cin>>a;
	cout<<"Enter float number"<<endl;
	cin>>b;
	cout<<"Enter double number"<<endl;
	cin>>c;
	sq1=sq(a);
	cout<<"The square of "<<a<<" is "<<sq1<<endl;
	sq2=sq(b);
	cout<<"The square of "<<b<<" is "<<sq2<<endl;
	sq3=sq(c);
	cout<<"The square of "<<c<<" is "<<sq3<<endl;
	return 0;
}
