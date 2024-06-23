#include<iostream>
using namespace std;
float perimeter(float r){
	return (3.14*r*r);
}
float perimeter(float a,float b, float c)
{
	return a+b+c;
}
float perimeter(float l,float b){
	return 2*(l+b);
}
int main(){
	float r,s1,s2,s3,l,b;

	cout <<"Enter the radius of circle"<<endl;
	cin>>r;
	cout<<"The perimeter of circle is :-"<<perimeter(r)<<endl;
	
	cout <<"Enter three side of triangle"<<endl;
	cin>>s1>>s2>>s3;
	cout<<"The perimeter of triangle is :-"<<perimeter(s1,s2,s3)<<endl;
	
	
	cout <<"Enter length and breadth rectangle"<<endl;
	cin>>l>>b;
	cout<<"The perimeter of circle is :-"<<perimeter(l,b)<<endl;
	return 0;
}
