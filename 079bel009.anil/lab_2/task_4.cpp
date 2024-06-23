#include<iostream>
using namespace std;
namespace doctor
{
    double salary=100000;
    void increase()
    {

        salary *=1.10;
    }
    void showsalary()
    {

        cout<<"Doctor salary ="<<doctor::salary<<endl;
    }
}
namespace engineer
{
    double salary=100000;
    void increase()
    {

        salary *=1.15;
    }
    void showsalary()
    {

        cout<<"Engineer salary ="<<engineer::salary<<endl;
    }
    void showdoctorsalary()
    {
        doctor::showsalary();
    }
}
int main()
{

    cout<<"Initial salary\n";
    doctor::showsalary();
    engineer::showsalary();

    cout <<"After increasing\n";
    doctor::increase();
    engineer::increase();
    doctor::showsalary();
    engineer::showsalary();
    using namespace engineer;
    cout<<"\n Accessing engineer namespace member directly:\n";
    showsalary();
    cout<<"\nAccessing Doctor salary from engineer namespace.\n";
    showdoctorsalary();
    return 0;

}

