#include <iostream>
using namespace std;
class matrix{
    int mat[3][3];
    public:
    matrix(){
        for (int i=0;i<3;i++)
        {
            for (int j=0; j<3;j++)
            {
                mat[i][j]=0;
            }
        }}
    void getdata(){
        for (int i=0;i<3;i++){
            for (int j=0; j<3;j++){
                cin>>mat[i][j];
            }
        }
    }
    void display(){
        for (int i=0;i<3;i++){
            for (int j=0; j<3;j++){
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    matrix operator *( const matrix m1);
};
matrix matrix::operator *( const matrix m) {
        matrix temp;
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                for (int k = 0; k < 3; k++)
                    temp.mat[i][j] += mat[i][k] * m.mat[k][j];
        return temp;
    }
int main(){
    matrix m1 ,m2 , m3;
    cout <<"Enter first matrix:-\n";
    m1.getdata();
    cout <<"Enter second matrix:-\n";
    m2.getdata();
    m3=m1*m2;
    cout <<"Displaying product matrix:-\n";
    m3.display();
    return 0;
}