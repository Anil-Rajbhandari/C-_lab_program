#include <iostream>
using namespace std;
class student
{

    string  name;
    int stID;
public:
    void   getdata() {
        cout << "\n Enter folowing detail :-";
        cout << "\n Name :-";
        cin >> name;
        cout << "\n Student ID :-";
        cin >> stID;

    }
    void   putdata() {
        cout << "\n \n Dispalying detail: ";
        cout << "\n Name :-" << name;
        cout << "\n Student ID :-" << stID;
    }
};
class internal_exam : virtual public student
{
protected:
    int mark1, mark2, mark3;
public:
    void getmark() {
        cout << "Enter internal marks 3 in subject :";
        cin >> mark1 >> mark2 >> mark3;
    }
    
    void display() {
        cout << "\n Internal marks of subject 1:" << mark1 << endl;
        cout << "\n Internal marks of subject 2:" << mark2 << endl;
        cout << "\n Internal marks of subject 3:" << mark3 << endl;
    }
    int totalmark() {
        return mark1 + mark2 + mark3;
    }

};
class external_exam : virtual public student
{
    protected:
        int mark1, mark2, mark3;
public:
    void getmark() {
        cout << "Enter external marks 3 in subject :";
        cin >> mark1 >> mark2 >> mark3;
    }

    void display() {
        cout << "\n Extrenal marks of subject 1:" << mark1 << endl;
        cout << "\n External marks of subject 2:" << mark2 << endl;
        cout << "\n External marks of subject 3:" << mark3 << endl;
    }
    int totalmark() {
        return mark1 + mark2 + mark3;
    }
};
class result : public internal_exam, public external_exam
{
public:
    void getmark() {
        internal_exam::getmark();
        external_exam::getmark();
        
    }
    void display() {
        internal_exam::display();
        external_exam::display();
      
    }
    int totalmark() {
        return (internal_exam::totalmark() + external_exam::totalmark() );
   }
};
int main() {
    result r;
    r.getdata();
    r.getmark();
    r.putdata();
    r.display();
    cout<<"\n The total marks "<<r.totalmark();
    return 0;
}
