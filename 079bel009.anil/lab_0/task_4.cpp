#include<iostream>
using namespace std;

struct detail{
	string name;
	int roll;
	int marks;
	
};
struct detail display(struct detail arr[3])
{
	for(int i=0;i<3;i++)
	{
		cout<<" the information of"<<i+1<<" student:"<<endl;
		cout<<arr[i].name<<endl;
		cout<<arr[i].roll<<endl;
		cout<<arr[i].marks<<endl;
	}
}
int main()
{
	struct detail student[3];
	for(int i=0;i<3;i++)
	{
		cout<<"Enter the information of"<<i+1<<" student:"<<endl;
		cin>>student[i].name>>student[i].roll>>student[i].marks;
	}
	display(student);
	
	return 0;
}
