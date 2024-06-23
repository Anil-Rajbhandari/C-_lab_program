#include<iostream>
using namespace std;
int main(){
	int i,n,sum=0,avg;
	float *ptr;
	cout<<"Enter the size of array";
	cin>>n;
	ptr=new float[n];
	for ( i=0;i<n;i++){
		cout<<"Enter the number of "<<i+1<<"th term"<<endl;
		cin>>ptr[i];
		sum=sum+ptr[i];
	}
	avg=sum/n;
	cout<<"The entered number are:-"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<ptr[i]<<endl;
	}
	cout<<"The sum of these numbers is:-"<<sum<<endl;
	cout<<"The average of these number is :-"<<avg<<endl;
	return 0;
}
