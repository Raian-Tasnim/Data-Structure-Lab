#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter the size of Array1: ";
    cin>>a;

    int arr1[a];
    cout<<a<<" Elements into Array1: "<<endl;
    for(int i=0; i<a; i++)
        cin>>arr1[i];

    cout<<"Enter the size of Array2: "<<endl;
    cin>>b;

    int arr2[b];
    cout<<b<<" Elements into Array2: "<<endl;
    for(int i=0; i<b; i++)
        cin>>arr2[i];

    int m_arr[a+b];

    for(int i=0, j=a-1; i>a,j>=0; i++,j--)
        m_arr[i]=arr1[j];

    for(int i=a, j=a-1; i>(a+b),j>=0; i++,j--)
        m_arr[i]=arr2[j];

    cout<<"Array1 & Array2 Merged in Reverse Order:"<<endl;

    for(int i=0; i<a+b; i++)
        cout<<m_arr[i]<<"  ";

    return 0;
}

