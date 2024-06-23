#include<iostream>
using namespace std;
class vehical
{

    int modelnumber;
    string modelname;
    double cost;
public:
    void getdata()
    {

        cout<<"\nEnter the model number of vehical:- ";
        cin>>modelnumber;
        cout<<"\nEnter the model name of vehical:- ";
        cin>>modelname;
        cout<<"\nEnter the cost of vehical:-";
        cin>>cost;
    }
    void display()
    {

        cout <<"\nModel number:-"<<modelnumber;
        cout <<"\nModel name:-"<<modelname;
        cout <<"\nCost:-"<<cost;
    }
};
int main()
{
    vehical v1,v2;
    v1.getdata();
    v2.getdata();

    cout <<"\nVehical 1 detail";
    v1.display();
    cout <<"\nVehical 2 detail";
    v2.display();
    return 0;
}
