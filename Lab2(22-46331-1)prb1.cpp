#include<iostream>
using namespace std;
int main()
{
    int arr1[10];
    int arr2[5];
    int arr3[20];
    int n=0;
    cout<<"Please take 10 input for Array1 : ";
    for(int i=0; i<10; i++)
        cin>>arr1[i];
    cout<<"elements of arr1 : ";
    for(int i=0; i<10; i++)
        cout<<arr1[i]<<endl;

    cout<<endl;
    cout<<"Please take 5 input for arr2 : ";
    for(int i=0; i<7; i++)
        cin>>arr2[i];
    cout<<"elements of arr2 : ";
    for(int i=0; i<5; i++)
        cout<<arr2[i]<<endl;

    for(int i=0; i<10; i++)
    {
        for(int j=0; j<5; j++)
        {
            if(arr1[i]==arr2[j])
            {
                arr3[n]=arr2[j];
                n++;
            }
        }
    }

    cout<<endl;
    if(n==0)
    {
        cout<<"there is no common point"<<endl;
    }
    else
    {
        {
            cout<<"Common elements are: ";
        }
        for(int i=0 ; i<n; i++)
            cout<<arr3[i]<<endl;
    }
}
