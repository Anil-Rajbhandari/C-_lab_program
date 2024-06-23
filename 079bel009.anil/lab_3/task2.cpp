#include<iostream>
using namespace std;

class student{
	string name;
	int roll;
	int  marks;
	string add;
	public:
		void inputdata(){
			cout<<"\nEnter name ";
			cin>>name;
			cout<<"\nEnter roll ";
			cin>>roll;
			cout<<"\nEnter marks ";
			cin>>marks;
			cout<<"\nEnter address ";
			cin>>add;
		}
			void displaydata(){
			cout<<"Enter name:-"<<name;
			cout<<"\n Enter roll:-"<<roll;
		
			cout<<"\n Enter marks:-"<<marks;
			cout<<"\n Enter address :-"<<add;
			cin>>add;
	}
	
};
int main(){
	int n;
	cout<<"Enter the number of student :-";
	cin >>n;
//	Time* times = new Time[n];
	student* s=new student[n];
	for(int i=0;i<n;i++){
	
	cout<<"\nEnter the detail of "<<i+1<<" student:-\n";
	s[i].inputdata();
	}
	for(int i=0;i<n;i++){
	cout <<"Displaying in detail";
	s[i].displaydata();
	}
	return 0;
	
}
