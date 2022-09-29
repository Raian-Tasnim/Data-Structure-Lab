#include<iostream>
using namespace std;
int main()
{
    int arr[]= {1,2,4,5,7,8,19,20,21,23,24,45,60};
    cout<<"Normal Order:"<<endl;
    for(int i=0; i<13; i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
    cout<<"Reverse Order: "<<endl;
    for(int i=12; i>=0; i--)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
    return 0;
}
