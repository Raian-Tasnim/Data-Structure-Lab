#include<iostream>
using namespace std;
int main()
{
    int arr[]= {1,2,4,5,7,8,19,20,21,23,24,45,60};
    cout<<"the even numbers are: "<<endl;
    for(int i=0; i<13; i++)
    {
        if(arr[i]%2==0)
        {
            cout<<arr[i]<<"  ";
        }
    }
    cout<<endl;
    cout<<"the odd numbers are:"<<endl;
    for(int i=0; i<13; i++)
    {
        if(arr[i]%2!=0)
        {
            cout<<arr[i]<<"  ";
        }
    }
    cout<<endl;
    return 0;
}
