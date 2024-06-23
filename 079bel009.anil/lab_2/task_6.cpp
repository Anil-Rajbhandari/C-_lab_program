#include<iostream>
using namespace std;

class Distance
{
	private:
    int feet;
	int inches;
public:
    void setdata(){
        feet=0;
        inches =0;

    }
    void setdata(int x, int y){
        feet=x;
        inches =y;

    }
    void inputdata()
    {

        cout <<"Enter feet\n";
        cin>>feet;
        cout <<"Enter inches\n";
        cin>>inches;
    }
    double tometer()
    {

        double totalinches =feet *12+ inches;
        double meter =totalinches *.0254;
        return meter;
    }
    void display()
    {

        cout <<"Distance in meter "<<tometer()<<"meter"<<endl;
    }
};
int main()
{
    Distance d1,d2;
    d1.inputdata();
    d1.display();

    d2.setdata(10,5);
    d2.display();
    return 0;
}
