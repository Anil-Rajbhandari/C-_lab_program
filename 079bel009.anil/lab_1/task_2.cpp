#include<iostream>
using namespace std;
inline float bmi(float w,float h){
	return w/(h*h);
}
int main(){
	float weight ,height,BMI;
	cout <<"Enter your weight in kg"<<endl;
	cin>>weight;
	cout <<"Enter your height in meter"<<endl;
	cin>>height;
	BMI=bmi(weight,height);
	cout<<"Your BMI score is "<<BMI;
	
	return 0;
}
