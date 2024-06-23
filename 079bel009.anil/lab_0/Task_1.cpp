#include<iostream>
using namespace std ;
int main()
{
    int arr[100],temp,i,j;
    cout<<"Enter any 5 element  ";
    for (i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    for (i=0;i<5;i++){
        for(j=i;j<5;j++){
            if(arr[j]>arr[i]){
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    cout<<"The second largest number is "<<arr[1];
    return 0;
}
