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
	student s;
	cout<<"\nEnter the detail of student:-\n";
	s.inputdata();
	cout <<"Displaying in detail";
	s.displaydata();
	return 0;
	
}
